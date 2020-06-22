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
        count += 1
        
    }
}