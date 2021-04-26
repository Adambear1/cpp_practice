#include <iostream>
using namespace std;

int main()
{
    int grid[3][4] = {
        {1, 2, 3, 4},
        {1, 3, 5, 7},
        {2, 4, 6, 8}
    };
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << grid[i][j] << "\n";
        }
    }
    return 0;
}