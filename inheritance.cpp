#include <iostream>
using namespace std;

class Chef{
    public:
    void makeChicken(){
        cout << "Chef is making chicken.";
    }

    void makeSpecialDish(){
        cout << "Chef is making Special Dish";
    }
};

class AnotherChef: public Chef{
    public:
    void makePasta(){
        cout << "Another Chef is making Pasta";
    }
};

int main(){
    Chef chef1;
    chef1.makeChicken();

    AnotherChef chef2;
    chef2.makeChicken();
    chef2.makePasta();

}