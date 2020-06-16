#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
//     int arrayLength;
//     cin >> arrayLength;

//     int arr[arrayLength];
//     for (int i = 0; i < arrayLength; i++){
//         cin >> arr[i];
//     }

//     for (int j = arrayLength - 1; j >= 0; j --){
//         cout << arr[j] << " ";
//     }
//     return 0;
// }

// int main(){
//     int x, y;
//     cin >> x >> y;
//     cout << "Value of q" << " " << x / y << endl;
//     cout << "Value of r" << " " << x % y << endl;
    
// }

// euclideans's algo to find greatest common divisor

int main(){
    int a, b, q, r, num1, num2;
    cout << "Enter two numbers to find GCD: ";
    cin >> num1 >> num2;
    a = max(num1, num2);
    b = min(num1, num2);
    q = a / b;
    r = a % b;
    while (true){
        a = b;
        b = r;
        q = a / b;
        if (a % b != 0){
            r = a % b;
        }
        else{
            break;
        }

    }
    
}