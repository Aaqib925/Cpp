#include <iostream>
using namespace std;

// There are three keywords, try, throw and catch, whenever the code in try block has an excecption
// then catch block is used
// throw is used inside the try block

int main(){
    cout << "Welcome" << endl;
    try{
        throw 10;   // this is can be used for catch block, the data type is necessary
                    // to be same for exception block
        cout << "Hello" << endl; // this line will never get executed, because exception has been thrown above

    }
    // if we want the catch block to run for every exception we use ... int catch argument
    
    catch(int e){   // data type should be same as in try block
        cout << "Error number is: " << e << endl;
    }
    cout << "Last Line" << endl;
}

