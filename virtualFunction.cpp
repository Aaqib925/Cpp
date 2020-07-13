#include <iostream>
using namespace std;

// pointer can point the address of the base class and the derived classes, but from derived class
// it is not possible

// class A{
//     public:
//     virtual void f1(){
//         cout << "I am the parent class!!" << endl;
//     }

// };

// class B: public A{
//     public:

//     void f1(){
//         cout << "I am the child class!!" << endl;
//     }

// };

// int main(){
//     // now if we create a pointer of parent class, and point it to the object of child class
//     A *p, obj1;

//     B obj2;

//     p = &obj2; // this will have pointer date type of A, and content data of B
//     p->f1();  // this is will run the parent f1, because of early binding and pointer
//     // does not contain address of class B at compile time, 

//     // to tackle this problem we use virtual function, which will cause late binding of
//     // the function, which means allocated at runtime, not compile time

//     // now p->f1() will run the overridden function for child class

//     // when an object is created from a class, if there is any virtual fucntion inside it,
//     // *_vptr pointer is created which points to the static array of the pointers of 
//     // all the virtual functions inside that class
    
//     // that array is called vtable.. whenever the data points the vptr, it checks for the vtable
//     // all the LB function will be pointed to the vtable and then executed.

// }


// class A{
//     public:
//     virtual void show(){
//         cout << "This is Base class function." << endl;
//     }

// };

// class D: public A{
//     public:
//     void show(){
//         cout << "The is first derived class." << endl;
//     }
// };

// class D2: public A{
//     public:
//     void show(){
//         cout << "The is second derived class." << endl;
//     }

// };

// int main(){
//     // creating a pointer object of base class
//     A *ptr;
//     D d1;
//     D2 d2;

//     ptr = &d1;
//     ptr->show();

//     ptr = &d2;
//     ptr->show();

// }

class Father{
    protected:
    int age;

    public:
    Father(int x){
        age = x;
    }

    virtual void iAm(){
        cout << "I am Father, My age is: " << age << endl;
    }

};

class Son:public Father{
    public:
    Son(int x){
        age = x;
    }

    void iAm(){
        cout << "I am Son, My age is: " << age << endl;
    }
};

class Daughter: public Father{
    public:
    Daughter(int x){
        age = x;
    }

    void iAm(){
        cout << "I am Daughter, My age is: " << age << endl;
    }
};

int main(){
    
}