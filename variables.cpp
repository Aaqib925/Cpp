# include <iostream>
using namespace std;

int main(){

    // variables are the containers which holds the date and store it in the computer's memory
    // in cpp we need to declare the variable by first defining it's date type
    // int, float, char, double, float, string are some basic data types.
    string name = "Aaqib";
    int age = 18;
    name += 'a';
    cout << name << " " << age << endl;

    name += "Aaqib";
    cout << name << endl;

    age += 14;
    cout << age << endl;

    age = ++age;  // this is called as post increment.
    cout << age;

}