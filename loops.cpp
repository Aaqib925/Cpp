#include <iostream>
using namespace std;

void forLoop();

int main(){
    int x = 1;
    while (x < 5){
        cout << x << endl;
        x += 1;
    }

    do{ // it executes first then check the condition
        cout << x << endl;
        x += 1;
    }
    while(x <= 10);

    forLoop();
}

// using for loop

void forLoop(){
    for (int i = 0; i < 10; i ++){
        cout << i << endl;
    }
}