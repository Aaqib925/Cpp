#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int x = 25;
    double y = 5.6;
    x ++; // increment
    x --; // decrement

    cout << round(y) << endl;

    cout << ceil(y) << endl; // this tells next whole number

    cout << floor(y) << endl; // opposite of ceil

    // the division operator result depends upon the datatype, if you are dividing two int
    // you will get up int result, if double then double

    // division of int and double will result in double

    cout << x / 2 << endl;
    cout << x / 2.0 << endl;
    cout << x % 2 << endl; // modulu operator %

    // cmath library has all the trignometric functions and other stuff

    cout << sin(90); // in radians.
}