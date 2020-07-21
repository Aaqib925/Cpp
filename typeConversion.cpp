#include <iostream>
using namespace std;
// Primitive data types are predefined in C++, whereas the classes we create are called as
// non primitive data types, We can easily convert the primitive data type into primitive

// Primitive type to class type.
// Class to primitive
// Class to class
class Dummy{
    private:
    int a, b;

    public:
    void setData(int a, int b){
        this->a = a;
        this->b = b;
    }

    int returnA(){
        return a;
    }

    int returnB(){
        return b;
    }
};


class Complex{
    private:
    int x, y;

    public:
    Complex(){
        this->x = 0;
        this->y = 0;
    }

    Complex(int x){
        this->x = x;
        this->y = 0;
    }
    void getData(int x, int y){
        this->x = x;
        this->y = y;
    }

    void showData(){
        cout << "x = " << x << " y = " << y << endl;
    }
    // class to primitive
    // we will use the operator function, along with the primitive data type to which we want
    // to convert
    operator int(){ // we can also use char, float or double here for primitive etc.
        return x + y;
    }

    // Class to Class type conversion
    Complex(Dummy dObj){
        this->x = dObj.returnA();
        this->y = dObj.returnB();
    }
};



int main(){

    // primtive to class
    Complex c1;
    c1.getData(2, 5);

    int x = 6;
    c1 = x;  // x value will be send as argument of constructor c1

    c1.showData();

    // class to primitive

    int y;
    y = c1; // c1.operator int() called here, and y will be assigned according to what we defined.
    cout << "The Value of y is: " << y << endl;

    // Class to Class type conversion
    Dummy d;
    d.setData(6, 7);
    c1 = d;
    c1.showData();

}