#include <iostream>
using namespace std;


int getMin(int nums[], int size)
{
    int min = nums[0];
    for (int i = 1; i < size; i++)
    {
        if(nums[i] < min)
        {
            min = nums[i];
        }
    };
    return min;
};
int getMax(int nums[], int size)
{
    int max = nums[0];
    for (int i = 1; i < size; i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        };
    };
    return max;
}

void getMinAndMax(int nums[], int size, int* min, int* max)
{
    for (int i = 1; i < size; i++)
    {
        if (nums[i] > *max)
        {
            *max = nums[i];
        };
        if (nums[i] < *min)
        {
            *min = nums[i];
        };
    }
}
int main()
{
    int num[5] = {5,4,3,2,1 };
    int min = num[0], max = num[0];
    cout << "Minimum num in array is " << getMin(num, 5) << endl;
    cout << "Maximum num in array is " << getMax(num, 5) << endl;
    getMinAndMax(num, 5, &min, &max);
    cout << "Min/Max is " << min << " and " << max  << endl;
    return 0;
}