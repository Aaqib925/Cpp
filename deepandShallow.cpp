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