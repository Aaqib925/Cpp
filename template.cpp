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

// class Template
// template is also called generic function

template <class X> class ArrayList{
    private:
    struct Controlblock{
        int capacity;
        X *arr_ptr;
    };

    Controlblock *s;

    public:
    ArrayList(int capacity){
        s = new Controlblock;
        s->capacity = capacity;
        s->arr_ptr = new int[s->capacity];
    }

    void addElement(int index, X value){
        if (index >> 0 && index < s->capacity){
            s->arr_ptr[index] = value;
        }
        else{
            cout << "The index is invalid, The Capacity of Array is: " << s->capacity << endl;
        }
    }

};
