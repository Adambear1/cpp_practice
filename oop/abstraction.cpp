#include <iostream>
using namespace std;

// Is abstraction when making class type a pure virtual function
class AbstractEmployee
{
    // virtual == abstraction (pure)
    // When envoked, the envoking class must provide implimentation for the provided method.
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string name)
        {
            Name = name;
        };
        string getName()
        {
            return Name;
        };
        void setCompnay(string company)
        {
            Company = company;
        };
        string getCompany()
        {
            return Company;
        };
        void setAge(int age)
        {
            Age = age;
        };
        int getAge()
        {
            return Age;
        };
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        };
        void AskForPromotion()
        {
            if (Age > 30)
            {
                cout << Name << " got promoted because they are " << Age << " which is older than 30." << "\n";
            }
            else
            {
                cout << "Sorry, " << Name << " you did not receive the promotion because you are only " << Age << " years old." << "\n";
            }
        };
};

int main()
{
    Employee emp1 = Employee("Adam", "RHUX Analytics", 20);
    Employee emp2 = Employee("Michael", "RHUX Analytics", 43);
    emp1.AskForPromotion();
    emp2.AskForPromotion();
    return 0;
}