#include <iostream>
using namespace std;

class Abstract {
    virtual void isOld() = 0;
    virtual void getsPromoted() = 0;
};

class Employee:Abstract
{
    private:
        protected:
            string Name;
            string Company;
            int Age;
    public:
        string getName()
        {
            return Name;
        };
        void setName(string name)
        {
            Name = name;
        };
        string getCompany()
        {
            return Company;
        };
        void setCompany(string company)
        {
            Company = company;
        };
        int getAge()
        {
            return Age;
        };
        void setAge(int age)
        {
            Age = age;
        }
        void isOld()
        {
            cout << (Age > 18 ? false : true) << "\n";
        }
        void getsPromoted()
        {
            Age > 35 ? cout << Name << " is eligable for a promotion! \n" : cout << "Sorry, " << Name << " is not old enough to receive a promotion yet." << "\n";
        }
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }
};

class SoftwareEngineer:public Employee
{
    public:
        string MainLanguage;
        SoftwareEngineer(string name, string company, int age, string mainLanguage )
         :Employee(name, company, age)
        {
            MainLanguage = mainLanguage;
        };
        void FixBug()
        {
            cout << Name << " fixed a bug in " << MainLanguage << "\n";
        };
};

class Instructor: public Employee
{
    public:
        string Subject;
        void Lesson()
        {
            cout << Name << " is lecturing a course on " << Subject << " today." << "\n";
        }
        Instructor(string name, string company, int age, string subject)
        :Employee(name, company, age)
        {
            Subject = subject;
        };
};
int main()
{
    Employee young = Employee("Adam", "RHUX Analytics", 17);
    Employee old = Employee("Sam", "RHUX Analytics", 39);
    young.isOld();
    old.isOld();
    SoftwareEngineer juniorDeveloper = SoftwareEngineer("Adam", "RHUX Analytics", 30, "Python");
    juniorDeveloper.FixBug();
    juniorDeveloper.isOld();
    Instructor biomechanics = Instructor ("Brad", "University of Washington", 42, "Quantum Physics");
    biomechanics.Lesson();
    biomechanics.getsPromoted();
    juniorDeveloper.getsPromoted();
    return 0;
}