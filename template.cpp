#include <iostream>
using namespace std;

// The keyword template is used to create class or function template
// it is just like fill in the blanks

template <class x> void myfun(x a, x b){ // this x is the placeholder which is equal to data type
    if (a > b){                          // we can pass more than one placeholder too
        cout << a << endl;
    }
    else{
        cout << b << endl;
    }

}

int main(){
    myfun(2, 5);
    myfun(22.3, 552.5);

}