#include <iostream>
using namespace std;

int main()
{
    int age = 24;
    // Pointer variables are defined/designated by *p(var name)
    // Variable intake has ampersand (&) before.
    int *pAge = &age;
    double gpa = 3.89;
    double *pGpa = &gpa;
    string name = "Adam";
    string *pName = &name;

    // & <-- declares/shows where variable name is stored in memory.
    // Returns hexidecimal number.
    // Pointer === Memory Address.
    cout << pAge << " " << pGpa << " " << pName;

    return 0;
}