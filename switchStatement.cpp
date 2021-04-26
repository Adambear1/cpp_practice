#include <iostream>
using namespace std;

string dayOfWeek(int dayNum){
    string dayName;
    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            break;
    }
    cout << "Today is " << dayName << endl;
}

int main()
{
    int input;
    cout << "Give numeric value for day of week";
    cin >> input;
    dayOfWeek(input);
    return main();
}