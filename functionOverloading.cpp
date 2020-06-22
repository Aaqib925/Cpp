#include <iostream>
#include <iomanip>
using namespace std;

int square(int);   // the function square is overloading with different argument attributes
double square(double);

void main(){
    int userInt;
    double userDouble;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter an Integer and Float Value: ";
    cin >> userInt >> userDouble;
    

}

