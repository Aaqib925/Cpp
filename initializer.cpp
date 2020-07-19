#include <iostream>
using namespace std;

class dummy{
    private:
    int a, b;
    const int x;
    int &y; // refrence variable

    public:
    dummy(int &n): a(5), b(6), x(5), y(n){ // initlializing const and refrence data member 
        // x = 6;
    } // after colon, this is the iniliazer list, we can use comma seperated also.
    // this is also very helpful if we want to initialize the value of const member or & member
    // as we can't initialize the value to members during declaring in class
};

int main(){
    int y = 6;
    dummy d1(y)
}