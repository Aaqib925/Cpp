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

// class B;
// class A{
//     private:
//     int x = 5;

//     public:

//     friend void myfun(A, B);

// };

// class B{
//     private:
//     int x = 5;

//     public:
    
//     friend void myfun(A, B);

// };

// void myfun(A obj1, B obj2){
//     cout << obj1.x + obj2.x << endl;
// }

// int main(){
//     A a1;
//     B b1;

//     myfun(a1, b1);
// }

// operator overloading in friend function

// class Complex{
//     private:
//     int x, y;

//     public:
//     void setData(int a, int b){
//         x = a;
//         y = b;
//     }

//     void showData(){
//         cout << x << " " << y << endl;
//     }

//     friend Complex operator+(Complex, Complex);

// };

// Complex operator+(Complex A, Complex B){
//     Complex temp;
//     temp.x = A.x + B.x;
//     temp.y = A.y + B.y;
//     return temp;
// }

// int main(){
//     Complex c1, c2, c3;
//     c1.setData(2, 4);
//     c2.setData(5, 6);

//     c3 = c1 + c2;

//     c3.showData();

// }

// Overloading unuary operator using friend function

// class Complex{
//     private:
//     int x, y;

//     public:
//     void setData(int a, int b){
//         x = a, y = b;
//     }

//     void showData(){
//         cout << "x = " << x << " " << "y = " << y << endl;
//     }

//     friend Complex operator-(Complex);

// };

// Complex operator-(Complex C){
//     C.x = -C.x;
//     C.y = -C.y;
//     return C;
// }

// int main(){
//     Complex c1, c2;
//     c1.setData(2, 4);
//     c2.setData(5, 3);

//     c1 = -c1;
//     c2 = -c2;
//     c1.showData();
//     c2.showData();
// }


// how to overloading extraction >> operator and insertion operator using friend function
// class Complex{
//     private:
//     int x, y;

//     public:
    
//     friend ostream& operator<<(ostream&, Complex);
//     friend istream& operator>>(istream&, Complex&); // for istream, the object should be passed 
//     // with ampersand.

// };

// we can make a object of class ostream, so we make refrence of it, by using &

// ostream& operator<<(ostream &dout, Complex c){
//     cout << "x =" << c.x << "y =" << c.y << endl;
//     return dout;
// }

// for istream we have to pass the working argument as a reference.

// istream& operator>>(istream &din, Complex &C){
//     cin >> C.x >> C.y;
//     return din;
// }

// int main(){
//     Complex c1;
//     cin >> c1;
//     cout << c1;
// }

// Member function of one class and friend function for other class

// class foo{
//     public:
//     void myfun(){}


// };

// class B{
//     friend void foo::myfun();

//     // if we want to make all member functions of class foo friend functions for B
//     friend class foo;
// };


// Review Question

class Complex{
    public:
    int x;
    int y;

    Complex(){
        x = 0; y = 0;
    }

    Complex(int x, int y){
        this->x = x;
        this->y = y;
    }

    friend istream& operator>>(istream &din, Complex&);
    friend ostream& operator<<(istream &dout, Complex);

    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex, Complex);

};

istream& operator>>(istream &din, Complex &C){
    cin >> C.x >> C.y;
    return din;
}

ostream& operator<<(ostream& dout, Complex C){
    cout << C.x << "+" << C.y << "i" << endl;
    return dout;
}

Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;

    return temp;
}

Complex operator-(Complex c1, Complex c2){
    Complex temp;
    temp.x = c1.x - c2.x;
    temp.y = c1.y - c2.y;

    return temp;
}

int main(){
    Complex c1(2, 5);
    cout << c1;

    Complex c2;
    cin >> c2;
    cout << c2;
}
