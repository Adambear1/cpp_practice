#include <iostream>
using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = true;
    if(isMale && isTall){
        cout << "You are a tall male, sir.";
    } else if (isMale) {
        cout << "You a short male.";
    } else if (isTall){
        cout << "You are a tall female.";
    } else {
        cout << "You are a short female.";
    }
}