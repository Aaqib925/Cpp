#include <iostream>
#include <iomanip>
using namespace std;

int square(int);   // the function square is overloading with different argument attributes
double square(double);

int main(){
    int userInt;
    double userDouble;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter an Integer and Float Value: ";
    cin >> userInt >> userDouble;
    
    cout << "Here are the squares: ";
    cout << square(userInt) << " and " << square(userDouble) << endl;

    return 0;
}


int square(int x){
    return x * x;
}

double square(double x){
    return x * x;
}