#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

// Can only be executed with condition + while loop to act as trigger
// Condition is the logic within the while loop; the condition itself (while) is a means for waiting threads.
// Once while condition is true, then variable is executed.
// Inside of while loop prevents and spurious waking of threads
int soup_servings = 10;
mutex slow_cooker_lid;
condition_variable soup_taken;

void hungry_person(int id)
{
    int put_lid_back = 0;
    while (soup_servings > 0)
    {
        unique_lock<mutex> lid_lock(slow_cooker_lid);
        while ((id == soup_servings % 2) && (soup_servings > 0))
        {
            put_lid_back++;
            soup_taken.wait(lid_lock);
        }
        if (soup_servings > 0)
        {
            soup_servings--;
            lid_lock.unlock();
            soup_taken.notify_all();
        }
    }
    printf("Person %d put the lid back %u times.\n", id, put_lid_back);
}

int main()
{
    thread hungry_threads[5];
    for (int i = 0; i < 5; i++)
    {
        hungry_threads[i] = thread(hungry_person, i);
    };
    for (auto &ht : hungry_threads)
    {
        ht.join();
    };
}