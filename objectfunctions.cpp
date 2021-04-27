#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student (string a_name, string a_major, double a_gpa){
            name = a_name;
            major = a_major;
            gpa = a_gpa;
        }

        bool  hasHonors(){
            if (gpa >= 3){
                return true;
            } else {
                return false;
            }
        }
};

int main()
{
    Student newStudent("Adam", "Economics", 4.00);
    cout << newStudent.hasHonors();
    return 0;
}