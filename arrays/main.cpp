#include <iostream>
using namespace std;

// All elements in array must be of same datatype.
// Number/initializer [7], does not need to be initiated explicitly.
float arr[7] = {100, 210, 330, 435, 500, 625, 700};
int main()
{
    int total = 0;
    int average;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        total += arr[i];
        cout << total  << "\n";
        average = total / (i + 1);
        cout << "Average - " <<  average << "\n";
    }
    return 0;
}