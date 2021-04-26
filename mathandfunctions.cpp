#include <iostream>
using namespace std;

int cube(int num){
    return num * num * num;
}

int main()
{
    int input;
    cout << "Enter a number to cube!:   ";
    cin >> input;
    cout << cube(input);
    return 0;
}