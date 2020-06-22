#include <iostream>
using namespace std;

class Counter{
    private:
    int count;

    public:
    Counter(){    // this is default constructor
        cout << "Created an object." << endl;
        count = 1;
        cout << "The Value of count is set to one." << endl;
    }

    void count_inc(){
        count += 1;

    }

    void count_dec(){
        count -= 1;
    }

    void printCount(){
        cout << count << endl;
    }
};

int main(){
    Counter c1, c2;

    c1.printCount();
    c2.printCount();
    c1.count_inc();
    c2.count_inc();
    c2.count_inc();

    c1.printCount();
    c2.printCount();
}