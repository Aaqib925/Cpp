#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// class myClass{
//     private:
//     int somedata; // encapsulation
    
//     public:
//     void setData(int d){
//         somedata = d;
//     }
//     void showData(){
//         cout << "Data is: " << somedata << endl;
//     }
// };


// class Student{
//     private:
//     int age, standard;
//     string fname, lname;
//     public:
//     Student(){
//         int age = 0;
//         int standard = 0;
//         fname = "";
//         lname = "";
//     }
//     // get_age, set_age
//     // get_first_name, set_first_name
//     // get_last_name, set_last_name
//     // get_standard, set_standard
//     void set_age(int userAge){
//         age = userAge;
//     }
//     void set_first_name(string userName){
//         fname = userName;
//     }
//     void set_last_name(string userLastName){
//         lname = userLastName;
//     }
//     void set_standard(int userStandard){
//         standard = userStandard;
//     }
//     // getters

//     int get_age(){
//         return age;
//     }

//     int get_standard(){
//         return standard;
//     }
//     string get_first_name(){
//         return fname;
//     }
//     string get_last_name(){
//         return lname;
//     }
//     string to_string(){;
//         stringstream ss;
//         char c = ',';
//         ss << age << c << fname << c << lname << c << standard;
//         return ss.str();
//     }
// };

// class Student{
//     private:
//     int scores[5];
//     int total;
    
//     public:
//     Student(){
//         total = 0;
//     }

//     // to get input

//     void input(){
//         for (int i = 0; i < 5; i ++){
//             cin >> scores[i];
//             total += scores[i];
//         }
//     }

//     int CalculateTotal(){
//         return total;
//     }
// };

// class Box{
//     private:
//     long l, b, h;

//     public:
//     Box(){
//         l = b = h = 0;
//     }
//     Box(int length, int breath, int height){
//         l = length;
//         b = breath;
//         h = height;
//     }
//     Box(const Box& B){
//         l = B.l;
//         b = B.b;
//         h = B.h;
//     }
// //     int getLength() - Return box's length
// // int getBreadth() - Return box's breadth
// // int getHeight() - Return box's height
// // long long CalculateVolume() - Return the volume of the box

//     int getLength(){
//         return l;
//     }
//     int getBreath(){
//         return b;
//     }
//     int getHeight(){
//         return h;
//     }
//     long long CalculateVolume(){
//         long long x = l * b * h;
//         return x;
//     }

//     friend bool operator < (Box& A, Box& B){
//         if ( (A.l < B.l) || (A.b < B.b && A.l == B.l) || ( A.h < B.h && A.b == B.b && A.l == B.l)){
//             return true;
//         }
//         else{
//             return false;
//         }

//     }
//     friend ostream& operator<<(ostream& out, Box& B){
//         out << B.l << " " << B.b << " " << B.h;
//         return out;
//     }


// };

class Hospital{
    protected:
    string name, date, disease, dateDis;
    static int index;
    static vector<vector<string>> a;

    public:
    Hospital(){
        index++;
    }

    void addPatient(){
        vector<string> data;
        cout << "Enter Name of Patient: ";
        cin >> name;
        cout << "Enter date of admission: ";
        cin >> date;
        cout << "Enter Disease: ";
        cin >> disease;
        cout << "Enter date of discharge: ";
        cin >> dateDis;

        data.push_back(name);
        data.push_back(date);
        data.push_back(disease);
        data.push_back(dateDis);

        a.push_back(data);

    }

    void showData(){
        for (int i = 0; i < a.size(); i++){
            for (string x: a[i]){
                cout << x << endl;
            }
        }
    }

};
int Hospital::index = -1;
vector<vector<string>> Hospital::a;


int main(){
    // to make instance for class use classname with instance name

    // myClass obj1, obj2;
    // obj1.setData(4);
    // obj2.setData(5);
    // obj1.showData();
    // obj2.showData();

    Hospital p1;
    p1.addPatient();
    p1.showData();

}