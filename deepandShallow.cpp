#include <iostream>
using namespace std;

// copying the data of one object into the another using the copy constructor, from variable 
// to another variable is called shallow copy. It doesn't copies the recources on which the object
// is pointing outside the object, or dynamic block
// In that case, we have to use the deep copy, which is used to copy the deep refrence of the 
// recource on which the object is pointing.

// if you are initializing the object at the time of declaration, then copy constructor is called
// If you inilialize the object afterwards, then assignment copy operator is being called.

// Example of Shallow copy

class Dummy{
    private:
    int x, y;

    public:
    Dummy(){
        x = 0; y = 0;
    }
    void getData(int x, int y){
        this->x = x;
        this->y = y;
        
    }

    void showData(){
        cout << "x = " << x << " y = " << y << endl;
    }
    // default copy constructor looks something like this

    Dummy(Dummy &d){
        x = d.x;    // this is used for shallow copy
        y = d.y;
    }
};

class Dummy2{
    private:
    int x, y, *p; // creating a pointer which will point a block outside the object

    public:
    Dummy2(){
        x = 0; y = 0;
        p = new int;    // assigning pointer the address of the block outside.
    }
    void getData(int x, int y, int z){
        this->x = x;
        this->y = y;
        *p = z; // assigning the value to the pointer requires *
    }

    void showData(){
        cout << "x = " << x << " y = " << y << " p = " << p << endl;
    }
    // default copy constructor looks something like this, for deep copying

    Dummy2(Dummy2 &d){
        x = d.x;    // this is used for shallow copy
        y = d.y;
        p = new int;    // if the deep copy isn't done, then the object would have been
        *p = *(d.p);     // pointed to the &d p block, in that case if &d is deleted 
                        // the Pointer wil be having no value
    }
};


int main()
{
    Dummy d1;
    d1.getData(2, 4);
    
    Dummy d2 = d1; // copy constructor will be called here. *Shallow copy
    d2.showData();

    Dummy d3;
    d3 = d2; // Assignment operator will be called here. *Shallow copy
    d3.showData();

}