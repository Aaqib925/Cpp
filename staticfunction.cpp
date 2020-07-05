#include <iostream>
using namespace std;


class Foo{
    private:
    static int count; // static variable can only be accessed by static function and ordinary func
    int myvar;
    // ordinary data members can't be accessed by static functions

    public:
    Foo(){
        count++;
    }
    int printCount(){
        return count;
    }
    // int static printCount(){
    //     return myvar;   ordinary data member not for static funtion
    // }
};

int Foo::count = 2;

class Distance{
    private:
    int feet;
    int inches;

    public:
    Distance(int x, int y){
        feet = x, inches = y;
    }

    void showData() const{
        cout << feet << " " << inches << endl;
    }
};



int main(){
    Foo f1;
    cout << f1.printCount() << endl;

    const Distance d1(200, 200);

    d1.showData();

    
}