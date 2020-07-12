#include <iostream>
using namespace std;

int main(){
    // new function is used to create DMA variable, dynamic memory allocations
    // To allocate the memory by the programmer for the variable....
    // whereas it only contains the address
    // this is allocated on Heap memory, whereas simple static memory allocation has
    // stack memory type


    int *p = new int;   // object pointer should be of same datatype as for new ** data type
    cout << p << endl;

    // declaring a array using dynamic memory allocation

    int *array = new int[5];
    
    // to delete the memory allocated by the DMA variable, we use the delete function

    delete p; // P is not deleted, The thing which is being pointed is deleted

    delete []array;
}