#include <iostream>
using namespace std;

// The type of class which can't be instanciated, or object can't be created for it
// We make abstract class using pure virtual functions, Also the memeber functions can't be accessed
// If we create a child class of abstract class, then we can use the member functions easily,
// But we have to override the pure virtual function


class A{
    public:

    // creating a pure virtual function

    virtual void fun() = 0; // special syntax

    void fun1(){
        cout << "This is member function of Parent class" << endl;
    }
};

class B: public A{
    public:
    void fun(){
        cout << "Overriding the Pure Virtual function." << endl;
    }


};

int main(){
    B obj1;
    obj1.fun1();
    obj1.fun();

    // we create a abstract class, if we don't want to make object for it, but want to use
    // member functions only
}