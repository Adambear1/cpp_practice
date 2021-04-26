#include <iostream>
using namespace std;

int main()
{
    int index = 100;
    do {
        cout << index << endl;
        cout << "This line gets executed no matter what, at least once";
    }
    while (index < 99);
}