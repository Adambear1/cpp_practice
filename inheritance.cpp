#include <iostream>
using namespace std;

class Chef {
    public:
    void makeChicken() {
        cout << "The chef makes chicken" << endl;
    };
    void makeSalad() {
        cout << "The chef makes salad" << endl;
    };
};

class BadChef : public Chef {
    public:
        void ruinMeal(){
            cout << "The bad chef ruined the meal";
        };
};

int main()
{
    BadChef newChef;
    newChef.makeSalad();
    newChef.ruinMeal();
}