#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int arrayLength;
    cin >> arrayLength;

    int arr[arrayLength];
    for (int i = 0; i < arrayLength; i++){
        cin >> arr[i];
    }

    for (int j = arrayLength - 1; j >= 0; j --){
        cout << arr[j] << " ";
    }
    return 0;
}