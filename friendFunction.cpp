#include <iostream>

using namespace std;

// friend function is not a member function of class but it friend of class
// it is declared inside the class, but define outside the class

// class Complex{
//     private:
//     int x, y;

//     public:
//     void setData(){
//         cin >> x >> y;
//     }

//     void showdata(){
//         cout << x << " "<< y;
//     }

//     friend void sum(Complex);
//     // a friend function can access 2 or more classes at the same time

// };

// void sum(Complex c){
//     cout << c.x + c.y << endl;
    
// }

// int main(){
//     Complex c1, c2;
//     c1.setData();
//     c2.setData();

//     sum(c1);
//     sum(c2);

// }

class B;
class A{
    private:
    int x = 5;

    public:

    friend void myfun(A, B);

};

class B{
    private:
    int x = 5;

    public:
    
    friend void myfun(A, B);

};

void myfun(A obj1, B obj2){
    cout << obj1.x + obj2.x << endl;
}

int main(){
    A a1;
    B b1;

    myfun(a1, b1);
}