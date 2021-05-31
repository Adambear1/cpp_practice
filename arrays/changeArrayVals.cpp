#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;
    // 'new' is a command to allocate memory.
    // 'delete' is a command that deallocates memory so it can be reused.
    // new & delete should always be used in tandom to create/end memory during runtime.
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Current index is " << i << endl;
        cin >> arr[i];
    };
    for (int i = 0; i < size; i++)
    {
        cout << *(arr+i) << " ";
    };

    delete[]arr;
    arr = NULL;
    return 0;
}