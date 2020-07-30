#include <iostream>
#include<string.h> 
using namespace std;

class Student{
    private:
    int RollNo;
    char name[20];

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

};

int main(){
    
}