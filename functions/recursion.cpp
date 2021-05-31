#include <iostream>
using namespace std;

int recursive(int m, int n)
{
    if(m == n + 1)
    {
        return m;
    };
    cout << m << endl;
    return m + recursive(m+1, n);
}
// TASK
// Sum nums between m + n
int main()
{
    int m = 2, n = 10;
    // while loop
    // while (m < n + 1)
    // {
    //     cout << m << endl;
    //     m ++;
    // };
    // for loop
    // for (int i = m; i < n + 1; i++)
    // {
    //     cout << i << endl;
    // }
    recursive(m, n);
    return 0;
};