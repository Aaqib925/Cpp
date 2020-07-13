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

class C: public A{
    public:
    void fun(){
        cout << "Overriding the Pure Virtual function from second derived class." << endl;
    }
};

int main(){
    A *arr[2];

    B obj1;
    C obj2;

    arr[0] = &obj1;
    arr[1] = &obj2;

    arr[0]->fun();
    arr[1]->fun();

    // we create a abstract class, if we don't want to make object for it, but want to use
    // member functions only
}