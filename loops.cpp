#include <iostream>
using namespace std;

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
}