#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age ";
    cin >> age;
    cout << "You are " << age << " years old.";
    // 
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "." << endl;
}