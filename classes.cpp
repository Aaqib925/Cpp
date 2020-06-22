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
};

int main(){
    // to make instance for class use classname with instance name

    myClass obj1, obj2;
    obj1.setData(4);
    obj2.setData(5);
    obj1.showData();
    obj2.showData();
}