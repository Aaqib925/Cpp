#include <iostream>
#include<string.h> 
using namespace std;

class Student{
    private:
    int RollNo;
    string name;

    class Address{
        private:
        string houseNo;
        string city;
        string street;

        public:
        void getData(string h, string c, string s){
            houseNo = h;
            city = c;
            street = s;

        }
        string showData(){
            return "House No. " + houseNo + " , City " + city + ", Street " + street;
        }
    };

    Address A;

    public:
    void getData(int x, string n){
        A.getData("206", "Karachi", "Sir Syed Ahmed khan road");
        RollNo = x;
        name = n;
       
    }

    void showData(){
        cout << name << " , " << RollNo << ", Address " << A.showData() << endl;
    }
};

int main(){
    Student s1;
    s1.getData(2019, "Aaqib");
    s1.showData();
}