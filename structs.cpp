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
    firstPerson = {
        "Aaqib",
        18,
        2.7,
        "Nazir"
    };

    cout << firstPerson.age << endl;

}