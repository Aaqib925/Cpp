#include <iostream>
using namespace std;


class Foo{
    private:
    static int count; // static variable can only be accessed by static function and ordinary func

    // ordinary data members can't be accessed by static functions

    public:
    Foo(){
        count++;
    }
    int printCount(){
        return count;
    }
};

int Foo::count = 2;

int main(){
    Foo f1;
    cout << f1.printCount() << endl;
}