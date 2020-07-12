#include <iostream>
using namespace std;

// pointer can point the address of the base class and the derived classes, but from derived class
// it is not possible

class A{
    public:
    virtual void f1(){
        cout << "I am the parent class!!" << endl;
    }

};

class B: public A{
    public:

    void f1(){
        cout << "I am the child class!!" << endl;
    }

};

int main(){
    // now if we create a pointer of parent class, and point it to the object of child class
    A *p, obj1;

    B obj2;

    p = &obj2; // this will have pointer date type of A, and content data of B
    p->f1();  // this is will run the parent f1, because of early binding and pointer
    // does not contain address of class B at compile time, 

    // to tackle this problem we use virtual function, which will cause late binding of
    // the function, which means allocated at runtime, not compile time

    // now p->f1() will run the overridden function for child class

    // when an object is created from a class, if there is any virtual fucntion inside it,
    // *_vptr pointer is created which points to the static array of the pointers of 
    // all the virtual functions inside that class
    
    // that array is called vtable.. whenever the data points the vptr, it checks for the vtable
    // all the LB function will be pointed to the vtable and then executed.

}