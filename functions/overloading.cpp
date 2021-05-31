#include <iostream>
using namespace std;

// Important because functions can hold same name and functionality, but must be defined differently.
int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b);

int main()
{
    cout << sum(4, 3) << endl;
    cout << sum(4.1, 3.0) << endl;
    return 0;
};
int sum(int a, int b)
{
    return a + b;
};
double sum(double a, double b)
{
    return a + b;
};
float sum(float a, float b, float c)
{
    return a + b + c;
};