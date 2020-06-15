#include <iostream>
using namespace std;

int main(){

    // for character datatype we use the keyword char and use single quotations.
    // float and double are datatypes for point decimal values, one store 8 bytes and 4 bytes in the memory

    float pointValue = 1.4;
    cout << pointValue << endl;
    int x;
    cout << "Enter any number: ";

    cin >> x;
    if (x % 2 == 0){
        cout << "The number " << x << " is Even number." << endl;
    }
    else{
        cout << "The number " << x << " is Odd number." << endl;
    }
    return 0;
}

int main(){

    // cout << int(15/2) << endl;
    for (int i = 0; i <= 5; i++){
        cout << i << endl;
    }
    cout << endl;
    string name = "Aaqib";
    for (char x: name){
        cout << x << endl;
    }
    return 0;
}

// write a program to print the numbers in a interval given by the user

int main(){
    int x, y;
    cout << "Enter the starting number: ";
    cin >> x;
    // cout << endl;
    cout << "Enter the Ending Number: ";
    cin >> y;
    while (x <= y){
        cout << x << " ";
        x++;
    }
    cout << endl;
}

int main(){
    int number = 0;
    while (cin >> number){
        cout << "Your entered " << number << endl; // to break this use ctrl + d in UNIX systems.
    }
    return 0;
}

// hackerrank solution, input: 3 12345678912345 a 334.23 14049.30493

// Setprecision is used to set the maximum number of decimal places after the point.
//  Fixed is used to give an output in the fixed point notation i.e. 342.123 etc. 
// if u use scientific instead of fixed then it will show 3.421e+02.

// #include <iostream>
// #include <cstdio>
#include <iomanip>
// using namespace std;

int main() {
    // Complete the code.
    int a; long b; char c; float d; double e;
    cin >> a >> b >> c >> d >> e;

    cout << a << "\n" << b << "\n" << c << "\n";

    cout << fixed << showpoint << setprecision(3) << d << "\n";
    cout << fixed << showpoint << setprecision(9) << e << "\n";
}
