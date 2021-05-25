#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <locale>
using namespace std;

// 'Given' procedure that's built in for code, and referenced for future instances.
// --> Such procedures tend to be pivotal, but do not change/are static.
// --> Abstraction level stays the same, output for end user remains the same.
// --> "Main level component; internal business logic"
// --> --> Essentially compiling difficult tasks into one mean/method to produce same outcome everyitme.
class SmartPhone
{
public:
    // When done as pure virtual function, then function (abstraction)
    // is stored/reserved for use abstraction use.
    virtual void TakeScreenShot() = 0; // Pure virtual function, makes it an abstract class
    virtual void MakePhoneCall() = 0;
    virtual void TextFriend() = 0;
};


// Syntax essentially says "new class publically inherits all abstractions from previous class"
class GooglePixel : public SmartPhone
{
public:
    void TakeScreenShot()
    {
        cout << "\nScreenshot Taken! \n";
    };
    void MakePhoneCall()
    {
        cout << "\nCalling A Friend! \n";
    };
    void TextFriend()
    {
        cout << "\nTexting a Friend! \n";
    };
};

int user_interaction()
{
    SmartPhone *phone = new GooglePixel();
    locale loc;
    char choice;
    cout << "\n\t Please Choose One!\n";
    cout << "Would you like to: \n [a] make a phone call. \n [b] take a screenshot. \n [c] text a friend?\n\n";
    cin >> choice;
    // Pointer to abstraction (core), and redefines, gives variable name (phone)
    // and assigns to new instance of GooglePixel.
    // -> is used instead of . notation when accessing members of class via pointer functions.
    if (choice == 'a')
    {
        phone->MakePhoneCall();
        user_interaction();
    }
    if (choice == 'b')
    {
        phone->TakeScreenShot();
        user_interaction();
    }
    if (choice == 'c')
    {
        phone->TextFriend();
        user_interaction();
    }
    cout << "Invalid Option! Try Again! \n";
    user_interaction();
    return 0;
};

int main()
{
    user_interaction();
    return 0;
};
