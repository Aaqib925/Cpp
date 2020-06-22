#include <iostream>
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
}