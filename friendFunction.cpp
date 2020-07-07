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
class Complex{
    private:
    int x, y;

    public:
    
    friend ostream& operator<<(ostream&, Complex);
    friend istream& operator>>(istream&, Complex&);

};

ostream& operator<<(ostream &dout, Complex c){
    cout << "x =" << c.x << "y =" << c.y << endl;
    return dout;
}

istream& operator>>(istream &din, Complex &C){
    cin >> C.x >> C.y;
    return din;
}

int main(){
    Complex c1;
    cin >> c1;
    cout << c1;
}