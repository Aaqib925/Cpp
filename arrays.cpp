#include <iostream>
using namespace std;

int main(){
    // we specify the type of data used in the array with [index]

    // in cpp we cannot print the array on console, we have to iterate through every element

    // string cars[4] = {"Mazda", "Corolla", "Civic", "Honda"};
    // cout << cars << endl; // we can't print like this
    // you can access any element using it's index
    // also you can assign the value for certain index
    // cars[1] = "Rolls Royce";
    // int arrSize = sizeof(cars)/sizeof(cars[0]); // this is method is get length or array
    // cout << arrSize << endl;
    
    // int arrlength = cars[1].find('R');
    // cout << arrlength << endl;

    // int arrlength = cars.find(cars[-1]);
    // cout << arrlength;

    // for (int i = 0; i < arrSize; i ++){
    //     cout << cars[i] << endl;
    // }

    // creating a array by taking input from user

    cout << "Enter length of your Array: ";
    int arraySize;
    cin >> arraySize;
    int userArray[arraySize];
    int x;
    for (int i = 0; i < arraySize; i ++){
        cout << "Enter element for index " << i << ": ";
        cin >> x;
        userArray[i] = x;
    }
    
    cout << "{";
    for (int i = 0; i < arraySize; i ++){
        cout << userArray[i];
        if (i != arraySize - 1){
            cout << ", ";
        }
    }
    cout << "}" << endl;


}