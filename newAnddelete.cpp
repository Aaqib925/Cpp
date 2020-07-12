#include <iostream>
using namespace std;

int main(){
    // new function is used to create DMA variable, dynamic memory allocations
    // To allocate the memory by the programmer for the variable....
    // whereas it only contains the address
    // this is allocated on Heap memory, whereas simple static memory allocation has
    // stack memory type


    int *p = new int;
    cout << p << endl;

}