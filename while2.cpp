#include <iostream>
using namespace std;

int main()
{
    int secret = 10;
    int guess;

    while (secret != guess){
        cout << "Guess a number 1 - 20.";
        cin >> guess;
    }
    cout << "Correct!";

}