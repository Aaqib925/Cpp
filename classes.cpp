#include <iostream>
#include <sstream>
using namespace std;

class myClass{
    private:
    int somedata; // encapsulation
    
    public:
    void setData(int d){
        somedata = d;
    }
    void showData(){
        cout << "Data is: " << somedata << endl;
    }
};

int main(){
    // to make instance for class use classname with instance name

    myClass obj1, obj2;
    obj1.setData(4);
    obj2.setData(5);
    obj1.showData();
    obj2.showData();
}

class Student{
    private:
    int age, standard;
    string fname, lname;
    public:
    Student(){
        int age = 0;
        int standard = 0;
        fname = "";
        lname = "";
    }
    // get_age, set_age
    // get_first_name, set_first_name
    // get_last_name, set_last_name
    // get_standard, set_standard
    void set_age(int userAge){
        age = userAge;
    }
    void set_first_name(string userName){
        fname = userName;
    }
    void set_last_name(string userLastName){
        lname = userLastName;
    }
    void set_standard(int userStandard){
        standard = userStandard;
    }
    // getters

    int get_age(){
        return age;
    }

    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return fname;
    }
    string get_last_name(){
        return lname;
    }
    string to_string(){;
        stringstream ss;
        char c = ',';
        ss << age << c << fname << c << lname << c << standard;
        return ss.str();
    }
};

class Student{
    private:
    int scores[5];
    int total;
    
    public:
    Student(){
        total = 0;
    }

    // to get input

    void input(){
        for (int i = 0; i < 5; i ++){
            cin >> scores[i];
            total += scores[i];
        }
    }

    int CalculateTotal(){
        return total;
    }
};