#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
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

// int main(){
//     int a, b, q, r, num1, num2;
//     cout << "Enter two numbers to find GCD: ";
//     cin >> num1 >> num2;
//     a = max(num1, num2);
//     b = min(num1, num2);
//     q = a / b;
//     r = a % b;
//     if (r == 0){
//         cout << "The GCD of " << num1 << " " << num2 << " is " << b << endl;
//     }
//     else{
//         while (r > 0){
//         a = b;
//         b = r;
//         q = a / b;
//         if (a % b != 0){
//             r = a % b;
//         }
//         else{
//             break;
//         }
//     }
//     cout << "The GCR of " << num1 << " " << num2 << " is: " << r << "." << endl;
//     }

// }

// int main(){

//     int x, y;
//     cin >> x >> y;
//     cout << x / y << endl;
//     cout << x % y << endl;
// }

// int main(){

//     // power function
//     float result = 1;
//     float base;
//     int userPower;
//     cout << "Enter the Base and Power: ";
//     cin >> base >> userPower;

//     while (userPower > 0){
//         result *= base;
//         userPower--;
//     }
//     cout << "Result: " << result << endl;
// }

// hackerrank challenge

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n, q;
//     cin >> n >> q;
//     int firstLength, secondLength;
//     cin >> firstLength;
//     // first array
//     int firstArray[firstLength], secondArray[secondLength];
//     int x;
//     for (int i = 0; i < firstLength; i++){
//         cin >> x;
//         firstArray[i] = x;
//         // cout << x << " ";
//     }
//     // cout << endl;

//     cin >> secondLength;
//     int y;
//     for (int i = 0; i < secondLength; i ++){
//         cin >> y;
//         secondArray[i] = y;
//         // cout << y << " ";
//     }
//     int arrayNumber, index;
//     for (int a = 0; a < q; a ++){
//         cin >> arrayNumber >> index;
//         // cout << arrayNumber << " " << j << endl;
//         if (arrayNumber == 0){
//             cout << firstArray[index] << endl;

//         }
//         else if (arrayNumber == 1){
//             cout << secondArray[index] << endl;
//         }
//     }
// }

// 10 10 3 916135 272188 794963 3 178997 502468 671251 1 122266 3 223511 996043 990104 3 319694 335208 200789 2 867809 273793 1 925358 1 71140 1 862238 1 994309 6 0 5 0 5 0 7 0 5 0 6 0 3 2 3 1 0 0 9 0

// int main(){
//     int n, q;
//     cin >> n >> q;
//     vector<vector<int>>a(n);

//     for (int i = 0; i < n; i ++){
//         int lengthOfArray;
//         cin >> lengthOfArray;

//         for (int j = 0; j < lengthOfArray; j ++){
//             int value;
//             cin >> value;
//             a[i].push_back(value);
//         }
//     }

//     for (int i = 0; i < q; i ++){
//         int x, y;
//         cin >> x >> y;
//         cout << a[x][y] << endl;
//     }
// }

// input: 20 0 ab 6 cd 0 ef 6 gh 4 ij 0 ab 6 cd 0 ef 6 gh 0 ij 4 that 3 be 0 to 1 be 5 question 1 or 2 not 4 is 2 to 4 the
// int main(){
//     int n;
//     cin >> n;

//     string arr[n];
//     // for first half phase we have to add - at the index

//     for (int i = 0; i < n / 2; i ++){
//         int x;
//         cin >> x;

//         string s;
//         cin >> s;

//         arr[x] += "- ";
//     }

//     // for second half, add character or string to the particular index

//     for (int i = n / 2; i < n; i ++){
//         int x;
//         cin >> x;

//         string s;
//         cin >> s;

//         arr[x] += s + ' ';
//     }

//     for (string s: arr){
//         cout << s;
//     }
// }
// #include <sstream>

//  void countSort(vector<vector<string>> arr) {
//     int n = arr.size();
//     string ans[n];
//     for (int i = 0; i < n/2; i++ ){
//         string num = arr[i][0];
//         stringstream geek(num);
//         int x;
//         geek >> x;
//         string valu = arr[i][1];

