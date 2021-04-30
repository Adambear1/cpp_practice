#include <iostream>
using namespace std;

// Structure is model/blueprint. Not actual data.
struct SmartPhone {
    string Name;
    int Storage;
    string Color;
    float Price;
};

struct Person {
    string Name;
    int Age;
    SmartPhone phone;
};

void describePhone(SmartPhone phone)
{
    cout << "Name - " << phone.Name << "\n";
    cout << "Storage - " << phone.Storage << "\n";
    cout << "Color - " << phone.Color << "\n";
    cout << "Price - " << phone.Price << "\n";
};

void describePerson(Person person)
{
    cout << "Name - " << person.Name << "\n";
    cout << "Age - " << person.Age << "\n";
    describePhone(person.phone);

}

int main()
{
    SmartPhone iPhone;
    iPhone.Name = "iPhone 12";
    iPhone.Color = "Black";
    iPhone.Storage = 124;
    iPhone.Price = 999.99;
    describePhone(iPhone);

    Person Adam;
    Adam.Name = "Adam";
    Adam.Age = 24;
    Adam.phone = iPhone;
    describePerson(Adam);


    return 0;
}