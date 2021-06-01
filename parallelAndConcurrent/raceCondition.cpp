#include <thread>
#include <mutex>
#include <boost/thread/barrier.hpp>
using namespace std;

unsigned int bags_of_chips = 1;
mutex pencil;
barrier fist_pump(10);

void cpu_work(unsigned long workUnits)
{
    unsigned long x = 0;
    for (unsigned long i; i < workUnits * 100000000; i++)
    {
        x++;
    };
};

void john_shopper()
{
    cpu_work(1);
    fist_bump.wait();
    scoped_lock<mutex> lock(pencil);
    bags_of_chips *= 2;
    printf("John DOUBLED the bags of chips.\n")
}

void sam_shopper()
{
    cpu_work(1);
    {
        scoped_lock<mutex> lock(pencil);
        bags_of_chips += 3;
    }
    printf("Sam ADDED 3 bags of chips");
    fist_bump.wait();
}

int main()
{
    thread shoppers[10];
    for (int i = 0; i < 10; i += 2)
    {
        shoppers[i] = thread(john_shopper);
        shoppers[i + 1] = thread(sam_shopper);
    };
    for (auto &s : shoppers)
    {
        s.join();
    };
    printf("We need to buy %u bags of chips.\n", bags_of_chips);
};