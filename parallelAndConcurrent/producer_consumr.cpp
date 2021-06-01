#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>


using namespace std;

class ServingLine {
    public:
        void serve_soup(int i)
        {
            unique_lock<mutex> ladle_lock(ladle);
            soup_queue.push(i);
            ladle_lock.unlock();
            soup_served.notify_one();
        }
        int take_soup()
        {
            unique_lock<mutex> ladle_lock(ladle);
            while (soup_queue.empty())
            {
                soup_served.wait(ladle_lock);
            };
            int bowl = soup_queue.front();
            soup_queue.pop();
            return bowl;
        }
    private:
        queue<int> soup_queue;
        mutex ladle;
        condition_variable soup_served;

};

ServingLine serving_line = ServingLine();

void soup_producer()
{
    for (int i = 0; i < 10000000; i++)
    {
        serving_line.serve_soup(1);
    };
    serving_line.serve_soup(-1);
    printf("Producer is done serving soup!\n");
}

void soup_consumer()
{
    int soup_eaten = 0;
    while (true)
    {
        int bowl = serving_line.take_soup();
        if (bowl < 0)
        {
            printf("Consumer ate %d bowls of soup.\n", soup_eaten);
            serving_line.serve_soup(-1);
            return;
        }
        else
        {
            soup_eaten += bowl;
        }
    }
}

int main()
{
    thread adam(soup_producer);
    thread mike(soup_consumer);
    thread jane(soup_consumer);
    adam.join();
    mike.join();
    jane.join();
}