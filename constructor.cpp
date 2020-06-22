#include <iostream>
using namespace std;

// class Counter{
//     private:
//     int count;

//     public:
//     Counter(){    // this is default constructor
//         cout << "Created an object." << endl;
//         count = 1;
//         cout << "The Value of count is set to one." << endl;
//     }

//     Counter(int a){   // this is called counter overloading
//         count = a;
//         cout << "The Value of count is set to " << a << endl;
//     }

//     void count_inc(){
//         count += 1;

//     }

//     void count_dec(){
//         count -= 1;
//     }

//     void printCount(){
//         cout << count << endl;
//     }
// };

// int main(){
//     Counter c1, c2(4);

//     c1.printCount();
//     c2.printCount();
//     c1.count_inc();
//     c2.count_inc();
//     c2.count_inc();

//     c1.printCount();
//     c2.printCount();

//     // using copy default constructor

//     Counter c3;
//     c3 = c2;
//     c3.printCount();
// }

// review question

class Toolbooth{

    private:
    int numOfCars;
    double amountOfMoney;

    public:
    // constructor for initializing the value to zero
    Toolbooth(){
        numOfCars = 0;
        amountOfMoney = 0;
    }

    void payingCar(){
        amountOfMoney += 0.5;
    }

    void printData(){
        cout << "The amount of money is " << amountOfMoney << "$" << endl;
    }

};

int main(){

    Toolbooth c1, c2;
    c1.payingCar();
    c2.payingCar();
    c2.payingCar();
    
}