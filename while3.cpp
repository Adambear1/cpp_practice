#include <iostream>
using namespace std;

int main()
{
    int secret = 10;
    int guess;
    int count = 0;
    int limit = 3;
    bool guessRemaining = true;

    while(secret != guess && guessRemaining){
        if(count < limit){
        cout << "Enter guess: ";
        cin >> guess;
        count ++;
    } else {
        guessRemaining = false;
        }
}
    if (!guessRemaining){
        cout << "You lose!";
    } else{
        cout << "You win!";
    }
}