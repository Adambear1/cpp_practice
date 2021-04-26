#include <iostream>
#include <string>
using namespace std;

void second(string message){
    cout << "second! " << message << "." << endl;
}

int main()
{
    string message;
    cout << "Enter a custom message! \n";
    getline(cin, message);
    cout << "first \n";
    second(message);
    cout << "third \n";
    return 0;
}