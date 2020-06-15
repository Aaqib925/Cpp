#include <iostream>
using namespace std;

// int main(){

    // for character datatype we use the keyword char and use single quotations.
    // float and double are datatypes for point decimal values, one store 8 bytes and 4 bytes in the memory

    // float pointValue = 1.4;
    // cout << pointValue << endl;
    // int x;
    // cout << "Enter any number: ";

    // cin >> x;
    // if (x % 2 == 0){
    //     cout << "The number " << x << " is Even number." << endl;
    // }
    // else{
    //     cout << "The number " << x << " is Odd number." << endl;
    // }
    // return 0;
// }

// int main(){

//     // cout << int(15/2) << endl;
//     for (int i = 0; i <= 5; i++){
//         cout << i << endl;
//     }
//     cout << endl;
//     string name = "Aaqib";
//     for (char x: name){
//         cout << x << endl;
//     }
//     return 0;
// }

// write a program to print the numbers in a interval given by the user

int main(){
    int x, y;
    cout << "Enter the starting number: ";
    cin >> x;
    // cout << endl;
    cout << "Enter the Ending Number: ";
    cin >> y;
    while (x <= y){
        cout << x << " ";
        x++;
    }
    cout << endl;
}