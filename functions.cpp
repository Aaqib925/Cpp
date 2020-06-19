#include <iostream>
using namespace std;

// void functions do not return anything
// if you want to return any thing from the function, use the data type while declaring it
void printName(string);

int returnFunc(int arg1, int arg2);


int main(){
    printName("Aaqib");
    printName("Abbas beemar");
    printName("Faiq also beemar");

    cout << returnFunc(2, 4) << endl;

}

void printName(string arg1){
    cout << "Hello " << arg1 << endl;
}

int returnFunc(int arg1, int arg2){
    return arg1 + arg2;
}