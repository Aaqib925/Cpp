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
    void getData(int x, int y){
        this->x = x;
        this->y = y;
    }

    void showData(){
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main(){
    
}