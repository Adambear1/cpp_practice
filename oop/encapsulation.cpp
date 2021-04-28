#include <iostream>
using namespace std;

class Employee{
    private:
        string Name;
        string Company;
        int Age;
    // Encapsulation means to get/set variables. Purposeful to protect private data points, but to allow access if/when needed.
    public:
        void setName(string a_name)
        {
            Name = a_name;
        }
        string getName()
        {
            return Name;
        }
        void setCompany(string a_company)
        {
            Company = a_company;
        }
        string getCompany()
        {
            return Company;
        }
        void setAge(int a_age)
        {
            Age = a_age;
        }
        int getAge()
        {
            return Age;
        }
        void introduction()
        {
            cout << "Name: " << getName() << "\n";
            cout << "Company: " << getCompany() << "\n";
            cout << "Age: " << getAge() << "\n";
        }
        Employee(string a_name, string a_company, int a_age)
        {
            Name = a_name;
            Company = a_company;
            Age = a_age;
        }
};

int main()
{
    Employee software_developer = Employee("Adam", "RHUX Analytics", 24);
    cout << software_developer.getName() << "\n";
    return 0;
}