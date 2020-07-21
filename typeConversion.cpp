#include <iostream>
using namespace std;
// Primitive data types are predefined in C++, whereas the classes we create are called as
// non primitive data types, We can easily convert the primitive data type into primitive

// Primitive type of class type.
// Class to primitive
// Class to class

class Complex{
    private:
    int x, y;

    public:
    Complex(){
        this->x = 0;
        this->y = 0;
    }
    void getData(int x, int y){
        this->x = x;
        this->y = y;
    }

    void showData(){
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main(){
    Complex c1;
    c1.getData(2, 5);

    int x = 6;
    c1 = x;  // x value will be send as argument of constructor c1

    c1.showData();
}