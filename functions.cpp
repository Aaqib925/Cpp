#include <iostream>
using namespace std;

// void functions do not return anything
// if you want to return any thing from the function, use the data type while declaring it
void printName(string);
int main(){
    printName("Aaqib");

}

void printName(string arg1){
    cout << "Hello " << arg1 << endl;
}