//         ans[x] = ans[x] + "-" + " ";

//     }

//     for (int i = n/2; i < n; i++){
//         string num = arr[i][0];
//         stringstream geek(num);
//         int x;
//         geek >> x;
//         string valu = arr[i][1];

//         ans[x] = ans[x] + valu + " ";
//     }

//     for (int i = 0; i < n; i ++){
//         cout << ans[i]
//     }
// }

// #include <sstream>

// int main(){
//     // converting a string into the int
//     // first you need to include sstream library
//     string x = "22";
//     stringstream converter(x);
//     int y;
//     converter >> y;
//     cout << y + 2 << endl;
// }

// int main(){
//     int x;
//     cout << "Enter the range of Pattern: ";
//     cin >> x;

//     for (int i = 0; i < x; i ++){
//         for (int j = 0; j < x + 2; j ++){
//             if (j == i + 1){
//                 cout << "-";
//             }
//             else if(j < i + 1){
//                 cout << "<";
//             }
//             else if(j > i + 1){
//                 cout << ">";
//             }
//         }
//         cout << endl;
//     }
// }

// program to merge two sorted arrays

// int total(int arr[], int n);

// int main(){
//     int x[3] = {2, 3, 4};
//     cout << total(x, 3) << endl;
// }

// int total(int arr[], int n){
//     int result = 0;
//     for (int i = 0; i < n; i ++){
//         cout << arr[i] << endl;
//         result += arr[i];
//         cout << result << endl;

//     }
//     return result;
// }

// int calculateLength(int[]);

// int main(){
//     int x[4] = {2, 3, 2, 5};
//     cout << calculateLength(&x[0]) << endl;
// }

// int fibonacci(int num);

// int fibonacci(int num){
//     if (num <= 1){
//         return num;
//     }
//     return fibonacci(num - 1) + fibonacci(num - 2);
// }
// int main(){
//     int numberOfTerms;
//     cout << "Enter range of fibbonacci series: ";
//     cin >> numberOfTerms;
//     cout << "The fibonacci series is: ";
//     for (int i = 0; i < numberOfTerms; i ++){
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;
//     return 0;
// }

// void myFunction(int arr[], int num1, int arr2[], int num2);

// int main()
// {
//     int array[4] = {1, 2, 3, 4};
//     int array2[3] = {5, 6, 7};
//     int length1, length2;
//     length1 = sizeof(array) / sizeof(int);
//     length2 = sizeof(array2) / sizeof(array2[0]);
//     myFunction(array, length1, array2, length2);
//     cout << endl;
// }

// void myFunction(int arr[], int num1, int arr2[], int num2)
// {
//     for (int i = 0; i < num1; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     for (int j = 0; j < num2; j++)
//     {
//         cout << arr2[j] << " ";
//     }
// }

void myFunction(int arr[], int num1, int arr2[], int num2);

int main()
{
    int array[4] = {1, 2, 3, 4};
    int array2[3] = {5, 6, 7};
    int length1, length2;
    length1 = sizeof(array) / sizeof(int);
    length2 = sizeof(array2) / sizeof(array2[0]);
    myFunction(array, length1, array2, length2);
    cout << endl;
}

void myFunction(int arr[], int num1, int arr2[], int num2)
{
    int finalLength = num1 + num2;
    int finalArray[finalLength];
    int i = 0, j = 0, k = 0;
    while (i <= num1 || j <= num2){
        if (j > num2){
            finalArray[k] = arr[i];
            i ++;
            k ++;
            continue;
        }
        else if (i > num1){
            finalArray[k] = arr2[j];
            j++; k++; continue;
        }
        if (arr[i] > arr2[j]){
            finalArray[k] = arr2[j];
            j++;
        }
        else if(arr[i] < arr2[j]){
            finalArray[k] = arr[i];
            i ++;
        }
        k ++;
    }


    for (int i = 0; i < finalLength; i++){
        cout << finalArray[i] << " ";
    }
}