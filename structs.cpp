#include <iostream>
using namespace std;

struct info{
    string name;
    int age;
    double gpa;
    string FatherName;

};


int main(){

    // creating instance of struct
    // first right struct name then the variable name

    info firstPerson;
    firstPerson = { // we have to provide in the same order we declare it
    // it is homogenous so it can contain data of more than one type.
        "Aaqib",
        18,
        2.7,
        "Nazir"
    };

    cout << firstPerson.age << endl;

}