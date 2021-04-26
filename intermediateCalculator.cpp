#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    string op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    if (op == "+"){
        cout << num1 + num2;
    }
    if (op == "-"){
        cout << num1 - num2;
    }
    if (op == "/"){
        cout << num1 / num2;
    }
    if (op == "*"){
        cout << num1 * num2;
    }
    cout << "Invalid Operator!";
    return main();
}