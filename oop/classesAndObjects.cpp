#include <iostream>
using namespace std;

class Employee{
    // Access Modifiers:
    //   -  Private
    //      - Not accessible outside of class.
    //      - Classes are private by default.
    //   -  Public
    //      - Accessible outside of class.
    //   -  Protected
    //      - Mix of private/public (inheritance purposes).
    public:
        string Name;
        string Company;
        int Age;

        void introduction()
        {
            cout << "Name - " << Name << "\n";
            cout << "Company - " << Company << "\n";
            cout << "Age - " << Age << "\n";
        }
    // Constructor:
    // Custom method that is evoked eachtime an object of class is created.
    // Even constructor is not explicitly stated, default constructor is automatically created by compiler [default constructor].
    //     - Method with no specific return type [Not void, int, string, bool... etc.].
    //     - Has same name of class it belongs to [Employee -> Employee].
    //     - Must be public.
        Employee(string a_name, string a_company, int a_age)
        {
            Name = a_name;
            Company = a_company;
            Age = a_age;
        }
};
int main()
{
    // Employee software_developer;
    Employee software_developer = Employee("Adam", "RHUX Analytics", 24);
    // software_developer.Name = "Adam";
    // software_developer.Company = "RHUX Analytics";
    // software_developer.Age = 24;
    software_developer.introduction();
    // Employee marketing_manager;
    Employee marketing_manager = Employee("Cassidy", "RHUX Analytis", 23);
    // marketing_manager.Name = "Cassidy";
    // marketing_manager.Company = "RHUX Analytics";
    // marketing_manager.Age = 23;
    marketing_manager.introduction();
    return 0;
}

