#include <iostream>
using namespace std;

int main(){
    // string are mutable in C++, that's means you can change the chracters from the
    // particular index
    // we use the keyword string as a data type, some important functions are as follows

    string name = "Aaqib Nazeer";

    cout << name.length() << endl; // prints out the length

    cout << name[0] << endl; // we can get the particular index value
    
    // feature like slicing the string like python has an alternative here

    cout << name.substr(2, 6) << endl; // first argument takes the index to start from, and second 
    // is the range for the substr

    name[0] = 'S';
    cout << name;

};