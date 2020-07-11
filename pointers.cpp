#include <iostream>
using namespace std;

// int main(){

//     int age = 15;
//     double gpa = 2.5;
//     string name = "Aaqib";

//     // print the memory of variable we use ampersand sign

//     cout << &age << endl;
//     // we can pass this memory address and can use it as an object
//     // store the address in a variable we use * sign

//     int *pAge = &age;
//     cout << pAge << endl;

//     // we can dereference the pointer to get the true value

//     cout << *pAge << endl;
// }

class Box{
    private:
    int l, b, h;

    public:

    void setDimension(int x, int y, int z){
        l = b;
        b = y;
        h = z;
    }

    void showData(){
        cout << l << " " << b << " " << h << endl;
    }

};


