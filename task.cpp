#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <sstream>
#include <iterator>
#include <unordered_set>
#include <iomanip>
#include <string.h>
#include <list>
#include <fstream>
#include <numeric>
// #include <ncurses.h>
#include <cstring>
#include <deque>
#include <set>
#include <queue>
#include <stack>
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

// void myFunction(int arr[], int num1, int arr2[], int num2, int result[]);

// int main()
// {
//     int array[] = {1, 3, 5, 7};
//     int array2[] = {2, 4, 6, 8};
//     int length1, length2;
//     length1 = sizeof(array) / sizeof(array[0]);
//     length2 = sizeof(array2) / sizeof(array2[0]);
//     int res[length1 + length2];
//     myFunction(array, length1, array2, length2, res);
// }

// void myFunction(int arr[], int num1, int arr2[], int num2, int result[])
// {
//     // int result[num1 + num2];
//     int i = 0, j = 0, k = 0;
//     while (i < num1 && j < num2){
//         if (arr[i] < arr2[j]){
//             result[k] = arr[i];
//             k++, i++;
//         }
//         else{
//             result[k] = arr2[j];
//             k++, j++;
//         }

//         // if any of the number is remaining in both arrays

//         while (i < num1){
//             result[k] = arr[i];
//             k++, i++;
//         }
//         while (j < num2){
//             result[k] == arr2[j];
//             k++, j++;
//         }

//         for (int i = 0; i < num1 + num2; i++){
//             cout << result[i] << " ";
//         }
//     }

// }

// void mergeArrays(int arr[], int num1, int arr2[], int num2);

// int main(){
//     int array1[] = {1, 2, 3, 4};
//     int array2[] = {5, 6, 7, 8};

//     int n1, n2;
//     n1 = sizeof(array1)/sizeof(array2);
//     n2 = sizeof(array2)/sizeof(array2);

//     mergeArrays(array1, n1, array2, n2);
// }

// void mergeArrays(int arr[], int num1, int arr2[], int num2){
//     int result[num1 + num2];
//     int i = 0, j = 0, k = 0;
//     while (i < num1 && j < num2){
//         if (arr[i] < arr2[j]){
//             result[k] = arr[i];
//             k++, i++;
//         }
//         else{
//             result[k] = arr2[j];
//             k++, j++;
//         }

//         // if any of the number is remaining in both arrays

//         while (i < num1){
//             result[k] = arr[i];
//             k++, i++;
//         }
//         while (j < num2){
//             result[k] == arr2[j];
//             k++, j++;
//         }

//         for (int i = 0; i < num1 + num2; i++){
//             cout << result[i] << " ";
//         }
//     }
// }

// void mergeArrays(int arr1[], int arr2[], int n1, int n2);

// int main()
// {
//     int arr1[] = {9, 3, 7, 2, 1};
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);

//     int arr2[] = {2, 4, 6, 8, 10};
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);

//     // int arr3[n1+n2];
//     mergeArrays(arr1, arr2, n1, n2);
//     cout << endl;
// }

// void mergeArrays(int arr1[], int arr2[], int num1, int num2)
// {
//     int i = 0, j = 0, k = 0;
//     int arr3[num1 + num2];
//     while (i < num1 && j < num2)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k] = arr1[i];
//             k++, i++;
//         }
//         else
//         {
//             arr3[k] = arr2[j];
//             k++, j++;
//         }
//     }
//     // Store remaining elements of first array
//     while (i < num1)
//     {
//         arr3[k] = arr1[i];
//         k++, i++;
//     }
//     // Store remaining elements of second array
//     while (j < num2)
//     {
//         arr3[k] = arr2[j];
//         k++, j++;
//     }
//     for (int i = 0; i < num1 + num2; i++)
//     {
//         cout << arr3[i] << " ";
//     }
// }

// vector<int> parseInts(string str) {
// 	// Complete this function
//     vector<int> result;
//     stringstream geek(str);
//     int number;
//     char comma;
//     while(geek >> number){
//         result.push_back(number);
//         geek >> comma;

//     }
//     return result;
// }

// int main() {
// 	// Complete the program
//     int l1, l2;
//     cin >> l1 >> l2;
//     for (int i = 0; i < 2; i ++){
//         string s1;
//         string s2;
//         string total;
//         cin >> total;
//         for (int j = 0; j < total.length(); j++){
//             if (total[j] != ' '){
//                 if (j < l1){
//                     s1 += total[j];

//                 }
//                 else{
//                     s2 += total[j];
//                 }
//             }

//         }
//         cout << s1.length() << endl << s2.length() << endl;
//         cout << s1 + s2 << endl;
//         swap(s1[0], s2[0]);
//         cout << s1 << "\n" << s2;

//     }
// }

// int main(){
//     string s1, s2;
//     cin >> s1 >> s2;
//     cout << s1.length() << " " << s2.length() << endl;
//     cout << s1 + s2 << "\n";
//     swap(s1[0], s2[0]);
//     cout << s1 << " " << s2;
// }

// Attribute Parser

// int main(){
// int n, q; // n is number of lines in HRML code, q are the queries

// cin >> n >> q;

// declare a hashmap

//     map<string, string> myHashMap;
//     string inputStr, mytag;
//     string attribute, value;
//     getline(cin, inputStr);
//     string word;
//     stringstream ss(inputStr);
//     while (getline(ss, word, ' ')){
//         if (word[0] == '<'){
//             mytag = word.substr(1);
//         }
//         else if (word[0] != '"' && word[0] != '='){
//             attribute = mytag + "~" + word;
//         }
//         else if (word[0] == '"'){
//             if (word.back() == '>'){
//                 word = word.substr(0, word.length() - 1);
//             }
//             value = word.substr(1, word.length() - 2);
//         }
//         myHashMap[attribute] = value;
//     }

//     cout << myHashMap["tag1~father"] << endl;

// }

// int main(){
//     string arr[] = {"<tag1 value = \"HelloWorld\">", "<tag2 name = \"Name1\" aaqib = \"Nazir\"", "</tag1>", "</tag2>"};
//     map<string, string> myHashMap;
//     string mytag, word, attribute, value, endingTag = "";
//     vector<string> myvector;
//     for (int i = 0; i < 4; i++){
//         string inputStr = arr[i];
//         stringstream ss(inputStr);
//         while (getline(ss, word, ' ')){
//             if (word[0] == '<' && word[1] != '/' && endingTag == ""){
//                 mytag = word.substr(1);
//                 endingTag = "</" + mytag + ">";
//                 myvector.push_back(endingTag);

//             }
//             else if (word[0] == '<' && word[1] != '/' && endingTag != ""){
//                 mytag += "." + word.substr(1);
//                 endingTag = "</" + word.substr(1) + ">";
//                 myvector.push_back(endingTag);
//             }
//             else if (word == myvector[myvector.size() - 1]){
//                 myvector.pop_back();
//                 endingTag = "";
//             }
//             else if (word[0] != '"' && word[0] != '=' && word.back() != '>' && mytag != ""){
//                 attribute = mytag + "~" + word;
//                 // cout << attribute << endl;
//             }
//             else if (word[0] == '"' && attribute != ""){
//                 if (word.back() == '>'){
//                     word = word.substr(0, word.length() - 1);
//                 }
//                 value = word.substr(1, word.length() - 2);
//             }
//             myHashMap[attribute] = value;

//         }

//     }
//     cout << myHashMap["tag1~value"];

// }

// class Student{
//     private:
//     int scores[5];
//     int total;

//     public:
//     Student(){
//         total = 0;
//     }

//     // to get input

//     void input(){
//         for (int i = 0; i < 5; i ++){
//             cin >> scores[i];
//             total += scores[i];
//         }
//     }

//     int CalculateTotal(){
//         return total;
//     }
// };

// class Box{
//     private:
//     long l, b, h;

//     public:
//     Box(){
//         l = b = h = 0;
//     }
//     Box(int length, int breath, int height){
//         l = length;
//         b = breath;
//         h = height;
//     }
//     Box(const Box& B){
//         l = B.l;
//         b = B.b;
//         h = B.h;
//     }
// //     int getLength() - Return box's length
// // int getBreadth() - Return box's breadth
// // int getHeight() - Return box's height
// // long long CalculateVolume() - Return the volume of the box

//     int getLength(){
//         return l;
//     }
//     int getBreath(){
//         return b;
//     }
//     int getHeight(){
//         return h;
//     }
//     long long CalculateVolume(){
//         long long x = l * b * h;
//         return x;
//     }

//     friend bool operator < (Box& A, Box& B){
//         if ( (A.l < B.l) || (A.b < B.b && A.l == B.l) || ( A.h < B.h && A.b == B.b && A.l == B.l)){
//             return true;
//         }
//         else{
//             return false;
//         }

//     }
//     friend ostream& operator<<(ostream& out, Box& B){
//         out << B.l << " " << B.b << " " << B.h;
//         return out;
//     }

// };

// int main(){
//     int n;
//     cin >> n;
//     vector<int> myVector;
//     for (int i = 0; i < n; i++){
//         int x;
//         cin >> x;
//         myVector.push_back(x);

//     }
//     sort(myVector.begin(), myVector.end());

//     for (int i = 0; i < n; i++){
//         cout << myVector[i] << " ";
//     }

// }

// int main(){
//     int n, e;
//     cin >> n;
//     vector<int> myVector;

//     for (int i = 0; i < n; i ++){
//         int x;
//         cin >> x;
//         myVector.push_back(x);
//     }
//     cin >> n;

//     myVector.erase(myVector.begin() + n);

//     cin >> n >> e;

//     myVector.erase(myVector.begin() + n - 1, myVector.begin() + e - 1);

//     cout << myVector.size() << endl;

//     for (int i = 0; i < myVector.size(); i++){
//         cout << myVector[i] << " ";
//     }

// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }

//     int q;
//     cin >> q;
//     for (int i = 0; i < q; i++)
//     {
//         int value;
//         cin >> value;

//         vector<int>::iterator low;
//         low = lower_bound(v.begin(), v.end(), value);
//         // cout << low << endl;
//         if (v[low - v.begin()] == value)
//             cout << "Yes " << (low - v.begin() + 1) << endl;
//         else
//             cout << "No " << (low - v.begin() + 1) << endl;
//     }
// }

// void myfunc(int[]);

// int main(){
//     int myarr[] = {1, 2, 3, 4, 5, 6, 5, 8};
//     int n = end(myarr) - begin(myarr);
//     cout << n << endl;
//     myfunc(myarr);
// }

// void myfunc(int arr[]){
//     int n = end(&arr) - begin(&arr);
//     cout << n << endl;

// }

// int main(){
//     int roll_number = 238;
// int a = 4, m = 0, b = 3, x = roll_number;
// for (int i=a; i<x+(b+x&a); i++){
//     m = m*b*b + i;
//     cout << m << endl;
// }

// int n=987, x= roll_number;
// do
// {
// n=n+x;
// }while(n>0 && n<1000);
// cout << n << endl;

// int z=0, x= roll_number;
// while(z<100*50)
// {
// z=z*x+x+50;
// }
// cout << z << endl;
//     int i=100, x= roll_number, y = 1;
//     do
//     {
//     i=i+x*x+y;
//     }while(i<1000*50);
//     cout << i << endl;

// }

// int main(){
//     int R = 238;
//     string name = "hwar";
//     int N = name.length();
//     cout << "Before Multiplication: " << endl;
//     int array[N][N];
//     for (int i = 0; i < N; i++){
//         for (int j = 0; j < N; j++){
//             array[i][j] = 0;
//             cout << array[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "After Multiplication: " << endl;
//     for (int i = 0; i < N; i ++){
//         for (int j = 0; j < N; j++){
//             array[i][j] = R * (i + j);
//             cout << array[i][j] << " ";
//         }
//         cout << endl;
//     }

// }

// int main(){
//     // using CNIC 42301-8599197-3
//     int x = 10;
//     int n = 19;
//     int total = 0;
//     for (int i = 1; i <= n; i++){
//         int y = (x * i) - 1;
//         total += y;
//         cout << y << " ";
//     }
//     cout << endl << "Your Sum is: " << total << endl;

// }

// #include <iostream>
// using namespace std;
// void find_x(int *y)
// {
//     int x;
//     if (*y < 50)
//     {
//         x = 5 * *y;
//         x > *y || x < 100 ? x += x : x *= x;
//         x = x % 2 + (++x) * *y / 2 * *y / 3;
//         cout << "When y = " << *y << " value of x : " << x << endl;
//     }
//     else if (*y < 100)
//     {
//         x = *y * 4 + 22;
//         x > *y || x < 500 ? x += x : x *= x;
//         x = x % 2 + (++x) * *y / 2 * *y / 3;
//         cout << "When y = " << *y << " value of x : " << x << endl;
//     }
//     else if (*y < 200)
//     {
//         x = *y * 2 + 54;
//         x > *y || x < 800 ? x += x : x *= x;
//         x = x % 2 + (++x) * *y / 2 * *y / 3;
//         cout << "When y = " << *y << " value of x : " << x << endl;
//     }
//     else if (*y < 270)
//     {
//         x = *y * 7 + 65;
//         x > *y || x < 1000 ? x += x : x *= x;
//         x = x % 2 + (++x) * *y / 2 * *y / 3;
//         cout << "When y = " << *y << " value of x : " << x << endl;
//     }
// }
// int main()
// {
//     int y;
//     cout << " Enter the value of y : " << endl;
//     cin >> y;
//     for (int i = 0; i < 3; i++)
//     {
//         find_x(&y);
//         y = y + 50;
//     }
// }

// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     string name1, name2;
//     int n;
//     cout << "Enter your First Name: " << endl;
//     cin >> name1;
//     cout << "Enter your Last Name : " << endl;
//     cin >> name2;
//     cout << " Enter total number of characters in your first name: " << endl;
//     cin >> n;
//     name1.replace(0, n, name2);
//     cout << name1 << endl;
//     cout << name2 << endl;
// }

// int main(){
//     int x;
//     cin >> x;
//     for (int i = 0; i < x; i++){
//         cout << i * i << " ";
//     }
// }

// class Distance
// {
//     private:
//         int feet;
//         float inches;

//     public:
//         Distance()
//         {
//             feet = 0;
//             inches = 0.0;
//         }

//         Distance(int ft, float in)
//         {
//             feet = ft;
//             inches = in;
//         }

//         void get_distance()
//         {
//             cout << "\nEnter feet: ";
//             cin >> feet;

//             cout << "\nEnter inches: ";
//             cin >> inches;
//         }

//         void print_dist()
//         {
//             cout << feet << "\'" << inches << "\'";
//         }
// };

// int main()
// {
//     Distance dist1(11, 6.25);
//     Distance dist2(dist1);
//     Distance dist3 = dist1;

//     dist1.print_dist();
//     dist2.print_dist();
//     dist3.print_dist();

//     cout << endl;
//     return 0;
// }

// class BadLengthException{
//     private:
//     int stringLength;

//     public:
//     BadLengthException(int number){
//         stringLength = number;
//     }

//     int what(){
//         return stringLength;
//     }
// };

// int main(){
//     int x[4];
//     try{
//         x[6] = 0;
//     }
// catch (exception& error){
//     cout << "Exception: " << error.what() << endl;
// }
// catch (bad_alloc& error){
//     cout << "Not enough Memory" << endl;
// }
//     catch (...){
//         cout << "Other" << endl;
//     }

// }

// class Person{
//     public:
//     string name;
//     int age;
//     int cur_id;

//     Person(){
//         name = "", age = 0, cur_id = 0;
//     }

//     virtual void getdata(){
//         cin >> name >> age;
//     }
//     virtual void putdata(){
//         cout << name << " " << age << endl;

//     }
// };

// class Professor: public Person{
//     public:
//     int publications, cur_id;
//     static int id;

//     Professor(){
//         cur_id = id++;
//         publications = 0;
//     }

//     void getdata() override{
//         cin >> name >> age >> publications;
//     }

//     void putdata() override{
//         cout << name << " " << age << " " << publications << " " << cur_id << endl;
//     }

// };

// int Professor::id = 1;

// class Student: public Person{
//     public:

//     static int id;
//     int arr[6];
//     int total = 0;

//     Student(){
//         cur_id = id++;

//     }
//     void getdata() override{
//         cin >> name >> age;
//         for (int i = 0; i < 6; i++){
//             int x;
//             cin >> x;
//             arr[i] = x;

//         }

//     }

//     void putdata() override{
//         for (int i: arr){
//             total += i;
//         }
//         cout << name << " " << age << " " << total << " " << cur_id << endl;
//     }

// };

// int Student::id = 1;

// int main(){

//     int n, val;
//     cin>>n; //The number of objects that is going to be created.
//     Person *per[n];

//     for(int i = 0;i < n;i++){

//         cin>>val;
//         if(val == 1){
//             // If val is 1 current object is of type Professor
//             per[i] = new Professor;

//         }
//         else per[i] = new Student; // Else the current object is of type Student

//         per[i]->getdata(); // Get the data from the user.

//     }

//     for(int i=0;i<n;i++)
//         per[i]->putdata(); // Print the required output for each object.

//     return 0;

// }

// int main(){
//     int arr[] = {1, 2, 3};
//     for (int i: arr){
//         cout << i << endl;
//     }
// }

// void myfunc(int[]);

// int main(){
//     int myarr[] = {1, 2, 3};
//     myfunc(myarr);
// }

// void myfunc(int arr[]){
//     for (int i: *arr){
//         cout << i << endl;
//     }
// }

// int main(){
//     string x;
//     cout << "Enter any word or sentence: ";
//     getline(cin, x);
//     map<char, int> mymap;
//     for (char i: x){
//         mymap[i] = 0;
//         for (char j : x){
//             if (i == j){
//                 mymap[i] += 1;
//             }
//         }
//     }
//     for (auto element: mymap){
//         cout << element.first << ": " << element.second << endl;
//     }
// }

// void repchar();
// void repchar(char);
// void repchar(char, int);

// int main(){
//     repchar();
//     repchar('+');
//     repchar('-', 20);

// }

// void repchar(){
//     for (int i = 0; i < 45; i ++){
//         cout << "*";
//     }
//     cout << endl;
// }

// void repchar(char a){
//     for (int i = 0; i < 45; i ++){
//         cout << a;
//     }
//     cout << endl;
// }

// void repchar(char a, int x){
//     for (int i = 0; i < x; i ++){
//         cout << a;
//     }
//     cout << endl;
// }
// string printString();
// string printString(){
//     int age;
//     string name;
//     cin >> name >> age;
//     stringstream ss;
//     ss << name << " " << age;
//     return ss.str();

// }

// int main(){
//     string ans = printString();
//     cout << ans[3];

// }

// class Rarefunc{
//     public:
//     void printFunc();

//     ~Rarefunc(){};
// };

// void Rarefunc:: printFunc(){
//     cout << "Hello World" << endl;
// }

// int main(){
//     Rarefunc m1;
//     m1.printFunc();
// }

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n;
//     cin >> n;
//     map<string, int> mymap;

//     for (int i = 0; i < n; i++){
//         string x; int y, c;
//         cin >> c >> x;
//         if (c == 1){
//             cin >> y;
//             mymap[x] += y;

//         }
//         else if (c == 2){
//             mymap.erase(x);
//         }
//         else{
//             cout << mymap[x] << endl;
//         }
//     }

//     return 0;
// }

// input: 1 100.345 2006.008 2331.41592653498
// int main() {
// 	int T; cin >> T;
// 	cout << setiosflags(ios::uppercase);
// 	cout << setw(0xf) << internal;
// 	while(T--) {
// 		double A; cin >> A;
// 		double B; cin >> B;
// 		double C; cin >> C;

// 		/* Enter your code here */
//         // for first line
//         cout << hex << left << showbase << nouppercase;
//         cout << (long long)A << endl;

//         // for second line

//         cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
//         cout << B << endl;

//         // for third line

//         cout << scientific << uppercase << noshowpos << setprecision(9);
//         cout << C << endl;
// 	}
// 	return 0;

// }

// Printed Line 1

// The manipulators I used here are hex (which will output the number in hexadecimal format), left (which will align the number to the left), showbase (which will make sure the hexadecimal number has a '0x' at the beginning), and nouppercase (which converts all alphabetic hexadecimal values to lowercase).

// Printed Line 2 In this section, I actually have to undo some of the previous manipulations.

// dec: switches numbers from hexadecimal back to decimal.
// right: aligns values to the right instead of the left
// setw(15): sets a fixed width of 15, as the effect from the initial code only impacts the first printed line.
// setfill('_'): by default, when you have a fixed width, if your printed value doesn't fill up the entire length (for example, if you have a width of 15 and only print 7 characters), the extra characters used to pad are whitespaces. This function lets you change the padding to whatever character you want.
// showpos: Makes sure there is a plus sign before any positive numbers
// fixed: ensures that number is printed out entirely and that scientific notation isn't used for larger numbers
// setprecision(2): sets the number of decimal places to 2.
// Printed Line 3

// scientific: Prints output in scientific notation format
// uppercase: Undoes previous nouppercase manipulator and ensures that the 'E' in the scientific notation is capitalised
// noshowpos: Undoes previous showpos manipulator and gets rid of the plus at the start of positive values
// setprecision: Changes the number of digits after the decimal place from 2 to 9.

// class Rectangle{
//     protected:
//     int width;
//     int height;

//     public:
//     Rectangle() : width(0), height(0){}

//     void display(){
//         cout << width << " " << height << endl;
//     }

// };

// class rectangleArea: public Rectangle{
//     public:
//     void read_input(){
//         cin >> width >> height;
//     }

//     void display(){
//         cout << width * height << endl;
//     }
// };

// class Triangle{
// 	public:
// 		void triangle(){
// 			cout<<"I am a triangle\n";
// 		}
// };

// class Isosceles : public Triangle{
//   	public:
//   		void isosceles(){
//     		cout<<"I am an isosceles triangle\n";
//   		}
// };

// //Write your code here.
// class Equilateral: public Isosceles{
//     public:
//     void equilateral(){
//         cout << "I am an equilateral triangle" << endl;
//     }

// };
// int main(){

//     Equilateral eqr;
//     eqr.equilateral();
//     eqr.isosceles();
//     eqr.triangle();
//     return 0;
// }

// int main(){
//     // creating a char array
//     char title[5]; // This is C function, total length string length + 1;
//     // #include<string.h>
//     strcpy(title, "Aqib");  // char array has 5 position, so 4 chars can be passed

//     for (char x: title){
//         cout << x << endl;
//     }

// }

// class postfix{
//     private:
//     int x;

//     public:
//     postfix(int c){
//         x = c;
//     }

//     postfix operator+=(int c){
//         x += c;
//         return postfix(x);
//     }

//     void print(){
//         cout << x << endl;
//     }

// };

// int main(){
//     postfix c = 2;
//     c+=  5;
//     c.print();
// }

// int main(){

//     string arr[2][2];
//     string arr1[] = {"Aaqib", "Nazeer"};
//     copy(arr1, arr1 + 2, arr[0]);

//     cout << arr[0][1] << endl;

//     copy(staff, staff + 5, cricketer[3]);

// }

// int main(){
//     int N = 7;
//     int K = 4;
//     int arr[] ={3, 4, 5, 8, 1, 4, 10};
//     vector<int> ans;

//     for (int i = 0; i < N; i ++){
//         if (i + K < N){
//             int max = 0;
//             for (int j = 0; j < K; j++){
//                 if (arr[i + j] > max){
//                     max = arr[i + j];
//                 }
//             }
//             ans.push_back(max);
//         }
//     }
//     for (int i = 0; i < ans.size(); i++){
//         cout << ans[i] << " ";
//     }

// }

// int main(){

//     for (int i = 0; i < N; i ++){
//         if (i + K <= N){
//             int max = 0;
//             for (int j = 0; j < K; j++){
//                 if (arr[i + j] > max){
//                     max = arr[i + j];
//                 }
//             }
//             // ans.push_back(max);
//             cout << max << " ";
//         }
//     }
//     cout << endl;

// }

// int main(){
//     map<int, list<pair<int, int> >::iterator> mp;
//     list<pair<int, int> > lru;

//     lru.push_back({1, 2});
//     mp[2] = lru.begin();

// }

// class A{
//     public:
//     string x;

//     public:
//     void change(string x){
//         this->x = x;
//     }

//     void show(){
//         cout << x << endl;
//     }

// };

// class B: public A{

// };

// class C: public A{
// };

// class D: public A{
//     public:
//     void change(string y){
//         this->x = y;
//     }
// };

// int main(){
//     A a;
//     a.change("Hello");
//     a.show();
//     B b;
//     b.show();
// }

// class A{
//     public:
//     string x;

//     A(string x){
//         this->x = x;
//     }

//     void show(){
//         cout << x << endl;
//     }
// };

// class B: public A{
//     public:
//     B(string x): A(x) {}
//     void change(string x){
//         this->x = x;
//     }
// };

// int main(){
//     A *ptr;
//     B b("Aaqib");
//     ptr = &b;

//     ptr->show();

//     b.change("Hello");
//     ptr->show();

// }

// #include <cstdlib>

// class account_manage
// {
//     protected:
// 	    char cnic[13], pin[6];
//         char acc_type[10];
//         char name[30];
// 	    double cash_dept;
//         int acc_num = rand() % 100+1000000;
// };

// class create : virtual public account_manage
// {
//     public:
//         virtual void display_info(){

//         }
//         void create_account()
//         {
//             cout << "Enter Name: "; cin >> name;
//             cout << "Enter CNIC Number: "; cin >> cnic;
//             cout << "Enter Account Type (Current/Saving): "; cin >> acc_type;
//             cout << "Enter the amount of cash (More than RS. 1000): "; cin >> cash_dept;
//             if (cash_dept<1000)
//                 {cout << "Amount must be greater than 1000!\nEnter new amount: "; cin >> cash_dept;}
//             else
//                 cout << "Congratulations! Your Account Has Been Created." << endl;
//             cout << "Your Account Number is: " << acc_num << endl;
//             cout << "Enter 6 digit pin: "; cin >> pin;
//         }
// };

// class display : virtual public account_manage
// {
//     // private:
//     // 	char name[30], cnic[13], pin[6], acc_type[10];
// 	//     double cash_dept;
//     //     int acc_num = rand() % 100+1000000;
//     public:
//         void display_info()
//         {
//         cout << "--------------------------------------------" << endl;
//         cout << "Name: " << name << endl;
//         cout << "CNIC: " << cnic << endl;
//         cout << "Account Type: " << acc_type << endl;
//         cout << "Balance: " << "RS. " << cash_dept << endl;
//         cout << "Account Number: " << acc_num << endl;
//         cout << "--------------------------------------------" << endl;
//         }
// };

// class costumer: virtual public create, virtual public display
// {
//     public:
//     void create_account()
//     {create::create_account();}
//     void display_info()
//     {display::display_info();}
// };

// int main()
// {
//     account_manage *ptr;

//     costumer a1;
//     ptr = &a1;
//     a1.create_account();
//     a1.display_info();
//     return 0;
// }

// class College
// {
// protected:
//     string name, city;

// public:
//     College()
//     {
//         this->name = "";
//         this->city = "";
//     }

//     virtual void getData() = 0; // for creating the Abstract base class

//     virtual void baseData()
//     {
//         cout << "Enter the College Name: ";
//         cin >> this->name;
//         cout << "Enter the City: ";
//         cin >> this->city;
//     }

//     virtual void showData()
//     {
//         cout << "The College Name is: " << this->name << endl;
//         cout << "The City is: " << this->city << endl;
//     }
// };

// class Teacher : public College
// {
// protected:
//     string teacherName;

// public:
//     Teacher() : College()
//     {
//         teacherName = "";
//     }

//     void getData()
//     {
//         College::baseData();
//         cout << "Enter Teacher Name: ";
//         cin >> this->teacherName;
//     }

//     void showData()
//     {
//         College::showData();
//         cout << "The Name of Teacher is: " << this->teacherName << endl;
//     }
// };

// class Department : public College
// {
// protected:
//     string departName;

// public:
//     Department() : College()
//     {
//         departName = "";
//     }

//     void getData()
//     {
//         College::baseData();
//         cout << "Enter Department Name: ";
//         cin >> this->departName;
//     }

//     void showData()
//     {
//         College::showData();
//         cout << "The Name of Department is: " << departName << endl;
//     }
// };

// int main()
// {
//     College *ptr[50]; // creating a array of pointers from base Class;
//     int numberOfPerson = 0;

//     char personType;
//     char quit;

//     do
//     {
//         cout << "Want to Teacher or Department (T/D)" << endl;
//         cin >> personType;
//         if (personType == 'D' || personType == 'd')
//         {
//             ptr[numberOfPerson] = new Department;
//         }
//         else if (personType == 'T' || personType == 't')
//         {
//             ptr[numberOfPerson] = new Teacher;
//         }

//         ptr[numberOfPerson]->getData();
//         numberOfPerson += 1;
//         cout << endl;
//         cout << "Want to Another? Y/N: ";
//         cin >> personType;
//     } while (personType == 'Y' || personType == 'y');
//     cout << endl;
//     for (int i = 0; i < numberOfPerson; i++)
//     {
//         ptr[i]->showData();
//         cout << endl;
//     }
// }

// class clothes
// {
// public:
//     virtual void price() = 0;
// };
// class shirt;
// class skirt : public clothes
// {
// private:
//     int p;

// public:
//     void price()
//     {
//         cout << "enter total price for skirts";
//         cin >> p;
//     }
//     friend int discount(shirt, skirt);
// };
// class shirt : public clothes
// {
// private:
//     int c;

// public:
//     void price()
//     {
//         cout << "enter total price for shirts";
//         cin >> c;
//     }
//     friend int discount(shirt, skirt);
// };
// int discount(shirt sh, skirt sk)
// {
//     cout << "total price was:" << sh.c + sk.p << endl;
//     cout << "total price after discount is:" << (sh.c + sk.p) - (0.25 * (sh.c + sk.p)) << endl;
// }
// int main()
// {
//     skirt k;
//     shirt s;

//     s.price();
//     k.price();
//     discount(s, k);

//     return 0;
// }

// class College
// {
//     public:
//         string name;
//         string city;
//         static int count;
//     public:
//     College()
//         {
//             name = "";
//             city = "";
//         }
//         void get_info()
//         {
//             cout << "Enter the name of College: " << endl;
//             getline(cin, name);
//             cout << "Enter the name of city: " << endl;
//             getline(cin, city);
//         }
//         void show_info()
//         {
//             cout << "Name of College is: " << name << endl;
//             cout << "Name of city is: " << city << endl;
//         }
// };

// int College::count = 0;

// class Department : public College
// {
//     private:
//         string department_name;
//     public:
//     Department(): College(){
//         department_name = "";
//     }

//     void get_info()
//     {
//         College::get_info();
//         cout << "Enter name of department: " << endl;
//         getline(cin, department_name);
//     }
//     void show_info()
//     {
//         College::show_info();
//         cout << "Name of department is: " << department_name << endl;
//     }
// };

// class Teacher : public College
// {
//     private:
//         string teacher_name;
//     public:
//     Teacher(): College(){
//         count ++;
//         teacher_name = "";
//     }
//     void get_info()
//     {
//         College::get_info();
//         cout << "Enter name of teacher: " << endl;
//         getline(cin, teacher_name);
//     }
//     void show_info()
//     {
//         College::show_info();
//         cout << "Name of teacher is: " << teacher_name << endl;
//     }
// };

// int main()
// {
//     Department d1;
//     Teacher t1;
//     d1.get_info();
//     t1.get_info();
//     d1.show_info();
//     t1.show_info();

//     cout << "\n Total no.of Teacher in the college: " << College::count << endl;
//     return 0;
// }
// template <class X> class AddElements{
//     public:
//     X data;
//     AddElements(X a){
//         data = a;
//     }
//     X add(X a){
//         return data + a;
//     }

//     X concatenate(X a){
//         return data + a;
//     }
// };

// int main()
// {
//     int n, i;
//     cin >> n;
//     for (i = 0; i < n; i++)
//     {
//         string type;
//         cin >> type;
//         if (type == "float")
//         {
//             double element1, element2;
//             cin >> element1 >> element2;
//             AddElements<double> myfloat(element1);
//             cout << myfloat.add(element2) << endl;
//         }
//         else if (type == "int")
//         {
//             int element1, element2;
//             cin >> element1 >> element2;
//             AddElements<int> myint(element1);
//             cout << myint.add(element2) << endl;
//         }
//         else if (type == "string")
//         {
//             string element1, element2;
//             cin >> element1 >> element2;
//             AddElements<string> mystring(element1);
//             cout << mystring.concatenate(element2) << endl;
//         }
//     }
//     return 0;
// }

// int main(){
//     ofstream fout;
//     fout.open("data.txt", ios::app);

// string word;
// while (word != "QUIT"){
//     getline(cin, word);
//     if (word != "QUIT")
//         fout << word << " ";
// }

// ifstream fin;
// fin.open("data.txt");
// fin.seekg(4); // 32 is the ASCII code of space
// cout << fin.get() << endl;

// char character;
// while (character != '-'){
//     cin >> character;
//     if (character != '-'){
//         fout << character;
//     }
// }

// char character;
// int x = 0;
// while(character != '-'){
//     cin >> character;
//     if (character != '-'){
//         fout.seekp(fout.tellp() - 1);
//         fout << character;
//         x += 1;
//         // cout << x << endl;
//     }
// }
//     cout << fout.tellp();
//     fout << "A";
//     fout.seekp((int)fout.tellp() - 2);
//     fout << "Q";
//     fout.close();
// }

// int main()
// {
//     string name[] = {"Aaqib", "Faiq", "Abbas"};

//     int N = sizeof(name) / sizeof(name[0]); //Get the array size

//     sort(name, name + N); //Use the start and end like this

//     for (int i = 0; i < N; i++)
//     {
//         cout << name[i] << endl;
//     }
// }

// void mostActive(vector<string> customers);
// void mostActive(vector<string> customers)

// {
//     map<string, int> data;
//     int lengthOfCustomer = customers.size();
//     cout << lengthOfCustomer << endl;
//     for (int i = 0; i < customers.size(); i++)
//     {
//         data[customers[i]] = 0;
//         for (int j = 0; j < customers.size(); j++)
//         {
//             if (customers[i] == customers[j])
//             {
//                 data[customers[i]] += 1;
//             }
//         }
//     }
//     vector<string> ans;

//     for (const auto &p : data)
//     {
//         // cout << p.first << " " << p.second << endl;
//         double answer = ((double)p.second/lengthOfCustomer) * 100;

//         if (answer > 5.0){
//             ans.push_back(p.first);
//         }
//     }
//     string arr[ans.size()];
//     for (int i = 0; i < ans.size(); i++){
//         arr[i] = ans[i];
//     }

//     int z = sizeof(arr)/sizeof(arr[0]); //Get the array size

//     sort(arr,arr+z);
//     vector<string> final;
//     for (int i = 0; i < ans.size(); i++){
//         final.push_back(arr[i]);
//     }

//     return final;
// }

// int main()
// {
//     vector<string> myvector = {"Bigcorp", "Bigcorp", "Acme", "Bigcorp", "Zork", "Zork",
//     "Abc", "Bigcorp", "Acme", "Bigcorp", "Bigcorp", "Zork", "Bigcorp", "Zork", "Zork", "Bigcorp",
//     "Acme", "Bigcorp", "Acme", "Bigcorp", "Acme", "LittleCorp", "NadirCorp"};
//     mostActive(myvector);
// }

// int main(){

//     while(1){
//         char x;
//         cin >> x;
//         if (x == 'y' || x == 'Y'){
//             break;
//         }
//         else{
//             cout << "Please Enter y or Y" << endl;
//         }
//     }
// }

// int main(){
//     map<string, int> mmap;
//     cout << "Enter how much data you want to add: ";
//     int x;
//     cin >> x;
//     for (int i = 0; i < x; i++){
//         cout << "Enter the String key: ";
//         string KEY;
//         cin.ignore();
//         getline(cin, KEY);
//         cout << "Enter the int Value: ";
//         int y;
//         cin >> y;
//         mmap[KEY] = y;
//     }

//     for (auto element : mmap){
//         cout << "Key: " << element.first << " Value: " << element.second << endl;
//     }
// }

// int main()
// {
//     int rows;

//     cout << "Enter number of rows: ";
//     cin >> rows;

//     for(int i = 1; i <= rows; ++i)
//     {
//         for(int j = 1; j <= i; ++j)
//         {
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// int main(){
//     double x = 6;
//     cout.setf(ios::scientific);
//     cout << x << endl;
//     cout.unsetf(ios::scientific);
// }

// int main(){
//     map<string, int> mymap;
//     pair<string, int> mypair;

//     for (int i = 0; i < 4; i ++){
//         string name; int age;
//         cout << "Enter Name: ";
//         cin >> name;
//         cout << "Enter Age: ";
//         cin >> age;
//         mypair = make_pair(name, age);
//         mymap.insert(mypair);
//     }

//     for (auto element: mymap){
//         cout << element.first << " " << element.second << endl;
//     }
// }

// int main()
// {
//     char userString[50];
//     cin.getline(userString, 50);
//     size_t length = strlen(userString);
//     int j = 0;

//     char result[50];
//     for (int i = 0; i < length; i++)
//     {
//         if (isalpha(userString[i]))
//         {
//             result[j++] = userString[i];
//         }
//     }

//     cout << "The Resultant String is: " << result << endl;
// }

// class Conc
// {
// private:
//     string y;

// public:
//     Conc() : y("")
//     {
//     }

//     Conc(string y2) : y(y2)
//     {
//     }

//     Conc operator+(Conc x)
//     {
//         return Conc(y + x.y);
//     }

//     void printString()
//     {
//         cout << y << endl;
//     }

//     friend ostream& operator<<(ostream& dout, const Conc& xx)
//     {
//         cout << xx.y << endl;
//         return dout;
//     }

// };

// int main()
// {
//     Conc c1("Aaqib"), c2("Nazir");
//     Conc c3 = c1 + c2;
//     cout << c3;
// }
// int g = 100;
// int main(){
//     int a;
//     {
//         int b;
//         b = 20;
//         a = 35;
//         g = 65;
//         cout << b << a << g;
//     }
//     a = 50;
//     cout << a << g;
// }

// class Account{
//     protected:
//     string typeOfAccount, name;
//     double startAmount, depoAmount;
//     int monthInterest, withdrawls;

//     public:
//     Account(){
//         typeOfAccount = "";
//         startAmount = 0;
//         depoAmount = 0;
//         monthInterest = 0;
//         withdrawls = 0;
//     }
//     void getData(){
//         cout << "Welcome to the Bank\nPlease Enter your Name: ";
//         getline(cin, name);
//         cout << "Select the type of your account from below \n 1: Current\n 2: Saving";
//         cin >> typeOfAccount;

//         cout << "Thank you!!" << endl;
//         cout << "Now please Enter the starting ammount: ";
//         cin >> startAmount;
//         cout << endl;
//     }

//     void depositAmmount(){
//         cout << "Your Balance is: " << startAmount << endl;
//         cout << "How much ammount you want to deposit: ";

//         cin >> depoAmount;
//         startAmount += depoAmount;
//         cout << "Your Balance Now after deposit is: " << startAmount << endl;
//     }

//     void widthDrawls(){
//         cout << "Your Balance is: " << startAmount << endl;
//         cout << "How much ammount you want to withdrawal: ";
//         cin >> withdrawls;
//         startAmount -= withdrawls;
//         cout << "Your Balance Now after withdrawl is: " << startAmount << endl;
//     }

//     void showCurrent(){
//         cout << "\nYour Current Balance is: ";
//         cout << startAmount << endl;
//     }

// };

// class TranferMoney: public Account{
//     private:
//     string email, feedback;
//     string secondName;
//     int accountNumber;
//     double transMoney;

//     public:
//     TranferMoney(){
//         email = "";
//         secondName = "";
//         accountNumber = 0;
//     }

//     void TrasferMoney(){
//         cin.ignore();
//         cout << "Dear " << name << ", Please enter details for the account you want to transfer!!" << endl;
//         cout << "Enter the Ammount reciever Person Name: ";
//         cin >> secondName;
//         cout << "Enter the Account number to which you want to transfer: ";
//         cin >> accountNumber;
//         cout << "Enter Your email: ";
//         cin >> email;

//         cout << "Your current balance is: " << startAmount << endl;
//         cout << "How much ammount you want to tranfer to " << secondName << "'s Account: ";
//         cin >> transMoney;

//         startAmount -= transMoney;
//         cout << transMoney << "has been transfered!!!" << endl;
//         cout << "Your Current Balance is: " << startAmount << endl;
//     }

//     void getFeedback(){
//         cout << "Please provide your feedback, If you have any complains or suggestion about our service: ";
//         getline(cin, feedback);
//         cout << "Your feedback has been submitted!!" << endl;
//         cout << "Details sent to your email: " << email;
//     }
// };

// int main(){
//     TranferMoney a;
//     a.getData();
//     a.depositAmmount();
//     a.widthDrawls();
//     a.showCurrent();

//     a.TrasferMoney();
//     a.getFeedback();

// }

// int main(){
//     list <int> g
//     list <int> :: iterator it;
//     for(it = g.begin(); it != g.end(); ++it)
//         cout << '\t' << *it;
//     cout << '\n';
// }

// int main()
// {
//     pair<string, int> mypair;
//     mypair = make_pair("Aaqib", 12);
//     cout << mypair.first << mypair.second << endl;
// }

// int main()
// {
//     vector<int> myvector = {1, 2};
//     myvector.push_back(23);
//     vector<int>::iterator it;

//     for (it = myvector.begin(); it < myvector.end(); it++)
//     {
//         cout << *it << endl;
//     }

//     for (int &x: myvector)
//     {
//         cout << x << " ";
//     }

// }

// int main()
// {

//     // initialize container
//     map<int, int> mp;

//     // insert elements in random order
//     mp.insert({ 2, 30 });
//     mp.insert({ 1, 40 });
//     mp.insert({ 3, 60 });

//     // does not inserts key 2 with element 20
//     mp.insert({ 2, 20 });
//     mp.insert({ 5, 50 });

//     pair<int, int> mypair = {99, 99};
//     mp.insert(mypair);

//     // prints the elements
//     cout << "KEY\tELEMENT\n";
//     for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
//         cout << itr->first << '\t' << itr->second << '\n';
//     }

//     for (auto &x: mp)
//     {
//         cout << x.first << ' ' << x.second << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int count = 0;
//     ifstream fin;
//     string word;

//     fin.open("data.txt");

//     while(fin >> word)
//     {
//         // cout << word << endl;
//         count += 1;

//     }

//     cout << "The Number of words are: " << count << endl;
// }

// int main()
// {
//     int x = 1;
//     int y = 3;
//     int rollNo = 59;
//     for (int i = 0; i < 4; i++)
//     {
//         for(int z = 0; z < y; z ++)
//             {
//                 cout << ' ';
//             }
//         for (int j = 0; j < i + 1; j ++)
//         {

//             cout << x + rollNo  << " ";
//             x += 1;
//         }
//         y -= 1;
//         cout << endl;
//     }
// }

// int main() {
//     std::map<std::string, int> mapOfWordCount;
//     // Insert Element in map
//     mapOfWordCount.insert(std::pair<std::string, int>("first", 1));
//     mapOfWordCount.insert(std::pair<std::string, int>("second", 2));
//     mapOfWordCount.insert(std::pair<std::string, int>("third", 3));
//     mapOfWordCount.insert(std::pair<std::string, int>("third", 4));
//     mapOfWordCount.insert(std::pair<std::string, int>("third", 5));
//     // Create a map iterator and point to beginning of map
//     std::map<std::string, int>::iterator it = mapOfWordCount.begin();
//     // Iterate over the map using Iterator till end.
//     while (it != mapOfWordCount.end())
//     {
//         // Accessing KEY from element pointed by it.
//         std::string word = it->first;
//         // Accessing VALUE from element pointed by it.
//         int count = it->second;
//         std::cout << word << " :: " << count << std::endl;
//         // Increment the Iterator to point to next entry
//         it++;
//     }

//     for (const auto element: mapOfWordCount)
//     {
//         cout << element.first << " " << element.second << endl;
//     }
//     return 0;
// }

// class LRUCache: public Cache{
//     private:
//     int capacity;
//     map<int, int> mymap;

//     public:
//     LRUCache(int capacity)
//     {
//         this->capacity = capacity;
//     }

//     void set(int key, int value)
//     {
//         if (mymap.size() <= capacity && mymap.find(key) != mymap.end())
//         {
//             mymap.insert(mymap.begin(), {key, value});
//             for ()
//         }
//         else if (mymap.size() > capacity)
//         {
//             mymap.erase(prev(mymap.end()));
//         }
//     }

//     int get(int key)
//     {
//         if (mymap.find(key) != mymap.end())
//         {
//             return mymap[key];
//         }
//         return -1;
//     }
// };

// class LRUCache: public Cache{
//     private:
//     int capacity;
//     map<int, int> mymap;
//     vector<int> myvec;
//     public:
//     LRUCache(int capacity)
//     {
//         this->capacity = capacity;
//     }

//     void set(int key, int value)
//     {
//         // if (mymap.find(key) == mymap.end())
//         // {
//         //     mymap.insert(mymap.begin(), {key, value});
//         //     // for (const auto element: mymap)
//         //     // {
//         //     //     cout << element.first << " " << element.second << endl;
//         //     // }
//         // }
//         mymap.insert(mymap.begin(), {key, value});
//         myvec.push_back(key);
//         if (mymap.size() == capacity + 1)
//         {
//             // cout << "Ab" << endl;
//             mymap.erase(myvec[0]);
//             myvec.erase(myvec.begin());
//             // for (const auto element: myvec)
//             // {
//             //     cout << element << " ";
//             // }
//             mymap.insert(mymap.begin(), {key, value});
//             // for (const auto element: mymap){
//             //     cout << element.first << element.second << endl;
//             // }
//         }
//     }

//     int get(int key)
//     {
//         if (mymap.find(key) != mymap.end())
//         {
//             return mymap[key];
//         }
//         return -1;
//     }
// };

// struct yourName
// {
//     string day;
//     string month;
//     int year;
// };

// void date_comparison(struct yourName *, struct yourName *);
// void date_comparison(yourName *p, yourName *q)
// {
//     if (p->day == q->day && p->month == q->month && p->year == q->year)
//     {
//         printf("Equal\n");
//     }
//     else{
//         printf("Not equal\n");
//     }
// }

// int main()
// {
//     yourName personOne = {"Tuesday", "April", 2000};
//     yourName personTwo = {"Tuesday", "March", 2000};
//     yourName *ptr1, *ptr2;
//     ptr1 = &personOne;
//     ptr2 = &personTwo;

//     date_comparison(ptr1, ptr2);
//     getch();
// }

// double power(int value, int p);
// double power(float value, int p);
// double power(long value, int p);

// double power(int value, int p)
// {
//     cout << "Normal" << endl;
//     double result = 1.0;
//     for (int i = 0; i < p; i ++)
//     {
//         result *= value;
//         // cout << result << endl;
//     }

//     return result;
// }

// double power(float value, int p)
// {
//     cout << "Float One" << endl;
//     double result = 1.0;
//     for (int i = 0; i < p; i ++)
//     {
//         result *= value;
//     }

//     return result;
// }

// double power(long value, int p)
// {
//     cout << "Long One" << endl;
//     double result = 1.0;
//     for (int i = 0; i < p; i ++)
//     {
//         result *= value;
//     }

//     return result;
// }

// int main()
// {
//     cout << power(5, 2) << endl;
//     cout << power(2.2f, 3) << endl;
//     cout << power(2222222L, 3) << endl;
// }

// int main()
// {
//     cout << "Will code runner be modified for ZSH?" << endl;
// }
// bool uniqueCharacters(string str);
// bool uniqueCharacters(string str)
// {

//     // If at any time we encounter 2
//     // same characters, return false
//     for (int i = 0; i < str.length() - 1; i++) {
//         for (int j = i + 1; j < str.length(); j++) {
//             if (str[i] == str[j]) {
//                 return false;
//             }
//         }
//     }

//     // If no duplicate characters encountered,
//     // return true
//     return true;
// }

// int main()
// {
//     int counter = 0;
//     string possibleNums = "0345678";
//     for (int i = 3500; i < 6501; i++)
//     {
//         int dosraCount = 0;
//         bool isValid;
//         string num = to_string(i);
//         for (char x: num)
//         {
//             if (possibleNums.find(x))
//             {
//                 isValid = true;
//             }
//             else{
//                 isValid = false;
//                 break;
//             }
//         }
//         if (isValid)
//         {
//             if (uniqueCharacters(num) == true)
//             {
//                 cout << num  << endl;
//                 counter += 1;
//             }

//         }

//     }
//     cout << counter << endl;
// }

// int main()
// {
//     cout << "Square\t" << "Cubes\t" << "Fourth Power" << endl;
//     for (int i = 1; i <= 5; i ++)
//     {
//         cout << i * i << "\t" << i * i * i << "\t" << i * i * i * i << endl;
//     }
// }

// class DM
// {
//     private:
//     double meters, centiMeters;

//     public:
//     DM(): meters(0), centiMeters(0)
//     {}
//     void getData()
//     {
//         cout << "Enter the Value of distance in meters: ";
//         cin >> meters;
//         cout << "Enter the value of distance " << this->meters << " in centimeters: ";
//         cin >> centiMeters;
//     }

//     void showData()
//     {
//         cout << endl;
//         cout << "The Value of distance in meters is: " << meters << 'm' << endl;
//         cout << "The value of distance in centimeters is: " << centiMeters << "cm" << endl;
//     }
// };

// int main()
// {
//     DM d1;
//     d1.getData();
//     d1.showData();
// }

// class TollBooth
// {
// private:
//     static int totalCars;
//     double money;

//     public:
//     TollBooth()
//     {
//         money = 0;
//     }

//     void payingCar()
//     {
//         cout << endl;
//         cout << "Car has been added to the record!" << endl;
//         totalCars += 1;
//         money += 0.5;
//     }

//     void showData()
//     {
//         cout << endl;
//         cout << "The Total Cars in record are: " << totalCars << endl;
//         cout << "The Total Amount collected for " << totalCars << " is: " << money << "$" << endl;
//     }
// };

// int TollBooth::totalCars = 0;

// int main()
// {
//     TollBooth t1;
//     t1.payingCar();
//     t1.payingCar();

//     t1.showData();
// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// class Hospital
// {
// protected:
//     string name, date, disease, d_date;
//     string arg[5] = {"Name of patient: ", "Date of admission: ", "Disease: ", "Date of Discharge: ", "Age: "};
//     string *ptr[5] = {&name, &date, &disease, &d_date};
//     static int no_of_p;
//     static vector<vector<string>> database;

// public:
//     void admit_patient()
//     {
//         string temp;
//         no_of_p += 1;
//         cout << "\nEnter the following details for Patient " << no_of_p << endl;
//         for (int i = 0; i < 4; i++)
//         {
//             cout << arg[i];
//             cin >> *ptr[i];
//         }
//         vector<string> v{name, date, disease, d_date};
//         database.push_back(v);
//     }
// };

// int Hospital::no_of_p = 0;
// vector<vector<string>> Hospital::database;

// class Patient : public Hospital
// {
// private:
//     string age;

// public:
//     void getPatientData()
//     {

//         Hospital::admit_patient();
//         cout << "Enter Age of Patient " << database[no_of_p - 1][0] << ": ";
//         cin >> age;
//         database[no_of_p - 1].push_back(age);
//     }

//     void showData()
//     {
//         cout << "\n\nDetails of Patients\n";
//         for (int i = 0; i < database.size(); i++)
//         {
//             cout << "\nDetials of Patient " << i + 1 << endl << endl;
//             for (int j = 0; j < 5; j++)
//             {
//                 cout << arg[j] << database[i][j] << endl;
//             }
//         }
//     }
// };

// int main()
// {
//     Patient p, p2;
//     p.getPatientData();
//     p2.getPatientData();
//     p.showData();
// }

// int main()
// {
//     ofstream myfile;
//     myfile.open("Data.bin", ios::app | ios::binary);
//     int x = 5;
//     string name = "Aaqib";
//     double y = 5.777;

//     myfile.write(&x, sizeof(x));
//     myfile
// }
// class User
// {
// private:
//     char data[60];

// public:
//     void getData()
//     {
//         cout << "Enter your Name: ";
//         cin >> data;
//     }
// };

// void createAccount(User p);
// void createAccount(User p)
// {
//     ofstream file("User.bin", ios::binary | ios::app | ios::out);
//     file.write((char *)&p, sizeof(User));
// }
// void checkAccount(User p);
// void checkAccount(User p)
// {
//     ifstream file("User.bin", ios::binary | ios::in);
//     file.read((char *)&p, sizeof(User));
// }
// int main()
// {
//     User u1, u2;
//     u1.getData();
//     u2.getData();
//     createAccount(u1);
//     checkAccount(u2);
// }

// #define key first
// #define val second
// class LRUCache
// {
//     int cp;
//     map<int, list<pair<int, int>>::iterator> mp;
//     list<pair<int, int>> lru;

// public:
//     LRUCache(int capacity) : cp(capacity) {}
//     void set(int key, int val)
//     {
//         if (mp.find(key) != mp.end())
//         {
//             mp[key]->key = key;
//             mp[key]->val = val;
//         }
//         else
//         {
//             lru.push_front({key, val});
//             mp[key] = lru.begin();
//             if (lru.size() > cp)
//             {
//                 mp.erase(lru.back().key);
//                 lru.pop_back();
//             }
//         }
//     }
//     int get(int key)
//     {
//         if (mp.find(key) != mp.end())
//         {
//             lru.push_front(*mp[key]);
//             lru.erase(mp[key]);
//             mp[key] = lru.begin();
//             return mp[key]->val;
//         }
//         else
//             return -1;
//     }
// };

// class Matrix
// {
//     public:
//     vector<vector<int>> a;

//     Matrix operator+(Matrix second)
//     {
//         for (int i = 0; i < a.size(); i++)
//         {
//             for (int j = 0; j < a[0].size(); j++)
//             {
//                 a[i][j] += second.a[i][j];
//             }
//         }
//         return *this;
//     }
// };

// void printKMax(int arr[], int n, int k){
// 	//Write your code here.
//      deque<pair<int, int>> dq;
//     for(int a=0; a<n; a++){
//         while(!dq.empty() && a - dq.front().second >= k){
//             dq.pop_front();
//         }
//         while(!dq.empty() && dq.back().first <= arr[a]){
//             dq.pop_back();
//         }
//         dq.push_back({arr[a], a});
//         if(a >= k - 1){
//             cout << dq.front().first << " ";
//         }
//     }
//     cout << endl;
// }

// class Main
// {
//     public:
//     string name = "Aaqib";

// };

// class AnotherClass
// {
//     private:
//     Main m1;
//     Main *ptr = &m1;
//     public:

//     void getData()
//     {
//         cout << "Enter Name: "; cin >> ptr->name;

//     }

//     void showData()
//     {
//         cout << ptr->name << endl;
//     }
// };

// int main()
// {
//     AnotherClass a1;
//     a1.getData();
//     a1.showData();
// }
// #include <stdio.h>
// #include <conio.h>

// void matrix(int i, int j, int m[2][2] );

// main()
// {
//     // clrscr();
//     int m[2][2];
//     int i, j;
//     int maximum = m[0][0];
//     printf("enter the elements of matrix\n");

//     for (i = 0; i <= 1; i++)
//     {
//         for (j = 0; j <= 1; j++)
//         {
//             scanf("%d", &m[i][j]);
//             maximum = (maximum < m[i][j]) ? m[i][j] : 0;
//         }
//     }
//     printf("\n");
//     printf("the maximum no. is %d", maximum);
//     printf("the given matrix is");
//     matrix(i, j, m);
//     getch();
// }

// void matrix(int i, int j, int m[2][2])
// {
//     for (i = 0; i <= 1; i++)
//     {
//         for (j = 0; j <= 1; j++)
//         {
//             printf("%d", m[i][j]);
//         }
//     }
//     // getch();
// }

// #include <iostream>
// #include <stdexcept>

// using namespace std;

// int largest_proper_divisor(int n) {
//     if (n == 0) {
//         throw invalid_argument("largest proper divisor is not defined for n=0");
//     }
//     if (n == 1) {
//         throw invalid_argument("largest proper divisor is not defined for n=1");
//     }
//     for (int i = n/2; i >= 1; --i) {
//         if (n % i == 0) {
//             return i;
//         }
//     }
//     return -1; // will never happen
// }

// void process_input(int n) {
//     try
//     {
//         int d = largest_proper_divisor(n);
//         cout << "result=" << d << endl;
//     }
//     catch (invalid_argument e)
//     {
//         cout << e.what() << endl;
//     }
//     // cout << "result=" << d << endl;
//     cout << "returning control flow to caller" << endl;
// }
// #include <iostream>

// using namespace std;

// class Person {
// public:
//     Person(const string& first_name, const string& last_name) : first_name_(first_name), last_name_(last_name) {}
//     const string& get_first_name() const {
//       return first_name_;
//     }
//     const string& get_last_name() const {
//       return last_name_;
//     }
// private:
//     string first_name_;
//     string last_name_;
// };

// ostream& operator<<(ostream& os, const Person& p) {
//     os << "first_name=" << p.get_first_name() << ",last_name=" << p.get_last_name();
//     return os;
// }

// int main() {
//     string first_name, last_name, event;
//     cin >> first_name >> last_name >> event;
//     auto p = Person(first_name, last_name);
//     cout << p << " " << event << endl;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;

// class Message {
//     private:
//     string text;
//     static int id;
//     int currentId;

// public:
//     Message() {currentId = ++id;}
//     Message(string text) {this->text = text; currentId = ++id;}
//     const string& get_text() {
//         return text;
//     }
//     bool operator <(const Message& m)
//     {
//         if (currentId < m.currentId)
//             return true;
//         else
//             return false;
//     }
// };
// int Message::id = 0;

// class MessageFactory {
// public:
//     MessageFactory() {}
//     Message create_message(const string& text) {
//         return Message(text);
//     }
// };

// class Recipient {
// public:
//     Recipient() {}
//     void receive(const Message& msg) {
//         messages_.push_back(msg);
//     }
//     void print_messages() {
//         fix_order();
//         for (auto& msg : messages_) {
//             cout << msg.get_text() << endl;
//         }
//         messages_.clear();
//     }
// private:
//     void fix_order() {
//         sort(messages_.begin(), messages_.end());
//     }
//     vector<Message> messages_;
// };

// class Network {
// public:
//     static void send_messages(vector<Message> messages, Recipient& recipient) {
//     // simulates the unpredictable network, where sent messages might arrive in unspecified order
//         random_shuffle(messages.begin(), messages.end());
//         for (auto msg : messages) {
//             recipient.receive(msg);
//         }
//     }
// };

// int main() {
//     MessageFactory message_factory;
//     Recipient recipient;
//     vector<Message> messages;
//     string text;
//     while (getline(cin, text)) {
//         messages.push_back(message_factory.create_message(text));
//     }
//     Network::send_messages(messages, recipient);
//     recipient.print_messages();
// }

// struct record
// {
//     char name[20];
//     int age;
//     int numberOfMatches;
//     int averageRuns;
// };

// int main()
// {
//     record myArray[2];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (j == 0)
//             {
//                 printf("Enter Name of Player: ");
//                 scanf("%s", myArray[i].name);
//             }
//             else if (j == 1)
//             {
//                 printf("Enter Age of player: ");
//                 scanf("%d", &myArray[i].age);
//             }
//             else if (j == 2)
//             {
//                 printf("Enter Number of Matches: ");
//                 scanf("%d", &myArray[i].numberOfMatches);
//             }
//             else if (j == 3)
//             {
//                 printf("Enter Average Runs: ");
//                 scanf("%d", &myArray[i].averageRuns);
//             }
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (j == 0)
//             {
//                 printf("Name of Player: ");
//                 printf("%s", myArray[i].name);
//                 printf("\n");
//             }
//             else if (j == 1)
//             {
//                 printf("Age of player: ");
//                 printf("%d ",myArray[i].age);
//                 printf("\n");
//             }
//             else if (j == 2)
//             {
//                 printf("Number of Matches: ");
//                 printf("%d ",myArray[i].numberOfMatches);
//                 printf("\n");
//             }
//             else if (j == 3)
//             {
//                 printf("Average Runs: ");
//                 printf("%d", myArray[i].averageRuns);
//                 printf("\n");
//             }
//         }
//         printf("\n");
//     }
// }

// class Person
// {
//     private:
//     string fname, lname;

//     public:
//     Person(string fname,string lname)
//     {
//         this->lname = fname;
//         this->fname = lname;
//     }
// };
// #define MAX_NAME_LENGTH 50
// #include <iostream>
// #include <string>
// using namespace std;

// class Invoice
// {
// private:
//     string name;
//     // static int limit;

// public:
//     Invoice()
//     {
//     }

//     void getInfo()
//     {
//         // cin.clear();
//         cout << "ENTER NAME:";
//         // cin.ignore();
//         // cin.clear();
//         cin.ignore(1,'\n');
//         getline(cin, name);
//     }

//     void uppername()
//     {
//         string uppername;
//         uppername = name;
//         string name1 = "";
//         int len = uppername.length();
//         for (int i = 0; i < len; ++i)
//         {
//             uppername[i] = toupper(uppername[i]);
//             name1 += uppername[i];
//         }
//         cout << uppername;
//     }

//     void showInfo()
//     {
//         cout << "\t\tName :" << name << endl;
//     }
// };

// class Customer
// {
// private:
//     Invoice icust;
//     string address;
//     string phoneNum;
//     string emailId;
//     string customerId;

// public:
//     void getInfo()
//     {
//         icust.getInfo();
//         cout << "\t\t--------HELLO ";
//         icust.uppername();
//         cout << " WELCOME TO VEHICLE FOR HIRE---------" << endl;
//         cout << "\t\t\t\t--------ENTER YOUR DATA---------" << endl;
//         cout << "ENTER CUSTOMER ID: ";
//         cin >> customerId;
//         cout << "ENTER ADDRESS: ";
//         cin.ignore();
//         getline(cin, address);
//         cout << "ENTER PHONE NUMBER: ";
//         // cin.ignore();
//         getline(cin, phoneNum);
//         cout << "ENTER EMAIL ID: ";
//         // cin.ignore();
//         cin >> emailId;
//     }
//     void showInfo()
//     {
//         icust.showInfo();
//         cout << "\t\tCustomer ID :" << customerId << endl;
//         cout << "\t\tAddress :" << address << endl;
//         cout << "\t\tPhone Number :" << phoneNum << endl;
//         cout << "\t\tEmail ID :" << emailId << endl;
//     }
// };

// class Car
// {
// protected:
//     Invoice icar;
//     string carModel;
//     int days;

// public:
//     virtual int calcRent() = 0;
//     void getInfo()
//     {
//         icar.getInfo();
//         cout << "\t\t\t--------NOW ENTER DATA FOR ";
//         icar.uppername();
//         cout << " YOU RENTED---------" << endl;
//         cout << "ENTER MODEL OF ";
//         icar.uppername();
//         cout << ": ";
//         // cin.ignore();
//         getline(cin, carModel);
//         cout << "ENTER NO OF DAYS YOU RENTED ";
//         icar.uppername();
//         cout << ": ";
//         cin >> days;
//     }
//     void showInfo()
//     {

//         cout << "-------------------------------------------------------------------------------------" << endl;
//         cout << "Car Name:\t\tCar Model :\t\tRented Days :\t\tTotal Rent : \n";
//         icar.uppername();
//         cout << "\t\t\t" << carModel << "\t\t\t" << days << " days"
//              << "\t\t\t" << calcRent() << endl;
//         cout << "-------------------------------------------------------------------------------------" << endl;
//     }
// };

// class Payment : public Car
// {
// private:
//     int cashGiven;
//     int cashRepaid;
//     int rent;

// public:
//     int calcRent()
//     {
//         rent = (days * 5000);
//         return rent;
//     }
//     //TO GET INFO REGARDING PAYMENT
//     void getInfo()
//     {
//         Car::getInfo();
//         cout << "YOUR TOTAL RENT IS: " << calcRent() << endl;
//         cout << "ENTER CASH YOU HAVE GIVEN: ";
//         cin >> cashGiven;
//     }
//     //TO SHOW INFO OF PAYMENT
//     void showInfo()
//     {
//         Car::showInfo();
//         cout << "\n\t\t**PAYMENT SUMMARY**\n"
//              << endl;
//         cout << "\t\tTotal cash given: " << cashGiven << "\n"
//              << endl;
//         cout << "\t\tTotal cash repaid: " << cashGiven - calcRent() << "\n"
//              << endl;
//         cout << "\t\t    --CUSTOMER COPY--\n\t\t(NO SIGNATURES REQUIRED)\n"
//              << endl;
//     }
// };

// int main()
// {
//     // char choice;
//     // //int l =1;
//     // int l=Invoice::getlimit();
//     // /*if (l <= 4)
//     // {
//     //     do
//     //     {
//     //         Customer c; //object of CUSTOMER class
//     //         Payment p;//object of PAYMENT class
//     //         //c.getInfo();
//     //         p.getInfo();
//     //         cout<<"\n\n\t-----------INVOICE--------------"<<endl;
//     //         //c.showInfo();
//     //         p.showInfo();
//     //         cout << "\n you want to continue(y/n) ";//<< Invoice::getlimit()<< endl;
//     //         cin >> choice;
//     //         l++;
//     //         cout<<l;
//     //         //l = Invoice::getlimit();
//     //     }
//     //     while (choice != 'n');

//     // }
//     // else if (l==5)
//     // {
//     //     cout<<"limit reached";
//     // }*/
//     // //Invoice *ptr;
//     //         Customer * ptr1[80]; //object of CUSTOMER class
//     //         Payment * ptr2[80];//object of PAYMENT class
//     // if (l <= 4)
//     // {
//     //     do
//     //     {

//     //         ptr1[l] -> getInfo();
//     //         ptr2[l] -> getInfo();
//     //         cout<<"\n\n\t-----------INVOICE--------------"<<endl;
//     //         ptr1[l] -> showInfo();
//     //         ptr2[l] -> showInfo();
//     //         cout << "\n you want to continue(y/n) ";//<< Invoice::getlimit()<< endl;
//     //         cin >> choice;
//     //         l = Invoice::getlimit();
//     //     }
//     //     while (choice != 'n');

//     // }
//     // else if (l==5)
//     // {
//     //     cout<<"limit reached";
//     //     //break;
//     // }

//     // Customer cu;
//     // cu.getInfo();
//     // cu.showInfo();
//     int count = 0;
//     Customer ptr[80];
//     Payment ptr2[80];
//     // char n;
//     // do
//     // {   cout << "TAKING CUSTOMER INFO" << endl;
//     //     ptr[count].showInfo();
//     //     cout << "TAKING CAR INFO" << endl;
//     //     ptr2[count].showInfo();
//     //     cout << "Do you want to continue? y/n";
//     //     cin >> n;
//     //     count += 1;
//     // } while (tolower(n) != 'n');

//     // for (int i = 0; i < count; i ++)
//     // {
//     //     cout << "CUSTOMER DETAILS" << endl;
//     //     ptr[i].showInfo();
//     //     cout << "CAR DETAILS" << endl;
//     //     ptr2[i].showInfo();
//     // }
//     char n;
//     while (true)
//     {
//         cout << "Do you want to ADD? y/n";
//         cin >> n;
//         if (tolower(n) == 'n' || n == 80)
//         {
//             break;
//         }
//         else
//         {
//             ptr[count].getInfo();
//             ptr2[count].getInfo();
//             ptr[count].showInfo();
//             ptr2[count].showInfo();
//             count += 1;
//         }
//     }
// }

// int main()
// {
//     string x[5][3] = { {"corona","40","1000"},{"fever","2","500"},{"emergency ward","3","2000"},{"heart disease","7","3000"} ,{"eye checkup","1","5000"} };
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << x[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// class Customer
// {
// private:
//     char full_name[30];
//     char email_address[30];
//     int mobile_number;
//     char home_address[30];
//     // Order o1;

// public:
//     void enterDetails();
//     void displayDetails();
// };

// void Customer ::  enterDetails()
// {
//     cout << "\nEnter your full name: ";
//     cin.getline(full_name,30);
//     cin.ignore();
//     cout << "Enter your email address: ";
//     cin.getline(email_address,30);
//     cin.ignore();
//     //cout << "Enter your mobile number: ";
//     //cin.getline(mobile_number,30);
//     //cin.ignore();
//     cout << "Enter your home address: ";
//     cin.getline(home_address,30);
//     cin.ignore();
//     cout << "Enter your mobile number: ";
//     cin >> mobile_number;
//     cin.ignore();
//     cout << endl;
//     // o1.setOrder();
// }

// int main()
// {
//     Customer c1;
//     c1.enterDetails();
// }

// #include <iostream>
// #include <array>
// using namespace std;

// int validateFunction()
// {
//     int a;
//     cin >> a;
//     while (1)
//     {
//         if (cin.fail())
//         {
//             cin.clear();
//             cin.ignore(numeric_limits<streamsize>::max(),'\n');
//             cout << "\nPlease Enter Valid Number!!" << endl;
//             cin >> a;
//         }
//         if (!cin.fail())
//             break;
//     }
//     return a;
// }
// class Menu
// {
// public:
//     void displayMenu()
//     {
//         cout << "________________________________" << endl;
//         cout << "                                        Menu                    " << endl;
//         cout << "________________________________" << endl;
//         cout << "\nWhat would you like to order?\n " << endl;
//         cout << "1. Burgers\n2. Pizzas\n3. Rolls\n4. Desserts\n"
//              << endl;
//         //string Burgers[] = {"Zinger","Beef","Chicken"};
//         //string Pizzas[] = {"Chicken Fajita","Chicken Tikka","Afghani Chicken"};
//         //string Rolls[] = {"Chicken Roll","Beef Roll","Mayo Roll"};
//     }
// };

// class Staff
// {
// public:
//     virtual void confirmOrder() = 0;
// };

// class Receptionist : public Staff
// {
// public:
//     void confirmOrder();
// };

// void Receptionist ::confirmOrder()
// {
//     cout << "\n                                 Your order has been received! ";
//     cout << "\n                           The order will be delivered in 45 minutes...";
//     cout << "\n                                   Thank You for ordering... " << endl;
// }

// class Payment
// {
// public:
//     int method;
//     char cardID[30];

// public:
//     void paymentMethod();
//     void displayPaymentMethod();
// };

// void Payment ::paymentMethod()
// {
//     cout << "1.Cash\n2.Card\n\nEnter the payment method(1/2): ";
//     cin >> method;
//     while (bool pay = true)
//         if (method == 1)
//             break;
//         else if (method == 2)
//         {
//             cout << "Enter card id: ";
//             cin >> cardID;
//             break;
//         }
//         else
//         {
//             cout << "1.Cash\n2.Card\n\nPlease enter a valid payment method(1/2): ";
//             cin >> method;
//             continue;
//         }
// }
// void Payment ::displayPaymentMethod()
// {
//     if (method == 1)
//     {
//         cout << "Payment method: cash " << endl;
//     }

//     else if (method == 2)
//     {
//         cout << "Payment method: card " << endl;
//         cout << "CardID: " << cardID << endl;
//     }
//     cout << "______________________________________";
//     cout << endl;
// }

// class Order
// {
// private:
//     int choice, burgerchoice, quantity, price, sizeofpizza, flavour, choiceofRolls;
//     string yourOrder;
//     Menu m1;
//     Payment p1;

// public:
//     void setOrder();
//     void displayTotalPrice();
// };

// void Order ::setOrder()
// {
// beginning:
//     m1.displayMenu();
//     string Burgers[] = {"Zinger Burger Rs.200", "Chicken Burger Rs.150", "Beef Burger Rs.160"};
//     string Pizzas[] = {"Chicken Fajita", "Chicken Tikka", "Afghani Chicken"};
//     string Rolls[] = {"Chicken Roll", "Beef Roll", "Mayo Roll"};

//     cout << "Enter your choice: ";
//     choice = validateFunction();
//     cout << endl;
//     if (choice == 1)
//     {
//         for (int i = 1; i < 4; i++)
//             cout << i << ". " << Burgers[i - 1] << endl;
//         cout << "\nPlease enter your choice for burgers: ";
//         cin >> burgerchoice;

//         switch (burgerchoice)
//         {
//         case 1:
//             yourOrder = "Zinger Burger ";
//             break;

//         case 2:
//             yourOrder = "Chicken Burger ";
//             break;

//         case 3:
//             yourOrder = "Beef Burger ";
//             break;

//         default:
//             cout << "Invalid choice!\n ";
//             goto beginning;
//         }

//         cout << "Please enter the quantity: ";
//         cin >> quantity;
//         cout << endl;

//         if (burgerchoice == 1)
//             price = quantity * 200;
//         else if (burgerchoice == 2)
//             price = quantity * 150;
//         else if (burgerchoice == 3)
//             price = quantity * 160;
//     }
//     else if (choice == 2)
//     {
//         cout << "1. Large Rs.800\n2. Regular Rs.500\n3. Small Rs.250 " << endl;
//         cout << "\nEnter the size: ";
//         cin >> sizeofpizza;

//         for (int i = 1; i < 4; i++)
//             cout << i << ". " << Pizzas[i - 1] << endl;
//         cout << "Please enter the flavour: ";
//         cin >> flavour;

//         switch (flavour)
//         {
//         case 1:
//             yourOrder = "Chicken Fajita";
//             break;

//         case 2:
//             yourOrder = "Chicken Tikka";
//             break;

//         case 3:
//             yourOrder = "Afghani Chicken";
//             break;

//         default:
//             cout << "Invalid choice!\n ";
//             goto beginning;
//         }

//         cout << "Please enter the quantity: ";
//         quantity = validateFunction();

//         if (sizeofpizza == 1)
//             price = quantity * 800;
//         else if (sizeofpizza == 2)
//             price = quantity * 500;
//         else if (sizeofpizza == 3)
//             price = quantity * 250;
//     }
//     else if (choice == 3)
//     {
//         for (int i = 1; i < 4; i++)
//             cout << i << ". " << Rolls[i - 1] << endl;
//         cout << "\nPlease enter your choice: ";
//         cin >> choiceofRolls;

//         switch (choiceofRolls)
//         {
//         case 1:
//             yourOrder = "Chicken Roll";
//             break;

//         case 2:
//             yourOrder = "Beef Roll";
//             break;

//         case 3:
//             yourOrder = "Mayo Roll";
//             break;

//         default:
//             cout << "Invalid choice!\n ";
//             goto beginning;
//         }

//         cout << "Please enter the quantity: ";
//         cin >> quantity;
//         cout << endl;

//         if (choiceofRolls == 1)
//             price = quantity * 100;
//         else if (choiceofRolls == 2)
//             price = quantity * 80;
//         else if (choiceofRolls == 3)
//             price = quantity * 60;
//     }
//     else if (choice == 4)
//     {
//         cout << "1.Ice creams\n2.Shakes " << endl;
//         cout << "\nEnter the choice: ";
//         cin >> choice;
//         if (choice == 1)
//         {
//             cout << "\n1.Mango\n2.Strawberry\n3.Chocolate\n4.Vanilla " << endl;
//             cout << "\nEnter the flavour: ";
//             cin >> flavour;
//             switch (flavour)
//             {
//             case 1:
//                 yourOrder = "Mango Ice cream";
//                 break;

//             case 2:
//                 yourOrder = "Strawberry Ice cream";
//                 break;

//             case 3:
//                 yourOrder = "Chocolate Ice cream";
//                 break;

//             case 4:
//                 yourOrder = "Vanilla Ice cream";
//                 break;

//             default:
//                 cout << "\nInvalid choice!\n"
//                      << endl;
//                 goto beginning;
//             }
//             cout << "\nPlease enter the quantity: ";
//             cin >> quantity;
//             cout << endl;

//             price = quantity * 100;
//         }
//         else if (choice == 2)
//         {
//             cout << "\n1.Mango Shake\n2.Banana Shake\n3.Chocolate Shake\n4.Oreo Shake" << endl;
//             cout << "\nEnter the flavour: ";
//             cin >> flavour;
//             switch (flavour)
//             {
//             case 1:
//                 yourOrder = "Mango Shake";
//                 break;

//             case 2:
//                 yourOrder = "Banana Shake";
//                 break;

//             case 3:
//                 yourOrder = "Chocolate Shake";
//                 break;

//             case 4:
//                 yourOrder = "Oreo Shake";
//                 break;

//             default:
//                 cout << "\nInvalid choice!\n"
//                      << endl;
//                 goto beginning;
//             }
//             cout << "\nPlease enter the quantity: ";
//             cin >> quantity;
//             cout << endl;

//             price = quantity * 120;
//         }
//         else
//         {
//             cout << "\nInvalid choice!\n"
//                  << endl;
//             goto beginning;
//         }
//     }
//     else
//     {
//         cout << "Invalid choice!\n ";
//         goto beginning;
//     }

//     p1.paymentMethod();
// }

// void Order ::displayTotalPrice()
// {
//     cout << "Your order: " << quantity << " " << yourOrder << endl;
//     cout << "Total amount: " << price << endl;

//     p1.displayPaymentMethod();
// }

// class Customer
// {
// private:
//     // char name[30];
//     // char email_address[30];
//     // char mobile_number[30];
//     // char home_address[30];
//     string name;
//     string email_address;
//     string mobile_number;
//     string home_address;
//     Order o1;

// public:
//     void enterDetails();
//     void displayDetails();
// };

// void Customer ::enterDetails()
// {
//     cout << "\nEnter your name: ";
//     cin.clear();
//     cin.ignore(1, '\n');
//     getline(cin, name);
//     cout << "Enter your email address: ";
//     cin >> email_address;
//     cout << "Enter your mobile number: ";
//     cin >> mobile_number;
//     cout << "Enter your home address: ";
//     cin.ignore();
//     getline(cin, home_address);
//     cout << endl;

//     o1.setOrder();
// }

// void Customer ::displayDetails()
// {
//     cout << "______________________________________" << endl;
//     cout << "                                         Order Details                                  " << endl;
//     cout << "______________________________________" << endl;
//     cout << "\nFull name: " << name << endl;
//     cout << "Email address: " << email_address << endl;
//     cout << "Mobile number: " << mobile_number << endl;
//     cout << "Home address: " << home_address << endl;
//     o1.displayTotalPrice();
// }

// int main()
// {

//     Customer *c1[100];
//     Staff *s1[100];
//     int c = 0;
//     int s = 0;
//     char check, ch;

//     cout << "_________________________________" << endl;
//     cout << "                            Welcome to Online Food Ordering" << endl;
//     cout << "_________________________________" << endl;
//     cout << "\nDo you want to order something(y/n)? ";
//     cin >> check;

//     do
//     {
//         //cout << "\nDo you want to order something(y/n)? ";
//         //cin >> check;

//         if (check == 'y' || check == 'Y')
//         {
//             c1[c] = new Customer;
//             c1[c]->enterDetails();
//             c1[c]->displayDetails();
//             c++;

//             s1[s] = new Receptionist;
//             s1[s]->confirmOrder();
//             s++;
//         }
//         else if (check == 'n' || check == 'N')
//             break;
//         else
//         {
//             cout << "Please enter a valid choice! ";
//             cout << "\nDo you want to order something(y/n)? ";
//             cin >> check;
//             continue;
//         }

//         cout << "_______________________________" << endl;
//         cout << "                        Welcome to Online Food Ordering Page " << endl;
//         cout << "_______________________________" << endl;
//         cout << "\nDo you want to order something(y/n)? ";
//         cin >> ch;

//     } while (ch == 'y' || ch == 'Y');

//     return 0;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
// }

// int main()
// {
//     string name = "Aaqib";
//     int factor = 1;
//     for (int i = 0; i <= name.size(); i++)
//     {
//         if (i + factor <= name.size())
//         {
//             string subString = name.substr(i, factor);
//             cout << subString << endl;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     string genes_temp_temp;
//     getline(cin, genes_temp_temp);

//     vector<string> genes_temp = split_string(genes_temp_temp);

//     vector<string> genes(n);

//     for (int i = 0; i < n; i++) {
//         string genes_item = genes_temp[i];

//         genes[i] = genes_item;
//     }

//     string health_temp_temp;
//     getline(cin, health_temp_temp);

//     vector<string> health_temp = split_string(health_temp_temp);

//     vector<int> health(n);

//     for (int i = 0; i < n; i++) {
//         int health_item = stoi(health_temp[i]);

//         health[i] = health_item;
//     }
//     vector<int> ans;
//     int s;
//     cin >> s;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     for (int s_itr = 0; s_itr < s; s_itr++) {
//         string firstLastd_temp;
//         getline(cin, firstLastd_temp);

//         vector<string> firstLastd = split_string(firstLastd_temp);

//         int first = stoi(firstLastd[0]);

//         int last = stoi(firstLastd[1]);

//         string d = firstLastd[2];
//         int total = 0;
//         for (int i = first; i <= last; i ++)
//         {

//             string x = genes[i];
//             int lengthOfX = x.size();
//             if (d.find(x) != string::npos)
//             {

//                 for (int j = 0; j <= d.size(); j++)
//                 {
//                     if (j + lengthOfX <= d.size())
//                     {
//                         string subString = d.substr(j, lengthOfX);
//                         if (x == subString)
//                         {
//                             total = total + health[i];

//                         }
//                     }
//                 }

//             }

//         }
//         ans.push_back(total);
//     }
//     cout << *min_element(ans.begin(), ans.end()) << " " << *max_element(ans.begin(), ans.end());
//     return 0;
// }
// Complete the insertionSort function below.
// int insertionSort(vector<int> arr) {
//     int i, key, j, count;
//     for (i = 1; i < arr.size(); i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//             count += 1;
//         }
//         arr[j + 1] = key;
//     }
//     return count;
// }

// #include <iostream>
// using namespace std;

// int temp[100000];

// long int join(int s[], int left, int mid, int right)
// {
//     long int shift=0;
//     int i=left, j=mid, k=left;
//     while(i<mid && j<=right)
//     {
//         if(s[i] <= s[j]){
//             temp[k]=s[i];
//             k++, i++;
//         }
//         else{
//             temp[k]=s[j];
//             k++, j++;
//             shift += mid-i;
//         }
//     }
//     while(i<mid){
//         temp[k] = s[i];
//         k++, i++;
//     }

//     while(j<=right){
//         temp[k] = s[j];
//         k++, j++;
//     }

//     while(left<=right){
//         s[left] = temp[left];
//         left++;
//     }
//     return shift;
// }

// long int mergeSort(int s[], int left, int right)
// {
//     long int shift = 0;
//     if(left < right)
//     {
//         int mid = left + (right-left)/2;
//         shift += mergeSort(s, left, mid);
//         shift += mergeSort(s, mid+1, right);
//         shift += join(s, left, mid+1, right);
//     }
//     return shift;
// }

// int main()
// {
//     int n, t;
//     cin >> t;
//     while(t--)
//     {
//         cin >> n;
//         int s[n];
//         for(int i=0; i<n; i++)
//             cin >> s[i];

//         long int shift = mergeSort(s, 0, n-1);

//         cout << shift << endl;
//     }
//     return 0;
// }

// bool checkPalindrome(string ss);
// bool checkPalindrome(string ss)
// {
//     bool isPalindrome = true;
//     int stringLength = ss.length();
//     for (int i = 0; i < stringLength; i++)
//     {
//         if (ss[i] != ss[stringLength - i - 1])
//         {
//             isPalindrome = false;
//             break;
//         }
//     }

//     return isPalindrome;
// }

// // int main()
// // {
// //     cout << checkPalindrome("baaa");
// // }
// int palindromeIndex(string s);
// int palindromeIndex(string s) {
//     int index = -1;
//     int sLength = s.length();
//     for (int i = 0; i < sLength; i ++)
//     {
//         if (s[i] != s[sLength - i - 1])
//         {
//             string y = s.substr(i, (sLength - i));
//             string y1 = y.substr(0, y.length() - 1);
//             string y2 = y.substr(1);
//             if (checkPalindrome(y1))
//             {
//                 return sLength - i - 1;
//             }
//             else
//             {
//                 return i;
//             }
//         }
//     }
//     return 0;
// }

// int main()
// {
//     cout << palindromeIndex("hgygsvlfcwnswtuhmyaljkqlqjjqlqkjlaymhutwsnwcwflvsgygh") << endl;
// }

// int palindromeIndex(string s) {
//     int lengthOfString = s.length();
//     int i = 0;
//     int j = lengthOfString - 1;
//     while (i < j)
//     {
//         if (s[i] != s[j])
//             break;
//         i += 1;
//         j -= 1;
//     }
//     if (i > j)
//         return -1;
//     int a = i + 1;
//     int b = j;
//     while (a < j && b > i + 1)
//     {
//         if (s[a] != s[b])
//         {
//             return j;
//         }
//         a += 1;
//         b -= 1;
//         return i;
//     }
//     return -1;
// }

// int main()
// {
//     cout << palindromeIndex("hgygsvlfcwnswtuhmyaljkqlqjjqlqkjlaymhutwsnwcwflvsgygh") << endl;
// }
// void printDeque(deque<int> a);
// void printDeque(deque<int> a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int activityNotifications(vector<int> expenditure, int d);
// int activityNotifications(vector<int> expenditure, int d)
// {
//     deque<int> subVector;
//     int i = 0, j = d;
//     int alertCount = 0;
//     for (int x = 0; x < d; x++)
//     {
//         subVector.push_back(expenditure[x]);
//     }
//     while (d < expenditure.size())
//     {
//         int moneySpent = expenditure[d];
//         // cout << "Money: " << moneySpent << endl;
//         vector<int> x;
//         double median = 0;
//         for (auto &element: subVector)
//         {
//             x.push_back(element);
//         }
//         sort(x.begin(), x.end());
//         // for (auto &element: x)
//         // {
//         //     cout << element << " ";
//         // }
//         // cout << endl;
//         int y;
//         if (x.size() % 2 == 0)
//         {
//             y = (x.size() / 2) - 1;
//             median = (double)(x[y] + x[++y])/2;
//         }
//         else
//         {
//             y = x.size() / 2;
//             median = (double)x[y];
//         }
//         median *= 2;
//         if (moneySpent >= median)
//         {
//             alertCount += 1;
//         }
//         if (d++ < expenditure.size() - 1)
//         {
//             subVector.pop_front();
//             subVector.push_back(expenditure[d - 1]);
//             // cout << d << endl;
//         }

//     }
//     return alertCount;
// }

// int main()
// {
//     cout << activityNotifications({2, 3, 4, 2, 3, 6, 8, 4, 5}, 5) << endl;
// }
// int getTwiceMedian( vector<int> &A, vector<int> &count,int d)
// {
//     vector<int> countfreq(count);

//     for(int i=1; i< countfreq.size(); i++)// O(1);
//     {
//         countfreq[i] += countfreq[i-1];
//     }

//     int median;
//     int a = 0;
//     int b = 0;

//     //d is even -> median = a+b
//     if(d%2==0){
//         int first = d/2;
//         int second = first+1;
//         int i = 0;
//         for(;i<201;i++){
//             if(first<=countfreq[i]){
//                 a = i;
//                 break;
//             }
//         }
//         for(;i<201;i++){
//             if(second<=countfreq[i]){
//                 b = i;
//                 break;
//             }
//         }
//     }
//     else    //d is odd -> median = a + 0 = 2*(middle elem)
//     {
//         int first = d/2 + 1;
//         for(int i=0;i<201;i++){
//             if(first<=countfreq[i]){
//                 a = 2*i;
//                 break;
//             }
//         }
//     }
//     median = a + b;
//     return median;
// }
// int activityNotifications(vector<int> A, int d) {
//     int alerts = 0;
//     vector<int> count(201, 0); //stores count of last 'd' numbers
//     int n = A.size();

//     for(int i =0; i<d; i++)
//     {
//         count[A[i]]++;
//     }
//     for(int i=d; i< n; i++)
//     {
//         int median = getTwiceMedian(A, count, d);
//         if(A[i]>= median) alerts++;

//         //update count array
//         count[A[i]]++;
//         count[A[i-d]]--;
//     }
//     return alerts;
// }

// int anagram(string s) {
//     int count = 0;
//     if (s.length() % 2 != 0)
//     {
//         return -1;
//     }
//     else
//     {
//         string s1 = s.substr(0, s.length()/2);
//         string s2 = s.substr((s.length()/2), s.length());
//         for (char x: s2)
//         {
//             if (s1.find(x) != string::npos)
//             {
//                 s1.erase(s1.begin() + s1.find(x));
//             }
//         }
//         return s1.length();
//     }

//     // return s1.length();
// }

// int main()
// {
//     cout << anagram("mnop");
// }

// int makingAnagrams(string s1, string s2) {
//     int count = 0;
//     string a = s1;
//     string b = s2;
//     for (char x: s2)
//     {
//         if (a.find(x) != string::npos)
//         {
//             a.erase(a.begin() + a.find(x));
//         }

//     }
//     count += a.length();
//     for (char x: s1)
//     {
//         if (b.find(x) != string::npos)
//         {
//             b.erase(b.begin() + b.find(x));
//         }
//     }
//     count += b.length();
//     return count;
// }

// int main()
// {
//     int result = makingAnagrams("cde", "abc");
// }

// int lilysHomework(vector<int> arr);
// int lilysHomework(vector<int> arr)
// {
//     vector<int> accendingArray;
//     vector<int> decendingArray;
//     vector<int> arr2;
//     arr2 = arr;
//     accendingArray = arr;
//     decendingArray = arr2;
//     int accendingCount = 0;
//     int decendingCount = 0;
//     sort(accendingArray.begin(), accendingArray.end());
//     sort(decendingArray.begin(), decendingArray.end(), greater<int>());

//     map<int, int> accendingMap;

//     map<int, int> decendingMap;

//     for (int i = 0; i < accendingArray.size(); i++)
//     {
//         accendingMap[arr[i]] = i;
//     }
//     for (int i = 0; i < decendingArray.size(); i++)
//     {
//         decendingMap[arr[i]] = i;
//     }

//     for (int i = 0; i < accendingArray.size(); i++)
//     {
//         if (accendingArray[i] != arr[i])
//         {
//             auto it = find(arr.begin(), arr.end(), accendingArray[i]);
//             int index = distance(arr.begin(), it);
//             swap(accendingMap[arr[i]], accendingMap[arr[index]]);
//             swap(arr[i], arr[index]);
//             accendingCount += 1;
//         }
//     }

//     for (int i = 0; i < decendingArray.size(); i++)
//     {
//         if (decendingArray[i] != arr2[i])
//         {
//             // cout << decendingArray[i] << " " << arr2[i] << endl;
//             auto it = find(arr2.begin(), arr2.end(), decendingArray[i]);
//             int index = distance(arr2.begin(), it);
//             swap(decendingMap[arr2[i]], decendingMap[arr2[index]]);
//             swap(arr2[i], arr2[index]);
//             decendingCount += 1;
//         }
//     }
//     return min(accendingCount, decendingCount);
// }

// int main()
// {
//     lilysHomework({2, 5, 3, 1});
// }

// string gameOfThrones(string s)
// {
//     vector<int> f(26, 0);
//     for (int i = 0; i < s.size(); i++)
//     {
//         f[s[i] - 'a']++;
//     }
//     int count1 = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (f[i] % 2 != 0 && count1 == 1)
//             return "NO";
//         if (f[i] % 2 != 0)
//             count1++;
//     }
//     return "YES";
// }

// int main()
// {
//     gameOfThrones("cdefghmnopqrstuvw");
// }

// class Publisher
// {
// protected:
//     string titleOfPublication;
//     float priceOfPublication;

// public:
//     Publisher()
//     {
//         titleOfPublication = "";
//         priceOfPublication = 0;
//     }

//     void getData()
//     {
//         cout << "Enter title of publication: ";
//         cin.ignore(1, '\n');
//         getline(cin, titleOfPublication);
//         cout << "Enter the price for this Publication: ";
//         cin >> priceOfPublication;
//     }

//     void showData()
//     {
//         cout << endl;
//         cout << "The Title of Publication is: " << titleOfPublication << endl;
//         cout << "The price for this publication is: " << fixed << setprecision(2) << priceOfPublication << endl;
//     }
// };

// class Book : public Publisher
// {
// protected:
//     int pageCount;

// public:
//     Book()
//     {
//         pageCount = 0;
//     }

//     void getData()
//     {
//         Publisher::getData();
//         cout << "Enter Page count: ";
//         cin >> pageCount;
//     }

//     void showData()
//     {
//         Publisher::showData();
//         cout << "The Page count is: " << pageCount << endl;
//         cout << endl;
//     }
// };

// class Cassette : public Publisher
// {
// protected:
//     float tapeInMints;

// public:
//     Cassette() : tapeInMints(0) {}

//     void getData()
//     {
//         Publisher::getData();
//         cout << "Enter the Length of Tape in minutes: ";
//         cin >> tapeInMints;
//     }

//     void showData()
//     {
//         Publisher::showData();
//         cout << "The Length of Cassette is: " << fixed << setprecision(2) << tapeInMints << endl;
//     }
// };
// int main()
// {
//     vector<Book> bookData;
//     vector<Cassette> casData;
//     char x;
//     while (true)
//     {
//         cout << "Want to add Publisher Details y/n? ";
//         cin >> x;
//         if (x == 'n' || x == 'N')
//         {
//             break;
//         }
//         else
//         {
//             cout << "Do you want to Publish Book or Cassete b/c?";
//             cin >> x;
//             if (x == 'b' || x == 'B')
//             {
//                 Book b;
//                 b.getData();
//                 bookData.push_back(b);
//             }
//             else if (x == 'c' || x == 'C')
//             {
//                 Cassette c;
//                 c.getData();
//                 casData.push_back(c);
//             }
//         }
//     }
//     if (bookData.size() != 0)
//     {
//         cout << "\nDetails of Books!!\n";
//         for (int i = 0; i < bookData.size(); i++)
//         {
//             bookData[i].showData();
//         }
//     }
//     if (casData.size() != 0)
//     {
//         cout << "\nDetails of Cassettes!!\n";
//         for (int i = 0; i < casData.size(); i++)
//         {
//             casData[i].showData();
//         }
//     }
// }

// class Father
// {
// protected:
//     int age;

// public:
//     Father(int x)
//     {
//         age = x;
//     }
//     virtual void iAm()
//     {
//         cout << "I am Father, My age is: " << age << endl;
//     }
// };

// class Son : public Father
// {
// public:
//     Son(int y) : Father(y) {}

//     void iAm()
//     {
//         cout << "I am Son, My age is: " << age << endl;
//     }
// };

// class Daughter : public Father
// {
// public:
//     Daughter(int y) : Father(y) {}
//     void iAm()
//     {
//         cout << "I am Daughter, My age is: " << age << endl;
//     }
// };

// int main()
// {
//     Father f1(29);
//     Father *ptr;
//     ptr = &f1;
//     ptr->iAm();

//     Son s1(18);
//     ptr = &s1;
//     ptr->iAm();

//     Daughter d1(15);
//     ptr = &d1;
//     ptr->iAm();
// }

// class Shape
// {
// protected:
//     double length, width;

// public:
//     virtual void get_data()
//     {
//         cout << "Enter the Length: ";
//         cin >> this->length;
//         cout << "Enter the Width: ";
//         cin >> this->width;
//     }

//     virtual void show_data() = 0;
// };

// class Rectangle : public Shape
// {
// public:
//     void show_data()
//     {
//         cout << "The Area of Rectangle is: " << (this->width * this->length) << endl;
//     }
// };

// class Triangle : public Shape
// {
// public:
//     void show_data()
//     {
//         cout << "The Area of Triangle is: " << (this->width * this->length) / 2 << endl;
//     }
// };

// int main()
// {
//     Shape *arr[2];

//     Rectangle r1;
//     Triangle t1;

//     arr[0] = &r1;
//     arr[1] = &t1;

//     arr[0]->get_data();
//     arr[0]->show_data();

//     arr[1]->get_data();
//     arr[1]->show_data();
// }

// string highestValuePalindrome(string x, int n, int k);
// string highestValuePalindrome(string x, int n, int k)
// {
//     string s = x;
//     char maxElement;
//     for (char x: s)
//     {
//         if (x > maxElement)
//             maxElement = x;
//     }
//     // cout << s << endl;
//     for (int i = 0; i < n/2; i ++)
//     {
//         if (k == 0)
//             break;
//         else
//         {
//             if (k == 0)
//                 break;

//             if (s[i] != s[n - i - 1])
//             {
//                 if (s[i] != maxElement){
//                     s[i] = maxElement;
//                     k -= 1;
//                     // cout << k << endl;
//                 }
//                 if (k != 0){
//                     s[n - i - 1] = s[i];
//                     k -= 1;
//                 }
//                 // cout << s << endl;
//             }
//         }
//     }
//     string y = s;
//     reverse(y.begin(), y.end());
//     if (y == s)
//         return y;
//     return "-1";

// }

// int main()
// {
//     cout << highestValuePalindrome("092282", 6, 3) << endl;
// }

// class Color {
//     protected:
//         string colorname;
//     public:
//         virtual void set_color_name()
//         {
//         }
//         Color() {
//             set_color_name();
//         }
//         virtual string show_color()
//         {
//             return colorname;
//         }
// };

// class Red : public Color {
//     public:

//         void set_color_name() {
//             colorname = "Red";
//         }
//         Red()
//         {
//             set_color_name();
//         }
//         string show_color() {
//             return colorname;
//         }
// };

// class Blue : public Color {
//     public:
//         void set_color_name() {
//             colorname = "Blue";
//         }
//         Blue()
//         {
//             set_color_name();
//         }
//         string show_color() {
//             return colorname;
//         }
// };

// class Shape {
//     protected:
//         string color;
//         Color c1;
//         Color *ptr = &c1;
//     public:
//         Shape(Red *R1) {
//             color = R1->show_color();
//         }
//         Shape(Blue *B1) {
//             color = B1->show_color();
//         }
//         Shape()
//         {
//             cout << "Enter Custom Color: ";
//             cin >> color;
//         }
//         void showColor() {
//             cout << "Colored as " << color << endl;
//         }
// };

// class Circle : public Shape {
//     public:
//         Circle(Red *R1) : Shape(R1) {}
//         Circle(Blue *B1) : Shape(B1) {}
//         Circle(): Shape(){}
// };

// class Triangle : public Shape {
//     public:
//         Triangle(Red *R1) : Shape(R1) {}
//         Triangle(Blue *B1) : Shape(B1) {}
//         Triangle(): Shape(){}
// };

// int main() {
//     Shape *Shape1 = new Triangle(new Red);
//     Shape *Shape2 = new Circle(new Blue);
//     Shape *Shape3 = new Triangle();
//     Shape1->showColor();
//     Shape2->showColor();
//     Shape3->showColor();
// }
// class Color {
//     protected:
//         string colorname;
//     public:
//         virtual void set_color_name()
//         {
//         }
//         Color() {
//             set_color_name();
//         }
//         virtual string show_color()
//         {
//             return colorname;
//         }
// };

// class Red : public Color {
//     public:

//         void set_color_name() {
//             colorname = "Red";
//         }
//         Red()
//         {
//             set_color_name();
//         }
//         string show_color() {
//             return colorname;
//         }
// };

// class Blue : public Color {
//     public:
//         void set_color_name() {
//             colorname = "Blue";
//         }
//         Blue()
//         {
//             set_color_name();
//         }
//         string show_color() {
//             return colorname;
//         }
// };

// class CustomColor : public Color {
//     public:
//         void set_color_name(string c) {
//             colorname = c;
//         }
//         CustomColor(string c) {
//             set_color_name(c);
//         }
//         CustomColor() {
//             cout << "\nPlease enter the color you want to fill the shape with >> "; cin >> colorname;
//         }
//         string show_color() {
//             return colorname;
//         }
// };

// class Shape {
//     protected:
//         string color;
//         Color c1;
//         Color *ptr = &c1;
//     public:
//         Shape(Red *R1) {
//             color = R1->show_color();
//         }
//         Shape(Blue *B1) {
//             color = B1->show_color();
//         }
//         Shape(CustomColor *C1) {
//             color = C1->show_color();
//         }
//         void showColor() {
//             cout << "Colored as " << color << endl;
//         }
// };

// class Circle : public Shape {
//     public:
//         Circle(Red *R1) : Shape(R1) {}
//         Circle(Blue *B1) : Shape(B1) {}
//         Circle(CustomColor *C1): Shape(C1){}
// };

// class Triangle : public Shape {
//     public:
//         Triangle(Red *R1) : Shape(R1) {}
//         Triangle(Blue *B1) : Shape(B1) {}
//         Triangle(CustomColor *C1): Shape(C1){}
// };

// int main() {
//     Shape *Shape1 = new Triangle(new Red);
//     Shape *Shape2 = new Circle(new Blue);
//     Shape *Shape3 = new Triangle(new CustomColor);
//     Shape *Shape4 = new Circle(new CustomColor("Orange"));
//     Shape1->showColor();
//     Shape2->showColor();
//     Shape3->showColor();
//     Shape4->showColor();
// }

// #include <iostream>
// using namespace std;

// class Color {
//     protected:
//         string colorname;
//     public:
//         virtual void set_color_name()
//         {
//         }
//         Color() {
//             set_color_name();
//         }
//         virtual string show_color()
//         {
//             return colorname;
//         }
// };

// class RedColor : public Color {
//     public:

//         void set_color_name() {
//             colorname = "Red";
//         }
//         RedColor()
//         {
//             set_color_name();
//         }
//         string show_color() {
//             return colorname;
//         }
// };

// class GreenColor : public Color {
//     public:
//         void set_color_name() {
//             colorname = "Green";
//         }
//         GreenColor()
//         {
//             set_color_name();
//         }
//         string show_color() {
//             return colorname;
//         }
// };

// class CustomColor : public Color {
//     public:
//         void set_color_name(string c) {
//             colorname = c;
//         }
//         CustomColor(string c) {
//             set_color_name(c);
//         }
//         CustomColor() {
//             cout << "\nPlease enter the color you want to fill the shape with >> "; cin >> colorname;
//         }
//         string show_color() {
//             return colorname;
//         }
// };

// class Shape {
//     protected:
//         string color;
//         Color c1;
//         Color *ptr = &c1;
//     public:
//         Shape(RedColor *R1) {
//             color = R1->show_color();
//         }
//         Shape(GreenColor *B1) {
//             color = B1->show_color();
//         }
//         Shape(CustomColor *C1) {
//             color = C1->show_color();
//         }
//         void showColor() {
//             cout << "Colored as " << color << endl;
//         }
// };

// class Pentagon : public Shape {
//     public:
//         Pentagon(RedColor *R1) : Shape(R1) {}
//         Pentagon(GreenColor *B1) : Shape(B1) {}
//         Pentagon(CustomColor *C1): Shape(C1){}
// };

// class Triangle : public Shape {
//     public:
//         Triangle(RedColor *R1) : Shape(R1) {}
//         Triangle(GreenColor *B1) : Shape(B1) {}
//         Triangle(CustomColor *C1): Shape(C1){}
// };

// int main() {
//     Shape *Shape1 = new Triangle(new RedColor);
//     Shape *Shape2 = new Pentagon(new GreenColor);
//     Shape *Shape3 = new Triangle(new CustomColor);
//     Shape *Shape4 = new Pentagon(new CustomColor("Orange"));
//     Shape1->showColor();
//     Shape2->showColor();
//     Shape3->showColor();
//     Shape4->showColor();
// }
// int tellFrequency(string s, char x);
// int tellFrequency(string s, char x)
// {
//     int count = 0;

//     for (int i = 0; s[i] != '\0'; ++i)
//     {
//         if (x == s[i])
//             ++count;
//     }
//     return count;
// }

// void initialize(string s, int l, int r);
// void initialize(string s, int l, int r)
// {
//     l -= 1;
//     r -= 1;
//     s = s.substr(l, r - l + 1);
//     vector<string> ans;
//     // for (int i = 0; i < s.length(); i ++)
//     // {
//     string newString = s;
//     int length = 0;
//     for (char x : s)
//     {
//         // string newString = s;
//         int frequency = tellFrequency(newString, x);
//         if (frequency % 2 == 0)
//         {
//             length += frequency;
//         }
//         else if (frequency == 1)
//         {
//             length += 1;
//         }
//         cout << length << endl;
//     }
//     // }
// }

// int main()
// {
//     initialize("week", 1, 4);
// }
// int validateFunction()
// {
//     int a;
//     cin >> a;
//     while (1)
//     {
//         if (cin.fail())
//         {
//             cin.clear();
//             cin.ignore(numeric_limits<streamsize>::max(),'\n');
//             cout << "\nPlease Enter Valid Number!!" << endl;
//             cin >> a;
//         }
//         if (!cin.fail())
//             break;
//     }
//     return a;
// }
// class Student
// {
// protected:
//     string name, roll_num;
//     // bool canTakeFeedback;
// public:
//     Student()
//     {
//         cout << "\nEnter Name: ";
//         cin >> name;
//         cout << "Enter Roll Number: ";
//         cin >> roll_num;
//     }
//     virtual void GoToNextClassroom() {}
//     // virtual bool isEligibleForFeedback() {return 0;}
//     void returnDetails()
//     {
//         cout << this->name << "\t" << this->roll_num << endl;
//     }
// };

// class RegularStudent : public Student
// {
// public:
//     void GoToNextClassroom()
//     {
//         cout << "\nThank you " << name << " for attending the seminar, please join your batch-mates in the next classroom." << endl;
//     }
//     // bool isEligibleForFeedback() {
//     //     canTakeFeedback = false;
//     //     return canTakeFeedback;
//     // }
// };

// class GraduateStudent : public Student
// {
// private:
//     bool Feedback = false;

// public:
//     void GoToNextClassroom()
//     {
//         while (true)
//         {
//             if (Feedback)
//             {
//                 cout << "\nThank you " << name << " for attending the seminar, please join your batch-mates in the next classroom." << endl;
//                 break;
//             }
//             else
//             {
//                 cout << "\n"
//                      << name << " , please collect the feedback before you proceed to the next classroom." << endl;
//                 cout << "Do you want to collect the feedback? (y/n) >> ";
//                 char choice;
//                 cin >> choice;
//                 if (choice == 'y' || choice == 'Y')
//                 {
//                     CollectFeedback();
//                 }
//             }
//         }
//     }
//     void CollectFeedback()
//     {
//         Feedback = true;
//     }
// };

// int main()
// {
//     cout << "Enter number of attendees: ";
//     int limitToAttend = validateFunction();
//     vector<vector< Student* >> Students = {{},{}};
//     int attendees = 0;
//     char choice;
//     int age;
//     while (attendees < limitToAttend)
//     {
//         cout << "\nDo you want to attend the seminar?(y/n) >> ";
//         cin >> choice;
//         if (choice == 'y' || choice == 'Y')
//         {
//             cout << "\nEnter your Age: >> ";
//             age = validateFunction();
//             if (age < 17)
//             {
//                 cout << "Candidate with age 17 or above is only allowed!!" << endl;
//             }
//             else{
//                 if (age > 24)
//                 {
//                     Students[0].push_back(new GraduateStudent);
//                 }
//                 else if (age >= 17 && age <= 24)
//                 {
//                     Students[1].push_back(new RegularStudent);
//                 }
//                 attendees++;
//             }
//         }
//     }
//     for (int i = 0; i < Students.size(); i++)
//     {
//         for (int j = 0; j < Students[i].size(); j++)
//         {
//             Students[i][j]->GoToNextClassroom();
//         }
//     }
//     for (int i = 0; i < Students.size(); i++)
//     {
//         for (int j = 0; j < Students[i].size(); j++)
//         {
//             if (i == 0){
//                 cout << endl;
//                 cout << "DATA OF REGULAR STUDENTS" << endl;
//                 cout << "NAMES\t" << "ROLL NUMBERS" << endl;
//                 cout << "=====================" << endl;
//             }
//             else if (i == 1){
//                 cout << endl;
//                 cout << "DATA OF POSTGRADUATE STUDENTS" << endl;
//                 cout << "NAMES\t" << "ROLL NUMBERS" << endl;
//                 cout << "=====================" << endl;
//             }
//             Students[i][j]->returnDetails();

//         }
//     }
// }
// #include <iostream>
// #include <vector>
// #include <limits>
// #include <unistd.h>
// using namespace std;

// int validateFunction()
// {
//     int a;
//     cin >> a;
//     while (1)
//     {
//         if (cin.fail())
//         {
//             cin.clear();
//             cin.ignore(numeric_limits<streamsize>::max(), '\n');
//             cout << "\nPlease Enter Valid Number!!" << endl;
//             cin >> a;
//         }
//         if (!cin.fail())
//             break;
//     }
//     return a;
// }
// class Student
// {
// protected:
//     string name, roll_num;
//     // bool canTakeFeedback;
// public:
//     Student()
//     {
//         cout << "Enter Name: ";
//         cin >> name;
//         cout << "Enter Roll Number: ";
//         cin >> roll_num;
//     }
//     virtual void GoToNextClassroom() {}
//     // virtual bool isEligibleForFeedback() {return 0;}
//     void returnDetails()
//     {
//         cout << this->name << "\t" << this->roll_num << endl;
//     }
// };

// class RegularStudent : public Student
// {
// public:
//     void GoToNextClassroom()
//     {
//         cout << "\nThank you " << name << " for attending the seminar, please join your batch-mates in the next classroom." << endl;
//     }
//     // bool isEligibleForFeedback() {
//     //     canTakeFeedback = false;
//     //     return canTakeFeedback;
//     // }
// };

// class GraduateStudent : public Student
// {
// private:
//     bool Feedback = false;

// public:
//     void GoToNextClassroom()
//     {
//         while (true)
//         {
//             if (Feedback)
//             {
//                 cout << "\nThank you " << name << " for attending the seminar, please join your batch-mates in the next classroom." << endl;
//                 break;
//             }
//             else
//             {
//                 cout << "\n"
//                      << name << " , please collect the feedback before you proceed to the next classroom." << endl;
//                 cout << "Do you want to collect the feedback? (y/n) >> ";
//                 char choice;
//                 cin >> choice;
//                 if (choice == 'y' || choice == 'Y')
//                 {
//                     CollectFeedback();
//                 }
//             }
//         }
//     }
//     void CollectFeedback()
//     {
//         Feedback = true;
//     }
// };

// class Conference
// {
// private:
//     int limitOfAttendees;
//     int attendees = 0;
//     vector<vector<Student *>> Students = {{}, {}};

// public:
//     Conference()
//     {
//         cout << "\nEnter limit of attendees: ";
//         limitOfAttendees = validateFunction();
//         char choice;
//         int age;
//         while (attendees < limitOfAttendees)
//         {
//             cout << "\nDo you want to attend the seminar?(y/n) >> ";
//             cin >> choice;
//             if (choice == 'y' || choice == 'Y')
//             {
//                 cout << "\nEnter your Age: ";
//                 age = validateFunction();
//                 if (age < 17)
//                 {
//                     cout << "Candidate with age 17 or above is only allowed!!" << endl;
//                 }
//                 else
//                 {
//                     if (age > 24)
//                     {
//                         Students[1].push_back(new GraduateStudent);
//                     }
//                     else if (age >= 17 && age <= 24)
//                     {
//                         Students[0].push_back(new RegularStudent);
//                     }
//                     attendees++;
//                 }
//             }
//         }
//         cout << "\nSeminar in process";
//         for (int i = 0; i < 2; i++)
//         {
//             cout << ".";
//             usleep(1000000);
//         }
//         cout << "\nSeminar ended";
//         for (int i = 0; i < 2; i++)
//         {
//             cout << ".";
//             usleep(1000000);
//         }
//         cout << endl;
//         for (int i = 0; i < Students.size(); i++)
//         {
//             for (int j = 0; j < Students[i].size(); j++)
//             {
//                 Students[i][j]->GoToNextClassroom();
//                 usleep(1000000);
//             }
//         }
//         bool regularOutput = true;
//         bool postOutput = true;
//         for (int i = 0; i < Students.size(); i++)
//         {
//             for (int j = 0; j < Students[i].size(); j++)
//             {
//                 if (i == 0 && regularOutput)
//                 {
//                     regularOutput = false;
//                     cout << endl;
//                     cout << "*ATTENDANCE DATA OF REGULAR STUDENTS*" << endl;
//                     cout << "\nNAMES\t"
//                          << "ROLL NUMBERS" << endl;
//                     cout << "=====================" << endl;
//                 }
//                 else if (i == 1 && postOutput)
//                 {
//                     postOutput = false;
//                     cout << endl;
//                     cout << "*ATTENDANCE DATA OF POSTGRADUATE STUDENTS*" << endl;
//                     cout << "\nNAMES\t"
//                          << "ROLL NUMBERS" << endl;
//                     cout << "=====================" << endl;
//                 }
//                 Students[i][j]->returnDetails();
//                 cout << "\n";
//             }
//         }
//     }
// };

// int main()
// {
//     Conference C1;
// }
// int icecreamParlor(int m, vector<int> arr);
// int icecreamParlor(int m, vector<int> arr)
// {
//     bool find = false;

//     for (int i = 0; i < arr.size(); i ++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (!find && arr[i] + arr[j] == m)
//             {
//                 find = true;
//                 cout << i + 1 << " " << j + 1 << endl;

//             }
//         }
//     }

//     return 0;
// }

// int main()
// {
//     icecreamParlor(4, {2, 2, 4, 3});
// }
// #include <bits/stdc++.h>
// string balancedSums(vector<int> arr);
// string balancedSums(vector<int> arr)
// {

//     //     for (int i = 0; i < arr.size(); i++)
//     //     {
//     //         int leftSum = 0;
//     //         int rightSum = 0;
//     //         if (i - 1 > 0)
//     //         {
//     //             for (int j = i - 1; j >= 0; j--)
//     //             {
//     //                 // cout << arr[j] << endl;
//     //                 leftSum += arr[j];
//     //             }
//     //         }
//     //         if (i + 1 < arr.size())
//     //         {
//     //             for (int j = i + 1; j < arr.size(); j++)
//     //             {
//     //                 rightSum += arr[j];
//     //             }
//     //         }
//     //         if (rightSum == leftSum)
//     //         {
//     //             cout << arr[i] << endl;
//     //             break;
//     //         }
//     //     }
//     int sum = accumulate(arr.begin(), arr.end(), 0);
//     int count = arr[0];
//     int len = arr.size();
//     if (sum - count == 0)
//         return "YES";

//     for (int i = 1; i < len; i++)
//     {
//         if (sum - arr[i] - count == count || sum - arr[i] == 0)
//         {
//             return "YES";
//         }
//         count += arr[i];
//     }
//     return "NO";
// }

// int main()
// {
//     cout << balancedSums({0, 0, 2, 0}) << endl;
// }

// int minimumAbsoluteDifference(vector<int> arr) {

//     int ans;
//     sort(arr.begin(), arr.end());
//     for (int i = 1; i < arr.size(); i++)
//     {
//         int difference = arr[i] - arr[i - 1];
//         if (difference < ans)
//             ans = difference;
//     }
//     return ans;
// }
// long marcsCakewalk(vector<int> a) {
//     sort(a.begin(), a.end(), greater<int>());
//     long int sum = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//         sum += (pow(2, i) * a[i]);
//     }
//     return sum;

// }

// struct Node {
//     int data;
//     struct Node* next;
//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };

// struct LinkedList {
//     Node* head;
//     LinkedList()
//     {
//         head = NULL;
//     }

//     /* Function to reverse the linked list */
//     void reverse()
//     {
//         // Initialize current, previous and
//         // next pointers
//         Node* current = head;
//         Node *prev = NULL, *next = NULL;

//         while (current != NULL) {
//             // Store next
//             next = current->next;

//             // Reverse current node's pointer
//             current->next = prev;

//             // Move pointers one position ahead.
//             prev = current;
//             current = next;
//         }
//         head = prev;
//     }

//     /* Function to print linked list */
//     void print()
//     {
//         struct Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//     }

//     void push(int data)
//     {
//         Node* temp = new Node(data);
//         temp->next = head;
//         head = temp;
//     }
// };

// /* Driver program to test above function*/
// int main()
// {
//     /* Start with the empty list */
//     LinkedList ll;
//     ll.push(20);
//     ll.push(4);
//     ll.push(15);
//     ll.push(85);

//     cout << "Given linked list\n";
//     ll.print();

//     ll.reverse();

//     cout << "\nReversed Linked list \n";
//     ll.print();
//     return 0;
// }

// Function ListNode reverse(ListNode head)
// {
//     ListNode prev = null;
//     ListNode curr = head;
//     ListNode next = null;

//     while(curr != null)
//     {
//         next = curr.next; // saves next
//         curr.next = prev; // reverse
//         prev = curr;
//         curr = next;
//     }

//     return prev;    // nre Reversed List
// }

// function ListNode reverseList(ListNode head)
// {
//     if (head == null || head.next == null)
//     {
//         return head;
//     }
//     ListNode reversedListHead = reverseList(head.next);
//     head.next.next = head;
//     head.next null;
//     return reverseListHead;
// }

// int luckBalance(int k, vector<vector<int>> contests) {
//     int smallest = contests[0][0];
//     int index = contests.size();
//     for (int i = 0; i < contests.size(); i++)
//     {
//         if (contests[i][0] < smallest && contests[i][1] == 1)
//         {
//             smallest = contests[i][0];
//             index = i;
//             // cout <<"Smallest " << smallest << " INDEX " << index << endl;
//         }
//     }

//     int answer = 0;

//     for (int i = 0; i < contests.size(); i++)
//     {
//         if (contests[i][1] == 0)
//         {
//             answer += contests[i][0];
//         }
//         else if (k > 0 && i != index && contests[i][1] == 1)
//         {
//             answer += contests[i][0];
//             k -= 1;
//         }
//         else if (i == index && contests[i][1] == 1)
//         {
//             answer -= contests[i][0];
//         }
//     }

//     return answer;
// }

// int main()
// {
//     ifstream fin;
//     fin.open("data.txt");

//     string wordFromFile;
//     char space;
//     while (!fin.eof())
//     {
//         if (fin >> wordFromFile)
//         {
//             cout << wordFromFile;
//         }

//     }
//     fin.close();
// }

// int main()
// {
//     ifstream fin("data.txt");
//     string line;
//     while (getline(fin, line))
//     {
//         cout << line << endl;
//     }
// }

// class base
// {
//     public:
//     virtual void showData()
//     {
//         cout << "This is base class" << endl;
//     }
// };

// class derive: public base
// {
//     public:
//     void showData()
//     {
//         cout << "This is derived class" << endl;
//     }
// };

// int main()
// {
//     base *arr[10];
//     char x;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Base or Derived? ";
//         cin >> x;
//         if (x == 'b')
//         {
//             arr[i] = new base;
//             arr[i]->showData();
//         }
//         else
//         {
//             arr[i] = new derive;
//             arr[i]->showData();
//         }
//     }
// }

// bool Oversize()
// {
//      if (book.pages <= 800)
//     {
//         return true;
//     }
//     return false;
// }

// class Publication
// {
// protected:
//     string titleOfPublication;
//     float priceOfPublication;

// public:
//     Publication()
//     {
//         titleOfPublication = "";
//         priceOfPublication = 0;
//     }

//     virtual void getData()
//     {
//         cout << "Enter title of publication: ";
//         cin.ignore(1, '\n');
//         getline(cin, titleOfPublication);
//         cout << "Enter the price for this Publication: ";
//         cin >> priceOfPublication;
//     }

//     virtual void showData()
//     {
//         cout << endl;
//         cout << "The Title of Publication is: " << titleOfPublication << endl;
//         cout << "The price for this publication is: " << fixed << setprecision(2) << priceOfPublication << endl;
//     }
//     virtual string classType()
//     {
//         return "Base";
//     }
//     virtual bool Oversize() = 0;
// };

// class Book : public Publication
// {
// protected:
//     int pageCount;

// public:
//     Book()
//     {
//         pageCount = 0;
//     }

//     void getData()
//     {
//         Publication::getData();
//         cout << "Enter Page count: ";
//         cin >> pageCount;
//     }

//     void showData()
//     {
//         Publication::showData();
//         cout << "The Page count is: " << pageCount << endl;
//     }

//     bool Oversize()
//     {
//         if (pageCount <= 800)
//         {
//             return true;
//         }
//         return false;
//     }
//     string classType()
//     {
//         return "Book";
//     }
// };

// class Cassette : public Publication
// {
// protected:
//     float tapeInMints;

// public:
//     Cassette() : tapeInMints(0) {}

//     void getData()
//     {
//         Publication::getData();
//         cout << "Enter the Length of Tape in minutes: ";
//         cin >> tapeInMints;
//     }

//     void showData()
//     {
//         Publication::showData();
//         cout << "The Length of Cassette in minutes is: " << fixed << setprecision(2) << tapeInMints << endl;
//     }
//     bool Oversize()
//     {
//         if (tapeInMints <= 90)
//         {
//             return true;
//         }
//         return false;
//     }
//     string classType()
//     {
//         return "Cassete";
//     }
// };
// int main()
// {
//     Publication *userArray[50];
//     char x;
//     int count = 0;
//     while (true)
//     {
//         cout << "Want to add Publisher Details y/n? ";
//         cin >> x;
//         if (x == 'n' || x == 'N')
//         {
//             break;
//         }
//         else
//         {
//             cout << "Do you want to Publish Book or Cassete b/c?";
//             cin >> x;
//             if (x == 'b' || x == 'B')
//             {
//                 userArray[count] = new Book;
//                 userArray[count]->getData();
//                 count += 1;
//             }
//             else if (x == 'c' || x == 'C')
//             {
//                 userArray[count] = new Cassette;
//                 userArray[count]->getData();
//                 count += 1;
//             }
//         }
//     }
//     for (int i = 0; i < count; i++)
//     {
//         userArray[i]->showData();
//         if (userArray[i]->Oversize() && userArray[i]->classType() == "Book")
//         {
//             cout << "The Page Count for the Books is under 800 pages" << endl;
//         }
//         else if (!(userArray[i]->Oversize()) && userArray[i]->classType() == "Book")
//         {
//             cout << "The Page Count for the Book exceeds 800 pages(Oversize)" << endl;
//         }
//         if (userArray[i]->Oversize() && userArray[i]->classType() == "Cassete")
//         {
//             cout << "The Length of Audio tape is under 90 mints" << endl;
//         }
//         else if (!(userArray[i]->Oversize()) && userArray[i]->classType() == "Cassete")
//         {
//             cout << "The Length of Audio tape exceeds 90 mints(Oversize)" << endl;
//         }
//     }
// }

// class Product
// {
// public:
//     int id;
//     string pName;
//     string pCat;
//     int prize;

//     Product() : id(0), pName(""), pCat(""), prize(0) {}
// };

// class Grocery : public Product
// {
// public:
//     Grocery()
//     {
//         id = 101;
//         pName = "Grocery";
//         pCat = "Grocery";
//         prize = 7;
//     }
// };

// class FrozenFoods : public Product
// {
// public:
//     FrozenFoods()
//     {
//         id = 102;
//         pName = "Frozen";
//         pCat = "Frozen";
//         prize = 5;
//     }
// };

// class Dairy : public Product
// {
// public:
//     Dairy()
//     {
//         id = 103;
//         pName = "Dairy";
//         pCat = "Dairy";
//         prize = 6;
//     }
// };

// class Meat : public Product
// {
// public:
//     Meat()
//     {
//         id = 104;
//         pName = "Meat";
//         pCat = "Meat";
//         prize = 12;
//     }
// };

// class Bakery : public Product
// {
// public:
//     Bakery()
//     {
//         id = 105;
//         pName = "Bakery";
//         pCat = "Bakery";
//         prize = 8;
//     }
// };
// class Pharmacy : public Product
// {
// public:
//     Pharmacy()
//     {
//         id = 105;
//         pName = "Pharmacy";
//         pCat = "Pharmacy";
//         prize = 9;
//     }
// };

// class Customer
// {
// public:
//     string name;
//     Product *userItems[50];
//     int count;
//     int quantity[50];

//     Customer()
//     {
//         name = "";
//         count = 0;
//     }

//     void getData()
//     {
//         cout << "Enter your Name: ";
//         cin >> name;
//         int x;
//         int y = 0;
//         while (true)
//         {
//             cout << "Do you want to buy something? y/n";
//             cin >> x;
//             if (x == 0)
//                 break;
//             else
//             {
//                 cout << "Available Products" << endl;
//                 cout << "1: Grocery\n2:Frozen Items\n3: Dairy\n4: Meat\n5: Bakery\n6: Pharmacy" << endl;
//                 cout << "Enter your choice: ";
//                 cin >> x;
//                 if (x == 1)
//                 {
//                     userItems[count] = new Grocery;
//                     cout << "Enter Quantity: ";
//                     cin >> y;
//                     quantity[count] = y;
//                     count += 1;
//                 }
//                 else if (x == 2)
//                 {
//                     userItems[count] = new FrozenFoods;
//                     cout << "Enter Quantity: ";
//                     cin >> y;
//                     quantity[count] = y;
//                     count += 1;
//                 }
//                 else if (x == 3)
//                 {
//                     userItems[count] = new Dairy;
//                     cout << "Enter Quantity: ";
//                     cin >> y;
//                     quantity[count] = y;
//                     count += 1;
//                 }
//                 else if (x == 4)
//                 {
//                     userItems[count] = new Meat;
//                     cout << "Enter Quantity: ";
//                     cin >> y;
//                     quantity[count] = y;
//                     count += 1;
//                 }
//                 else if (x == 5)
//                 {
//                     userItems[count] = new Bakery;
//                     cout << "Enter Quantity: ";
//                     cin >> y;
//                     quantity[count] = y;
//                     count += 1;
//                 }
//                 else if (x == 6)
//                 {
//                     userItems[count] = new Pharmacy;
//                     cout << "Enter Quantity: ";
//                     cin >> y;
//                     quantity[count] = y;
//                     count += 1;
//                 }
//             }
//         }
//     }
// };

// class Counter
// {
// public:
//     Customer c1;
//     Customer *ptr = &c1;
//     int totalPrice = 0;

//     void operateCustomer()
//     {
//         c1.getData();
//         // cout << c1.userItems[0]->id << endl;
//         cout << "Purchase Receipt!!" << endl;

//         cout << "Product Id\tProduct Name\t\tCategory\tPrize\tQuantity" << endl;

//         for (int i = 0; i < ptr->count; i++)
//         {
//             cout << ptr->userItems[i]->id << "\t\t"
//             << ptr->userItems[i]->pName << "\t\t\t"
//             << ptr->userItems[i]->pCat << "\t\t"
//             << ptr->userItems[i]->prize << '\t'
//             << ptr->quantity[i] << endl;
//             totalPrice += (ptr->quantity[i] * ptr->userItems[i]->prize);

//         }
//         cout << "Total Price is: " << totalPrice << endl;
//     }
// };

// int main()
// {
//     Counter c1;
//     c1.operateCustomer();
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     string x = "AAqib";
//     for (int i = 0; i < x.length(); i++)
//     {
//         cout << char(tolower(x[i]));
//     }
//     cout << '\n';
// }

// using namespace std;

// // A utility function to swap two elements
// void swap(int* a, int* b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }
// void printArray(int arr[], int size);
// /* This function takes last element as pivot, places
// the pivot element at its correct position in sorted
// array, and places all smaller (smaller than pivot)
// to left of pivot and all greater elements to right
// of pivot */
// int partition (int arr[], int low, int high)
// {
//     int pivot = arr[high]; // pivot
//     int i = (low - 1); // Index of smaller element

//     for (int j = low; j <= high - 1; j++)
//     {
//         // If current element is smaller than the pivot
//         if (arr[j] < pivot)
//         {
//             i++; // increment index of smaller element
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return (i + 1);
// }

// /* The main function that implements QuickSort
// arr[] --> Array to be sorted,
// low --> Starting index,
// high --> Ending index */
// void quickSort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         /* pi is partitioning index, arr[p] is now
//         at right place */
//         int pi = partition(arr, low, high);

//         // Separately sort elements before
//         // partition and after partition
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// // Driver Code
// int main()
// {
//     int arr[] = {2, 14, 5, 12, 11, 56, 23, 21, 19, 16};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     quickSort(arr, 0, n - 1);
//     cout << "Sorted array: \n";
//     printArray(arr, n);
//     return 0;
// }

// int main()
// {
//     cout << "Testing the Intellisence" << endl;
// }

// vector<int> maximumPerimeterTriangle(vector<int> sticks) {
//     sort(sticks.begin(), sticks.end());
//     int i = sticks.size() - 3;
//     while(i >= 0 && sticks[i] + sticks[i + 1] <= sticks[i + 2])
//         i -= 1;

//     vector<int> ansVector;
//     if (i > 0)
//     {
//         ansVector.push_back(sticks[i]);
//         ansVector.push_back(sticks[i + 1]);
//         ansVector.push_back(sticks[i + 2]);
//         return ansVector;
//     }
//     else
//     {
//         ansVector.push_back(-1);
//         return ansVector;
//     }
// }

// int main()
// {
//     vector<int> ans = maximumPerimeterTriangle({1, 1, 1, 2, 3, 5});
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << '\n';
// }

// long candies(int n, vector<int> arr)
// {
//     // long ans = 1;
//     // bool foundEnd = false;
//     // int prAns = 1;
//     // for (int i = 1; i < n; i++)
//     // {
//     //     if (arr[i] > arr[i - 1])
//     //     {
//     //         cout << "First: ";
//     //         prAns += 1;
//     //         ans += prAns;
//     //         cout << prAns << '\n';
//     //     }
//     //     else if (arr[i] == arr[i - 1])
//     //     {
//     //         cout << "Second: ";
//     //         prAns -= 1;
//     //         ans += prAns;
//     //         cout << prAns << '\n';
//     //     }
//     //     else
//     //     {
//     //         cout << "Third: ";
//     //         prAns = 1;
//     //         ans += prAns;
//     //         cout << prAns << '\n';
//     //     }
//     // }
//     // return ans;
//     unsigned int descending_seq = 0;
//     unsigned long sum = 0;
//     unsigned int prev_c = 0;
//     unsigned int prev_num_of_candies = 0;
//     for (int c : arr)
//     {
//         if (c >= prev_c)
//         {
//             if (descending_seq > 0)
//             {
//                 // agjust local max value if descending sequence
//                 // was longer than ascending
//                 if (descending_seq >= prev_num_of_candies)
//                 {
//                     sum += 1 + descending_seq - prev_num_of_candies;
//                 }
//                 // last of descending = local minimum
//                 prev_num_of_candies = 1;
//                 descending_seq = 0;
//             }
//             if (c > prev_c)
//             {
//                 ++prev_num_of_candies;
//             }
//             else
//             {
//                 // optimal if previous value is the same
//                 prev_num_of_candies = 1;
//             }
//             sum += prev_num_of_candies;
//         }
//         else
//         {
//             ++descending_seq;
//             // For 3 descending numbers in a row this summing strategy
//             // will increment like sum+=1+2+3 which is the same as
//             // more usual and expected sum+=3+2+1
//             sum += descending_seq;
//         }
//         prev_c = c;
//     }
//     // If we finished on descending order, update last local max
//     if (descending_seq >= prev_num_of_candies)
//     {
//         sum += 1 + descending_seq - prev_num_of_candies;
//     }
//     return sum;
// }

// int main()
// {
//     cout << candies(8, {2, 4, 3, 5, 2, 6, 4, 5}) << endl;
// }

// int main()
// {
//     vector<int> a = {4, 3, 2, 1};
//     for (int i = 0; i < a.size(); i++)
//     {
//         int secondAns = 0;
//         int x = i + 1;
//         for (int j = 0; j <= i; j++)
//         {
//             secondAns += (a[j] * x);
//             x -= 1;
//         }
//         cout << secondAns << endl;
//     }
// }

// int main()
// {
//     int x;
//     cin >> x;
//     for (int i = 0; i < x; i++)
//     {
//         cout << x << "\t"<< i << '\t' << x * i << endl;
//     }
// }

// int beautifulPairs(vector<int> A, vector<int> B)
// {
//     int a[1001] = {0};
//     int b[1001] = {0};
//     for (int x: A)
//     {
//         a[x]++;
//     }
//     for (int x: B)
//     {
//         b[x]++;
//     }
//     int sum = 0;
//     for (int i = 0; i < 1001; i++)
//     {
//         if (a[i] > 0 && b[i] > 0)
//         {
//             sum += (min(a[i], b[i]));
//         }
//     }
//     if (sum > n)
//     {
//         return sum - 1;
//     }
//     return sum + 1;
// }

// int main()
// {
//     cout << beautifulPairs({1, 2, 3, 4}, {1, 2, 3, 3});
// }

// void decentNumber(int n) {
//     int count5 = n;
//     int count3 = n;
//     bool cond1 = false;
//     bool cond2 = false;
//     string ans = "";
//     while (!cond1 && !cond2)
//     {
//         if (count5 % 3 != 0)
//         {
//             count5 -= 1;
//         }
//         else
//         {
//             cond1 = true;
//             count3 = n - count5;
//             if (count3 % 5 == 0)
//                 cond2 = true;
//             else{
//                 cond1 = false;
//                 count5 -= 1;
//             }
//         }
//     }
//     for (int i = 0; i < count5; i++)
//         ans += "5";
//     for (int i = 0; i < count3; i++)
//         ans += "3";
//     cout << ans << endl;
// }

// int main()
// {
//     decentNumber(7);
// }

// void decentNumber(int n)
// {
//     int count5 = n;
//     int count3 = n;
//     bool cond1 = false;
//     bool cond2 = false;
//     string ans = "";
//     while (!cond1 && !cond2 && count5 >= 0)
//     {
//         if (count5 % 3 != 0)
//         {
//             count5 -= 5;
//         }
//         else
//         {
//             cond1 = true;
//             count3 = n - count5;
//             if (count3 % 5 == 0)
//                 cond2 = true;
//             else
//             {
//                 cond1 = false;
//                 count5 -= 5;
//             }
//         }
//     }

//     if (cond1 && cond2)
//     {
//         for (int i = 0; i < count5; i++)
//             ans += "5";
//         for (int i = 0; i < count3; i++)
//             ans += "3";

//         cout << ans << endl;
//     }
//     else
//         cout << "-1" << endl;
// }

// int main()
// {
//     decentNumber(12);
// }
// int toys(vector<int> w) {
//     int count = 0, x = -1;
//     sort(w.begin(), w.end());
//     for (int i = 0; i < w.size(); i++)
//     {
//         if (w[i] > x)
//         {
//             x = w[i] + 4;
//             count += 1;
//         }

//     }
//     return count;
// // }
// void largestPermutation(int k, vector<int> arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << ' ' << n - i << endl;
//         if (arr[i] != n - i && k != 0)
//         {
//             cout << "Yes" << endl;
//             int j = i + 1;
//             while (arr[j] != n - i){
//                 cout << arr[j] << ' ' << n - i << endl;
//                 j++;
//             }
//             cout << "Done" << endl;
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             k--;
//         }
//     }

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << '\n';
// }

// int main()
// {
//     largestPermutation(1, {4, 2, 3, 5, 1});
// }
void printVector(vector<int> arr)
{
    for (auto &x : arr)
    {
        cout << x << ' ';
    }
    cout << '\n';
}

void printMultiVector(vector<vector<int>> x)
{
    for (int i = 0; i < x.size(); i++)
    {
        printVector(x[i]);
    }
    cout << '\n';
}

// int maximumToys(vector<int> prices, int k)
// {
//     sort(prices.begin(), prices.end());
//     printVector(prices);
//     int count = 0, sum = 0;
//     for (auto &x: prices)
//     {
//         sum += x;
//         if (sum <= k)
//             count += 1;
//         else
//         {
//             break;
//         }

//     }
//     return count;
// }

// int main()
// {
//     int ans = maximumToys({3, 7, 2, 9, 4}, 15);
//     cout << ans << '\n';
// }

// void jimOrders(vector<vector<int>> orders) {
//     vector<int> ans(orders.size(), 0);
//     vector<int> finalList(orders.size(), 0);
//     map<int, int> customersTime;

//     for (int i = 0; i < orders.size(); i ++)
//     {
//         int time = 0;
//         for (int j = 0; j < 2; j++)
//         {
//             time += orders[i][j];
//             ans[i] = time + i;
//         }
//         customersTime[time + i] = i + 1;
//     }
//     sort(ans.begin(), ans.end());
//     for (auto &x: ans)
//         cout << x << ' ';
//     cout << '\n';
//     for (auto &x: customersTime)
//     {
//         cout << x.first << ' ' << x.second << '\n';
//     }
//     cout << '\n';
//     for (int i = 0; i < orders.size(); i++)
//     {
//         finalList[i] = customersTime[ans[i]];
//     }
// }

// int main()
// {
//     jimOrders({{1, 1}, {1, 1}});
// }

// string twoArrays(int k, vector<int> A, vector<int> B)
// {
//     sort(A.begin(), A.end());
//     sort(B.begin(), B.end(), greater<int>());
//     for (int i = 0; i < A.size(); i++)
//     {
//         if (A[i] + B[i] < k)
//             return "NO";
//     }
//     return "YES";
// }

// int main()
// {
//     twoArrays(10, {2, 1, 3}, {7, 8, 9});
// }

// int maximizingXor(int l, int r) {
//     int ans = 0;
//     for (int i = l; i <= r; i++)
//     {
//         for (int j = i; j <= r; j++)
//         {
//             int x = i ^ j;
//             if (x > ans)
//             {
//                 ans = x;
//             }
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int ans = maximizingXor(10, 15);
//     cout << ans << '\n';
// }

// long sumXor(long n) {
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         // cout << n + i << ' ' << n ^ i << '\n';

//     }
//     return count;
// }

// int main()
// {
//     int ans = sumXor(10);
//     cout << ans << endl;
// }

// vector<int> twoSum(vector<int> nums, int target)
// {
//     bool found = false;
//     vector<int> ans(2, 0);
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int x = nums.size() - 1;
//         for (int j = x; j > i; j--)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 ans[0] = i;
//                 ans[1] = j;
//                 found = true;
//                 break;
//             }
//         }
//         if (found)
//             break;
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> ans = twoSum({3, 2, 4}, 6);
//     printVector(ans);
// }

// int main()
// {
//     int x = -123;
//     string ans = "";
//     if (x < 0)
//         ans += "-";
//     x = abs(x);
//     string newAns = to_string(x);
//     reverse(newAns.begin(), newAns.end());
//     ans += newAns;
//     cout << ans << endl;
// }

// int monotoneIncreasingDigits(int N)
// {
//     for (int i = N; i >= 0; i--)
//     {
//         // cout << i << endl;
//         bool found = true;
//         string x = to_string(i);
//         for (int j = 0; j < x.size() - 1; j++)
//         {
//             if (x[j] > x[j + 1]){
//                 found = false;
//                 break;
//             }
//         }
//         if (found)
//         {
//             return i;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     cout << monotoneIncreasingDigits(963856657) << endl;
// }

// class Solution {
// public:
//     vector<int> shuffle(vector<int>& nums, int n) {
//         vector<int> ans;
//         for (int i = 0; i < n; i ++)
//         {
//             ans.push_back(nums[i]);
//             ans.push_back(nums[i + n]);
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int sum = 0;
//         vector<int> ans(nums.size(), 0);
//         for (int i = 0; i < nums.size(); i++)
//         {
//             sum += nums[i];
//             ans[i] = sum;
//         }
//         return ans;
//     }
// };

// int numIdenticalPairs(vector<int> nums)
// {
//     int sum = 0;
//     int lastNum = 0;
//     sort(nums.begin(), nums.end());

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] != lastNum)
//         {
//             lastNum = nums[i];
//             int freq = count(nums.begin(), nums.end(), nums[i]);
//             sum += freq * (freq - 1)/2;
//         }
//     }
//     return sum;
// }

// int main()
// {
//     cout << numIdenticalPairs({1,2,3,1,1,3}) << endl;
// }

// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         vector<bool> ans(candies.size());
//         int maxVal = *max_element(candies.begin(), candies.end());
//         for (int i = 0; i < candies.size(); i++)
//         {
//             if (candies[i] == maxVal || candies[i] + extraCandies >= maxVal)
//                 ans[i] = true;
//             else
//                 ans[i] = false;
//         }
//         return ans;
//     }
// };
// class Solution {
// public:
//     string defangIPaddr(string address) {
//         string ans = "";
//         for (char x: address)
//         {
//             if (x != '.')
//                 ans += x;
//             else
//                 ans += "[.]";
//         }
//         return ans;
//     }
// };

// int numJewelsInStones(string J, string S)
// {
//     int sum = 0;
//     char last;
//     for (char x : J)
//     {
//         if (x != last)
//         {
//             last = x;
//             sum += count(S.begin(), S.end(), x);
//             cout << sum << endl;
//         }
//     }
//     return sum;
// }

// int main()
// {
//     numJewelsInStones("aA", "aAAbbbb");
// }

// class Solution {
// public:
//     int numJewelsInStones(string J, string S) {
//         unordered_set<char> temp;
//         int ans = 0;
//         for (char x: J)
//             temp.insert(x);
//         for (char x: S)
//             if (temp.count(x) == 1)
//                 ans ++;
//         return ans;
//     }
// };

// void restoreString(string s, vector<int> indices)
// {
//     string ans = s;
//     for (int i = 0; i < indices.size(); i++)
//     {
//         ans[indices[i]] = s[i];
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     restoreString("codeleet", {4,5,6,7,0,2,1,3});
// }

// void smallerNumbersThanCurrent(vector<int> nums)
// {
//     vector<int> secNums = nums;
//     vector<int> ans(nums.size(), 0);
//     sort(secNums.begin(), secNums.end());
//     for (int i = 0; i < nums.size(); i++)
//     {
//         vector<int>::iterator it = find(secNums.begin(), secNums.end(), nums[i]);
//         ans[i] = distance(secNums.begin(), it);
//     }
//     printVector(ans);
// }

// vector<int> smallerNumbersThanCurrent(vector<int> nums)
// {
//     int arr[101] = {0};
//     for (int i : nums)
//         arr[i]++;
//     for (int i = 1; i < 101; i++)
//         arr[i] += arr[i - 1];
//     int k = 0;
//     for (int i : nums)
//     {
//         if (i == 0)
//             nums[k++] = 0;
//         else
//             nums[k++] = arr[i - 1];
//     }
//     return nums;
// }

// int main()
// {
//     vector<int> ans = smallerNumbersThanCurrent({8, 1, 2, 2, 3});
//     printVector(ans);
// }

// void subtractProductAndSum(int n)
// {
//     int prod = 1;
//     int sum = 0;
//     while (n > 0)
//     {
//         int x =  n % 10;
//         n /= 10;
//         prod *= x;
//         sum += x;
//     }
//     cout << prod - sum;
// }

// int main()
// {
//     subtractProductAndSum(4421);
// }

// int reverse(int x)
// {
//     bool polarity;
//     if (x > 0)
//         polarity = true;
//     else
//         polarity = false;

//     x = abs(x);
//     string ans = "";
//     while (x > 0)
//     {
//         int y = x % 10;

//         x /= 10;
//         ans += to_string(y);
//     }
//     stringstream geek(ans);
//     long long int finAns = 0;
//     geek >> finAns;
//     if(ans>=INT_MAX) return 0;
//     if (!polarity)
//         return -finAns;
//     return finAns;
// }

// int main()
// {
//     int ans = reverse(1534236469);
//     cout << ans << endl;
// }

// int main()
// {
//     vector<int> arr = {0,1,2,3,4};
//     arr.insert(arr.begin() + 0, 5);
//     for (auto &x: arr)
//     {
//         cout << x;
//     }
// }

// class Solution {
// public:
//     vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
//         vector<int> ans;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             ans.insert(ans.begin() + index[i], nums[i]);
//         }
//         return ans;
//     }
// };

// void xorOperation(int n, int start)
// {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans ^= start + 2 * i;
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     xorOperation(10, 5);
// }

// class Solution
// {
// public:
//     int balancedStringSplit(string s)
//     {
//         int balance = 0;
//         int ans = 0;
//         for (char x : s)
//         {
//             if (x == 'R')
//                 balance++;
//             else
//                 balance--;
//             if (balance == 0)
//                 ans++;
//         }
//         return ans;
//     }
// };

// void sumOddLengthSubarrays(vector<int> arr)
// {
//     int finalAns = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {

//         for (int j = i; j < arr.size(); j++)
//         {
//             int sum = 0;
//             if ((j - i) % 2 == 0)
//             {
//                 for (int k = i; k <= j; k++)
//                     sum += arr[k];
//                 finalAns += sum;
//             }
//         }
//     }
//     cout << finalAns << endl;
// }

// int sumOddLengthSubarrays(vector<int> &arr)
// {
//     int odd = 1;
//     int result = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int sum = 0;
//         for (int j = i; j < arr.size(); j++)
//         {
//             sum += arr[j];
//             if (odd % 2 == 1)
//             {
//                 result += sum;
//             }
//             odd++;
//         }
//     }
//     return result;
// }

// int main()
// {
//     sumOddLengthSubarrays({10, 11, 12});
// }

// void findNumbers(vector<int> nums)
// {
//     // int evenCount = 0;
//     // int i = 0;
//     // int lengthOfNumber = 0;
//     // bool cond = false;
//     // while (i < nums.size())
//     // {
//     //     // nums[i] %= 10;
//     //     if (nums[i] == 0)
//     //         cond = true;
//     //     nums[i] /= 10;
//     //     if (nums[i] >= 0 && !cond){
//     //         lengthOfNumber++;
//     //     }
//     //     else
//     //     {
//     //         cond = false;
//     //         i++;
//     //         if (lengthOfNumber % 2 == 0)
//     //             evenCount++;
//     //         lengthOfNumber = 0;
//     //     }
//     // }
//     // cout << evenCount << endl;
//     int evenCount = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         string x = to_string(nums[i]);
//         if (x.length() % 2 == 0)
//             evenCount ++;
//     }
//     cout << evenCount << endl;
// }

// int main()
// {
//     findNumbers({555,901,482,1771});
// }

// void countGoodTriplets(vector<int> arr, int a, int b, int c)
// {
//     int numOfGood = 0;
//     // int j = 1, k = 2;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         int j = i + 1, k = i + 2;
//         while (j < arr.size() - 1)
//         {
//             // bool pass = false;
//             // cout << arr[i] << ' ' << arr[j] << ' ' << arr[k] << endl;
//             if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
//             {

//                 // pass = true;
//                 numOfGood++;
//             }
//             k++;
//             if (k > arr.size() - 1)
//             {
//                 // pass = false;
//                 j++;
//                 k = j + 1;
//             }
//         }
//     }
//     cout << numOfGood << endl;
// }

// int main()
// {
//     countGoodTriplets({5,5,2,6,4}, 5,4,5);
// }

// class Solution
// {
// public:
//     int countGoodTriplets(vector<int> &arr, int a, int b, int c)
//     {
//         int res = 0;
//         int n = arr.size();
//         for (int i = 0; i <= n - 3; i++)
//         {
//             for (int j = i + 1; j <= n - 2; j++)
//             {
//                 if (abs(arr[j] - arr[i]) > a)
//                     continue;
//                 for (int k = j + 1; k <= n - 1; k++)
//                 {
//                     if (abs(arr[k] - arr[j]) > b || abs(arr[k] - arr[i]) > c)
//                         continue;
//                     res++;
//                 }
//             }
//         }
//         return res;
//     }
// };
// class Solution {
// public:
//     string toLowerCase(string str) {
//         for (int i = 0; i < str.length(); i++)
//         {
//             str[i] = tolower(str[i]);
//         }
//         return str;
//     }
// };

// class Solution {
// public:
//     int diagonalSum(vector<vector<int>>& mat) {
//         int sum = 0;
//         for (int i = 0; i < mat.size(); i++)
//         {
//             for (int j = 0; j < mat[0].size(); j++)
//             {
//                 if (i == j || i + j == mat[0].size() - 1)
//                     sum += mat[i][j];
//             }
//         }
//         return sum;
//     }
// };

// void oddCells(int n, int m, vector<vector<int>> indices)
// {
//     vector<vector<int>> arr(n, vector<int>(m, 0));
//     int count = 0;
//     for (int i = 0; i < indices.size(); i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             int x = ++arr[indices[i][0]][j];
//             if (x % 2 == 0)
//                 count --;
//             else
//                 count ++;

//         }
//         for (int j = 0; j < n; j++)
//         {
//             int x = ++arr[j][indices[i][1]];
//             if (x % 2 == 0)
//                 count --;
//             else
//                 count ++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << ' ';
//         }
//         cout << '\n';
//     }
//     cout << count << endl;
// }

// class Solution {
// public:
//     int oddCells(int n, int m, vector<vector<int>>& indices) {
//        vector<vector<int>> arr(n, vector<int>(m, 0));
//         int count = 0;
//         for (int i = 0; i < indices.size(); i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 int x = ++arr[indices[i][0]][j];
//                 if (x % 2 == 0)
//                     count --;
//                 else
//                     count ++;

//             }
//             for (int j = 0; j < n; j++)
//             {
//                 int x = ++arr[j][indices[i][1]];
//                 if (x % 2 == 0)
//                     count --;
//                 else
//                     count ++;
//             }
//         }
//         return count;
//     }
// };
// int main()
// {
//     oddCells(2, 3, {{0, 1}, {1, 1}});
// }

// int maximum69Number(int num)
// {
//     string x = to_string(num);
//     for (int i = 0; i < x.length(); i++)
//     {
//         if (x[i] == '6')
//         {
//             x[i] = '9';
//             break;
//         }
//     }
//     stringstream geek(x);
//     geek >> num;
//     return num;
// }

// int main()
// {
//     cout << maximum69Number(9999) << endl;
// }

// class Solution {
// public:
//     int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
//         int count = 0;
//         for (int i = 0; i < endTime.size(); i++)
//         {
//             if (startTime[i]<=queryTime && endTime[i]>=queryTime)
//                 count ++;
//         }
//         return count;
//     }
// };

// class Solution
// {
// public:
//     int maxProduct(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         return (nums[n - 1] - 1) * (nums[n - 2] - 1);
//     }
// };

// void freqAlphabets(string s)
// {
//     char arr[27] = "abcdefghijklmnopqrstuvwxyz";
//     string ans = "";
//     for (int i = s.length() - 1; i >= 0; i--)
//     {
//         string x = "";
//         int y = 0;
//         if (s[i] == '#')
//         {
//             x += s[--i];
//             x = s[--i] + x;
//         }
//         else
//         {
//             x = s[i];
//         }
//         stringstream geek(x);
//         geek >> y;
//         ans = arr[y - 1] + ans;
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     freqAlphabets("10#11#12");
// }

// class Solution {
// public:
//     string freqAlphabets(string s) {
//         char arr[27] = "abcdefghijklmnopqrstuvwxyz";
//         string ans = "";
//         for (int i = s.length() - 1; i >= 0; i--)
//         {
//             string x = "";
//             int y = 0;
//             if (s[i] == '#')
//             {
//                 x += s[--i];
//                 x = s[--i] + x;
//             }
//             else
//             {
//                 x = s[i];
//             }
//             stringstream geek(x);
//             geek >> y;
//             ans = arr[y - 1] + ans;
//         }
//         return ans;
//     }
// };

// void repeatedNTimes(vector<int> A)
// {
//     // sort(A.begin(), A.end());
//     // int x;
//     // for (int i = 0; i < A.size() - 1; i++)
//     // {
//     //     if (A[i] == A[i + 1])
//     //     {
//     //         // cout << A[i] << ' ' << A[i + 1] << endl;
//     //         x = A[i];
//     //         break;
//     //     }
//     // }
//     // cout << x << endl;
//     int arr[10002] = {0};
//     int x;
//     int m = A.size() / 2;
//     for (int i = 0; i < A.size(); i++)
//     {
//         arr[A[i]]++;
//         if (arr[A[i]] == m)
//         {
//             x = A[i];
//             break;
//         }
//     }
//     cout << x << endl;

// }

// int main()
// {
//     repeatedNTimes({2,1,2,5,3,2});
// }

// class Solution
// {
// public:
//     bool judgeCircle(string moves)
//     {
//         int lr = 0;
//         int ud = 0;
//         for (int i = 0; i < moves.length(); i++)
//         {
//             if (moves[i] == 'L')
//                 lr--;
//             else if (moves[i] == 'R')
//                 lr++;
//             else if (moves[i] == 'U')
//                 ud++;
//             else if (moves[i] == 'D')
//                 ud--;
//         }
//         if (lr == 0 && ud == 0)
//             return true;
//         return false;
//     }
// };

// int main()
// {
//     int n;
//     cin >> n;
//     int j = 0;
//     int y = 1;
//     for (int i = 0; i < n; i++)
//     {
//         cout << i + 1;
//         ++j;
//         if (j == y)
//         {
//             y++;
//             j = 0;
//             cout << '\n';
//         }
//     }
//     cout << endl;
// }

// class Solution
// {
// public:
//     vector<int> diStringMatch(string S)
//     {
//         int length = S.length();
//         int start = 0;
//         vector<int> ans;
//         for (char x : S)
//         {
//             if (x == 'I')
//             {
//                 ans.push_back(start);
//                 start++;
//             }
//             else
//             {
//                 ans.push_back(length);
//                 length--;
//             }
//         }
//         ans.push_back(start);
//         return ans;
//     }
// };
// class Solution
// {
// public:
//     int hammingDistance(int x, int y)
//     {
//         int count = 0;
//         int ans = x ^ y;
//         while (ans > 0)
//         {
//             if (ans % 2 == 0)
//                 count++;
//             ans /= 2;
//         }
//         return count;
//     }
// };

// class Solution
// {
// public:
//     int arrayPairSum(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         int ans = 0;
//         for (int i = 0; i < nums.size() - 1; i + 2)
//         {

//             ans += min(nums[i], nums[i + 1]);
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     vector<int> sortedSquares(vector<int> &A)
//     {
//         for (int i = 0; i < A.size(); i++)
//         {
//             A[i] = A[i] * A[i];
//         }
//         sort(A.begin(), A.end());
//         return A;
//     }
// };

// class Solution
// {
// public:
//     int peakIndexInMountainArray(vector<int> &v)
//     {
//         int maxElementIndex = std::max_element(v.begin(), v.end()) - v.begin();
//         return maxElementIndex;
//     }
// };

// int main()
// {
//     vector<int> arr = {1, 2};
//     sort(arr.begin(), arr.end());
//     vector<int> ans;
//     // cond = true;
//     int x = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (x != arr[i])
//         {
//             x = arr[i];
//             int freq = count(arr.begin(), arr.end(), x);
//             cout << x << ' ' << freq << endl;
//             // printVector(ans);
//             if (find(ans.begin(), ans.end(), freq) != ans.end())
//             {
//                  cout << "False" << endl;
//             }
//             else
//                 ans.push_back(freq);

//             cout << "Vector: ";
//             printVector(ans);
//         }
//     }
//     cout << "True" << endl;
// }

// class Solution
// {
// public:
//     int heightChecker(vector<int> &heights)
//     {
//         int count = 0;
//         vector<int> sortedHeights = heights;
//         sort(sortedHeights.begin(), sortedHeights.end());
//         for (int i = 0; i < heights.size(); i++)
//         {
//             if (heights[i] != sortedHeights[i])
//                 count++;
//         }
//         return count;
//     }
// };

// class Solution
// {
// public:
//     bool canMakeArithmeticProgression(vector<int> &arr)
//     {
//         sort(arr.begin(), arr.end());
//         int diff = arr[1] - arr[0];
//         for (int i = 1; i < arr.size(); i++)
//         {
//             if (arr[i] - arr[i - 1] != diff)
//                 return false;
//         }
//         return true;
//     }
// };

// class Solution
// {
// public:
//     vector<int> sumZero(int n)
//     {
//         vector<int> ans;
//         for (int i = 1; i < n; i += 2)
//         {
//             ans.push_back(i);
//             ans.push_back(-i);
//         }
//         if (n % 2 != 0)
//             ans.push_back(0);
//         return ans;
//     }
// };

// int invert(int n)
// {
//     if (n == 1)
//         return 0;
//     return 1;
// }

// vector<vector<int>> flipAndInvertImage(vector<vector<int>> A)
// {
//     for (int i = 0; i < A.size(); i++)
//     {
//         int x = A[0].size() - 1;
//         for (int j = 0; j < (A[0].size() / 2) + A[0].size() % 2; j++)
//         {
//             if (x == j)
//                 A[i][j] = invert(A[i][j]);
//             else
//             {
//                 swap(A[i][j], A[i][x]);
//                 A[i][j] = invert(A[i][j]);
//                 A[i][x] = invert(A[i][x]);
//                 x--;
//             }

//         }
//     }
//     return A;
// }

// int main()
// {
//     vector<vector<int>> x = flipAndInvertImage({{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}});
//     printMultiVector(x);
// }
// class Solution
// {
// public:
//     string generateTheString(int n)
//     {
//         string ans = "";
//         if (n % 2 == 0)
//         {
//             for (int i = 0; i < n - 1; i++)
//                 ans += 'a';
//             ans += 'b';
//             return ans;
//         }
//         else
//         {
//             for (int i = 0; i < n; i++)
//                 ans += 'a';
//             return ans;
//         }
//     }
// };

// vector<int> minSubsequence(vector<int> nums)
// {
//     sort(nums.begin(), nums.end(), greater<int>());
//     int count = 1;
//     vector<int> ans;
//     int x = nums[0];
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (count < 2)
//         {
//             if (nums[i] == x)
//             {
//                 ans.push_back(nums[i]);
//             }
//             else if (nums[i] != x)
//             {
//                 count++;
//                 x = nums[i];
//                 ans.push_back(x);
//             }
//         }
//         else
//             break;
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> ans = minSubsequence({4,3,10,9,8});
//     printVector(ans);
// }

// class Solution
// {
// public:
//     vector<int> luckyNumbers(vector<vector<int>> &matrix)
//     {
//         int maxInColAndRows = 0;
//         vector<int> ans;
//         vector<int> rows;
//         vector<vector<int>> matrix2 = matrix;
//         for (int i = 0; i < matrix2.size(); i++)
//         {
//             sort(matrix2[i].begin(), matrix2[i].end());
//             rows.push_back(matrix2[i][0]);
//         }

//         for (int i = 0; i < matrix[0].size(); i++)
//         {
//             int maxNumber = 0;
//             for (int j = 0; j < matrix.size(); j++)
//             {
//                 if (matrix[j][i] > maxNumber)
//                     maxNumber = matrix[j][i];
//             }
//             if (find(rows.begin(), rows.end(), maxNumber) != rows.end())
//             {
//                 ans.push_back(maxNumber);
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     vector<int> luckyNumbers(vector<vector<int>> &matrix)
//     {
//         vector<int> ans;
//         int r = matrix.size(), flag, x, minimum, maximum;
//         int c = matrix[0].size();
//         for (int i = 0; i < r; i++)
//         {
//             minimum = matrix[i][0];
//             x = 0;
//             for (int j = 0; j < c; j++)
//             {
//                 if (matrix[i][j] < minimum)
//                 {
//                     minimum = matrix[i][j];
//                     x = j;
//                 }
//             }
//             maximum = matrix[i][x];
//             flag = 1;
//             for (int j = 0; j < r; j++)
//             {
//                 if (matrix[j][x] > maximum)
//                 {
//                     flag = 0;
//                     break;
//                 }
//             }
//             if (flag == 1)
//                 ans.push_back(maximum);
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     string reverseWords(string s)
//     {
//         if (s == "")
//             return "";
//         else
//         {
//             string ans = "";
//             stringstream ss(s);
//             string word;
//             while (ss >> word)
//             {
//                 reverse(word.begin(), word.end());
//                 ans += word;
//                 ans += ' ';
//             }
//             ans.erase(ans.length() - 1, 1);
//             return ans;
//         }
//     }
// };

// class Solution
// {
// public:
//     vector<int> constructRectangle(int area)
//     {
//         int width;
//         int length;
//         vector<int> ans;
//         for (int i = 1; i <= sqrt(area); i++)
//         {
//             if (area % i == 0)
//             {
//                 width = i;
//                 length = area / i;
//             }
//         }
//         ans.push_back(length);
//         ans.push_back(width);
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     bool containsDuplicate(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         int num = nums[0];
//         for (int i = 1; i < nums.size(); i++)
//         {
//             if (nums[i] == num)
//                 return true;
//             else
//                 num = nums[i];
//         }
//         return false;
//     }
// };
// #include <unordered_map>
// bool containsNearbyDuplicate(vector<int> nums, int k)
// {
//     unordered_map<int, int> map;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (map.find(nums[i]) != map.end())
//         {
//             if ( <= k)
//                 return true;
//         }
//         else
//         {
//             map[nums[i]] = i;
//         }
//     }
//     return false;
// }

// int main()
// {
//     bool ans = containsNearbyDuplicate({1, 0, 1, 1}, 1);
//     cout << ans << endl;
// }

// int main()
// {
// string x = "j";
// int count = 0;
// int maxNumber = 0;
// char character = x[0];
// int ans = 0;
// for (int i = 0; i < x.length(); i++)
// {
//     if (character == x[i])
//     {
//         count ++;
//         maxNumber = count;
//     }
//     else
//     {
//         if (maxNumber < count)
//             ans = count;
//         count = 1;
//         character = x[i];
//     }
//     // maxNumber = ans;
// }
// cout << maxNumber << endl;
// }

// int maxPower(string x)
// {
//     int count = 0;
//     int maxNumber = 0;
//     char character = x[0];
//     // int ans = 0;
//     for (int i = 0; i < x.length(); i++)
//     {
//         if (character == x[i])
//         {
//             count++;
//             if (maxNumber < count)
//                 maxNumber = count;
//         }
//         else
//         {
//             if (maxNumber < count)
//                 maxNumber = count;
//             count = 1;
//             character = x[i];
//         }
//     }
//     return maxNumber;
// }

// int main()
// {
//     int res = maxPower("bacacccbba");
//     cout << res;
// }

// class Solution
// {
// public:
//     int countNegatives(vector<vector<int>> &grid)
//     {
//         int count = 0;
//         for (int i = 0; i < grid.size(); i++)
//         {
//             for (int j = 0; j < grid[0].size(); j++)
//             {
//                 if (grid[i][j] < 0){
//                     count += grid[0].size() - j;
//                     break;
//                 }

//             }
//         }
//         return count;
//     }
// };

// class Solution
// {
// public:
//     int countOdds(int low, int high)
//     {
//         if (low % 2 == 1)
//             return (high - low) / 2 + 1;
//         else
//             return (high - low + 1) / 2;
//     }
// };
// class Solution
// {
// public:
//     int arrangeCoins(int n)
//     {
//         int x = 1;
//         while (true)
//         {
//             n -= x;
//             x++;
//             if (n < 0)
//                 return x - 2;
//             else if (n == 0)
//                 return x - 1;
//         }
//     }
// };

// int main()
// {
//     vector<string> logs = {"./","wz4/","../","mj2/","../","../","ik0/","il7/"};
//     int result = 0;
//     for (int i = 0; i < logs.size(); i++)
//     {
//         if (logs[i] != "./" && logs[i] != "../")
//         {
//             cout << "First " << logs[i] << endl;
//             result += 2;
//         }
//         else if (logs[i] != "./")
//         {
//             cout << "Second " << logs[i] << endl;
//             if (result -= 2 >= 0)
//                 result -= 2;
//         }
//         cout << result << endl;
//     }
// }

// class Solution
// {
// public:
//     int minOperations(vector<string> &logs)
//     {
//         stack<string> ret;
//         for (auto w : logs)
//         {
//             if (!ret.empty() && w.substr(0, 2) == ".." && w[w.length() - 1] == '/')
//             {
//                 ret.pop();
//             }
//             else if (w[0] == '.')
//             {
//                 continue;
//             }
//             else
//             {
//                 ret.push(w.substr(0, w.length() - 1));
//             }
//         }
//         return ret.size();
//     }
// };

// int fact(int i)
// {
//     if (i == 0 || i == 1)
//         return 1;
//     else
//         return i * fact(i - 1);
// }

// int main()
// {
//     int x = fact(5);
//     cout << x << endl;
// }

// int main()
// {
//     string sent = "CBCCDXYZD";
//     string pattern = "CD";
//     for (int i = 0; i < sent.size(); i++)
//     {
//         if (sent[i] == pattern[0] && sent[i + pattern.length() - 1] == pattern[pattern.length() - 1])
//         {
//             cout << i << endl;
//             break;
//         }
//     }
// }

// int findPattern(string T, string P)
// {
//     int p1 = 0;
//     int p2 = T.length() - 1;

//     bool cond = false;
//     bool condP1 = false;
//     bool condP2 = false;

//     for (int i = 0; i < T.length(); i++)
//     {
//         if (p1 == P[0] && p2 - p1 == P.length() - 1)
//         {
//             cond = true;
//             condP1 = true;
//         }
//         else
//         {
//             condP1 = true;
//             cond = false;
//         }
//         if (p2 == P[P.length() - 1] && p2 - p1 == P.length() - 1)
//         {
//             cond = true;
//             condP2 = true;
//         }
//         else
//         {
//             condP2 = false;
//             cond = false;
//         }
//         if (!condP1)
//             p1++;
//         if (!condP2)
//             p2--;
//         if (cond)
//             return p1;
//     }
//     // return 99;
// }

// int main()
// {
//     int x = findPattern("XXABCDfsaEF", "CD");
//     cout << x << endl;
// }

// int main()
// {
//     int x, y;

//     while (true)
//     {
//         cin >> x >> y;
//         cout << x % y << endl;
//     }
// }

// class Solution {
// public:
//     int findContentChildren(vector<int>& g, vector<int>& s) {

//         int m = g.size(), n = s.size(), count1 = 0, count2 = 0, ans = 0;

//         sort(g.begin(), g.end(), greater<int>());
//         sort(s.begin(), s.end(), greater<int>());

//         while (count1 < m && count2 < n)
//         {
//             if (g[count1] <= s[count2])
//             {
//                 ans++;
//                 count1++;
//                 count2++;
//             }
//             else if (g[count1 > s[count2]])
//             {
//                 count1++;
//             }
//         }

//         return ans;
//     }
// };
// class Solution {
// public:
//     int mySqrt(int x) {
//         return (int)sqrt(x);
//     }
// };
// class Solution
// {
// public:
//     bool isPerfectSquare(long int n)
//     {
//         long int i = 0;
//         while (i < n)
//             i++;
//         if (i == n)
//             return true;
//         else
//             return false;
//     }
// };

// int main()
// {
//     Solution s1;
//     cout << s1.isPerfectSquare(5);
// }

// class Solution
// {
// public:
//     bool isPerfectSquare(int num)
//     {
//         long long a = 1;
//         long long i = 3;
//         while (a <= num)
//         {
//             if (a == num)
//             {
//                 return true;
//             }
//             a += i;
//             i += 2;
//         }
//         return false;
//     }
// };
// bool isUgly(int num)
// {
//     if (num == 0)
//         return false;
//     while (num % 2 == 0)
//     {
//         num = num / 2;
//     }
//     while (num % 3 == 0)
//     {
//         num = num / 3;
//     }
//     while (num % 5 == 0)
//     {
//         num = num / 5;
//     }
//     if (num == 1)
//         return true;
//     return false;
// }

// class Node
// {
//     public:
//     int data;
//     Node *next;
// };

// void printLinkedList(Node *n)
// {
//     while (n != NULL)
//     {
//         cout << n->data << ' ';
//         n = n->next;
//     }
// }
// int main()
// {
//     Node *head = NULL, *first = NULL, *second = NULL;
//     head = new Node();
//     first = new Node();
//     second = new Node();

//     head->data = 1;
//     head->next = first;

//     first->data = 2;
//     first->next = second;

//     second->data = 3;
//     second->next = NULL;

//     printLinkedList(head);
// }

// int main()
// {
// 	vector<int> arr = {22, 4, 15, 9, 3, 11, 33, 7, -12, 0, 22, 6, 6, -33, -74, 58, 49, 18, 20, 23, 4, 3, -31, -5, 30};
// 	int count = 0;
// 	for (int i = 0; i < arr.size(); i++)
// 	{
// 		for (int j = i + 1; j < arr.size(); j++)
// 		{
// 			if (i != j && arr[i] + arr[j] == 25)
// 			{
// 				cout << arr[i] << " + " << arr[j] << " = " << 25 << endl;
// 				count++;
// 			}
// 		}
// 	}
// 	cout << "The Total Number of pairs are: " << count << endl;
// }
// bool cmp(pair<int, int> &a, pair<int, int> &b)
// {
//     return a.second < b.second;
// }

// class Solution
// {
// public:
//     vector<int> frequencySort(vector<int> &nums)
//     {
//         vector<int> ans;
//         map<int, int> mymap;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             mymap[nums[i]] = 0;
//             for (int j = 0; j < nums.size(); j++)
//             {
//                 if (nums[i] == nums[j])
//                     mymap[nums[i]]++;
//             }
//         }
//         vector<pair<int, int>> A;
//         for (auto &it : mymap)
//         {
//             A.push_back(it);
//         }
//         sort(A.begin(), A.end(), cmp);

//         for (auto &x : A)
//         {
//             for (int i = 0; i < x.second; i++)
//                 ans.push_back(x.first);
//         }
//         return ans;
//     }
// };

// class Solution
// {
// public:
//     vector<int> frequencySort(vector<int> &a)
//     {
//         vector<int> c(201);
//         int m = 0;
//         // count frequency of each value noting the highest frequency
//         for (int n : a)
//         {
//             int i = n + 100;
//             c[i]++;
//             m = max(m, c[i]);
//         }
//         vector<vector<int>> v(m + 1);
//         // loop over counting vector backwards using frequency as the index
//         for (int i = c.size() - 1; i > -1; i--)
//         {
//             int n = i - 100;
//             if (c[i] > 0)
//                 v[c[i]].push_back(n);
//         }
//         int l = -1;
//         // overwrite original vector
//         for (int i = 0; i < v.size(); i++)
//         {
//             for (int j = 0; j < v[i].size(); j++)
//             {
//                 int k = i;
//                 while (k-- > 0)
//                     a[++l] = v[i][j];
//             }
//         }
//         return a;
//     }
// };

// void calculateFactorial(int x)
// {
//     int result = 1;
//     for (int i = x; i > 0; i--)
//     {
//         result *= i;
//     }
//     cout << result << endl;
// }
// void fibonacci(int range)
// {
//     int x = 1;
//     int y = 1;
//     while (range > 0)
//     {
//         cout << x << endl;
//         int temp = x;
//         x += y;
//         y = temp;
//         range--;
//     }
// }

// void ArmStrong(int x)
// {
//     int sum = 0;
//     int xCopy = x;
//     string secCopy = to_string(x);
//     int length = secCopy.length();
//     while (x > 0)
//     {
//         int y = x % 10;
//         x /= 10;
//         sum += pow(y, length);
//     }

//     if (sum == xCopy)
//         cout << xCopy << " is ArmStrong number." << endl;
//     else
//         cout << xCopy << " is not ArmStrong number." << endl;
// }

// void printTable(int x)
// {
//     for (int i = 1; i <= x; i++)
//     {
//         cout << x << " ";
//         for (int j = 1; j <= x; j++)
//         {
//             cout << i * j << " ";
//         }
//         cout << endl;
//     }
// }

// void seriesThree(int x)
// {
//     int i = 1;
//     int j = 1;
//     while (i <= x)
//     {
//         int y = i;
//         while( y > 0)
//         {
//             cout << j << ' ';
//             y --;
//             j++;
//         }
//         i++;
//         cout << endl;

//     }
// }
// int main()
// {
//     seriesThree(4);
// }

// int main()
// {
//     cout << floor(5.59) << endl;
// }
// class Solution {
// public:
//     int specialArray(vector<int>& nums) {
//         int length = nums.size();
//         int count = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] >= length)
//                 count++;
//         }
//         if (count == 0)
//             return -1;
//         return count;
//     }
// };

// class Solution {
// public:
//     int specialArray(vector<int>& nums) {
//         int ans = -1;
// 		int n = nums.size();

// 		for(int i=0;i<=n;i++){

// 			int count = 0;
// 			int x = i;

// 			for(int j=0;j<n;j++)
// 				if(nums[j] >= x)
//                     count++;

// 			if(count == x){
// 				ans = x;
// 				break;
// 			}

// 		}

// 		return ans;
//     }
// };

// char slowestKey(vector<int> releaseTimes, string keysPressed)
// {
//     map<char, int> x;
//     x[keysPressed[0]] = releaseTimes[0];
//     for (int i = 1; i < releaseTimes.size(); i++)
//     {
//         if (x.find(keysPressed[i]) != x.end() && x[keysPressed[i]] < releaseTimes[i] - releaseTimes[i - 1])
//         {
//             x[keysPressed[i]] = releaseTimes[i] - releaseTimes[i - 1];
//         }
//         else if (x.find(keysPressed[i]) == x.end())
//         {
//             x[keysPressed[i]] = releaseTimes[i] - releaseTimes[i - 1];
//         }

//     }

//     std::map<char, int>::iterator best = std::max_element(x.begin(), x.end(), [](const std::pair<char, int> &a, const std::pair<char, int> &b) -> bool { return a.second < b.second; });
//     int maxVal = best->second;
//     int ans = 0;
//     char ansChar;
//     for (auto &y : x)
//     {
//         if (y.second == maxVal)
//         {
//             if (int(y.first) > ans)
//                 ansChar = y.first;
//         }
//     }

//     return ansChar;
// }
// class Solution {
// public:
//     char slowestKey(vector<int>& releaseTimes, string keysPressed) {
//         char ans = keysPressed[0];
//         int time = releaseTimes[0];

//         for (int i = 1; i < keysPressed.size(); ++i) {
//             if (releaseTimes[i] - releaseTimes[i - 1] > time) {
//                 time = releaseTimes[i] - releaseTimes[i - 1];
//                 ans = keysPressed[i];
//             } else if (releaseTimes[i] - releaseTimes[i - 1] == time) {
//                 ans = max(ans, keysPressed[i]);
//             }
//         }

//         return ans;
//     }
// };
// int main()
// {
//     char ans =  slowestKey({19, 22, 28, 29, 66, 81, 93, 97 }, "fnfaaxha");
//     cout << ans << endl;
// }

// class Solution
// {
// public:
//     int smallestRangeI(vector<int> &A, int k)
//     {
//         sort(A.begin(), A.end());
//         int a = *min_element(A.begin(), A.end());
//         int b = *max_element(A.begin(), A.end());
//         int m = INT_MAX;
//         for (int i = -k; i <= k; i++)
//         {
//             if (b - k - a - i >= 0 && m > (b - k - a - i))
//                 m = b - k - a - i;
//         }
//         return m;
//     }
// };

// int main()
// {
//     int maxElement = *max_element(A.begin(), A.end());
//     int minElement = *min_element(A.begin(), A.end());

//     if ((maxElement - 2 * k - minElement) < 0)
//         return 0;
//     else
//         return maxElement - 2 * k - minElement;
// }

// class Solution {
// public:
//     bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
//         string s1, s2;
//         for (int i = 0; i < word1.size(); i++)
//         {
//             s1 += word1[i];
//         }
//         for (int i = 0; i < word2.size(); i++)
//         {
//             s2 += word2[i];
//         }
//         if (s1 == s2)
//             return true;
//         return false;
//     }
// };

// int main()
// {
//     int n = 5;
//     int k = 73;
//     int factor = 26;
//     for (int i = 0; i < n; i++)
//     {
//         if( k >= 0)
//         {
//             k -= factor;
//             factor -= 1;
//             cout << factor << endl;
//         }
//     }
// }

// int main()
// {
//     vector<int> nums = {4,5,2,2,1,1,4,4,5,3,2,3,5,3,2,1,2,1,1,3,3,3,5,1,1,2,3};
//     int index = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int oddSize = 0;
//         int evenSize = 0;
//         int count = 0;
//         for (int j = 0; j < nums.size(); j++)
//         {
//             if (j != i)
//             {
//                 if (count % 2 == 0)
//                 {
//                     // cout << "EVEN " << nums[j] << endl;
//                     evenSize += nums[j];
//                 }

//                 else
//                 {
//                     // cout << "ODD " << nums[j] << endl;
//                     oddSize += nums[j];
//                 }
//                 count ++;
//             }
//             else
//             {
//                 continue;
//             }

//         }
//         // cout << evenSize << " " << oddSize << endl;
//         if (oddSize == evenSize)
//         {
//             index = i;
//         }

//     }
//     cout << index << endl;
// }

// int main()
// {
//     stack<int> s;
//     s.push(5);
//     s.push(4);
//     s.push(1);
//     s.push(9);
//     s.push(3);

//     cout << s.size() << endl;
//     s.pop();
//     cout << s.top() << endl;
//     cout << s.size() << endl;

//     if (s.empty())
//         cout << "LMFAO, dead" << endl;
//     else
//         cout << "NOOO" << endl;
// }

// void merge(int arr[], int l, int m, int r)
// {
//     int n1 = m - l + 1;
//     int n2 = r - m;

//     // Create temp arrays
//     int L[n1], R[n2];

//     // Copy data to temp arrays L[] and R[]
//     for (int i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];

//     // Merge the temp arrays back into arr[l..r]

//     // Initial index of first subarray
//     int i = 0;

//     // Initial index of second subarray
//     int j = 0;

//     // Initial index of merged subarray
//     int k = l;

//     while (i < n1 && j < n2)
//     {
//         if (L[i] <= R[j])
//         {
//             arr[k] = L[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     // Copy the remaining elements of
//     // L[], if there are any
//     while (i < n1)
//     {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     // Copy the remaining elements of
//     // R[], if there are any
//     while (j < n2)
//     {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// // l is for left index and r is
// // right index of the sub-array
// // of arr to be sorted */
// void mergeSort(int arr[], int l, int r)
// {
//     if (l >= r)
//     {
//         return; //returns recursively
//     }
//     int m = (l + r - 1) / 2;
//     mergeSort(arr, l, m);
//     mergeSort(arr, m + 1, r);
//     merge(arr, l, m, r);
// }

// // UTILITY FUNCTIONS
// // Function to print an array
// void printArray(int A[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << A[i] << " ";
// }

// // Driver code
// int main()
// {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int arr_size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Given array is \n";
//     printArray(arr, arr_size);

//     mergeSort(arr, 0, arr_size - 1);

//     cout << "\nSorted array is \n";
//     printArray(arr, arr_size);
//     return 0;
// }

// int getMax(int arr[], int n)
// {
//     int mx = arr[0];
//     for (int i = 1; i < n; i++)
//         if (arr[i] > mx)
//             mx = arr[i];
//     return mx;
// }
// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// // A function to do counting sort of arr[] according to
// // the digit represented by exp.
// void countSort(int arr[], int n, int exp)
// {
//     int output[n]; // output array
//     int i, count[10] = {0};

//     // Store count of occurrences in count[]
//     for (i = 0; i < n; i++)
//         count[(arr[i] / exp) % 10]++;

//     // Change count[i] so that count[i] now contains actual
//     //  position of this digit in output[]
//     for (i = 1; i < 10; i++)
//         count[i] += count[i - 1];
//     int n2 = sizeof(count) / sizeof(count[0]);
//     print(count, n2);
//     // Build the output array
//     for (i = n - 1; i >= 0; i--)
//     {
//         output[count[(arr[i] / exp) % 10] - 1] = arr[i];
//         count[(arr[i] / exp) % 10]--;
//     }

//     cout << endl;
//     print(output, n);
//     cout << endl;

//     // Copy the output array to arr[], so that arr[] now
//     // contains sorted numbers according to current digit
//     for (i = 0; i < n; i++)
//         arr[i] = output[i];
// }

// // The main function to that sorts arr[] of size n using
// // Radix Sort
// void radixsort(int arr[], int n)
// {
//     // Find the maximum number to know number of digits
//     int m = getMax(arr, n);

//     // Do counting sort for every digit. Note that instead
//     // of passing digit number, exp is passed. exp is 10^i
//     // where i is current digit number
//     for (int exp = 1; m / exp > 0; exp *= 10)
//         countSort(arr, n, exp);
// }

// // A utility function to print an array

// // Driver Code
// int main()
// {
//     int arr[] = {53, 89, 150, 36, 633, 233};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Function Call
//     radixsort(arr, n);
//     print(arr, n);
//     cout << endl;
// }
/* C++ implementation of QuickSort */

// A utility function to swap two elements
// void swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high]; // pivot
//     int i = (low - 1);     // Index of smaller element

//     for (int j = low; j <= high - 1; j++)
//     {
//         // If current element is smaller than the pivot
//         if (arr[j] < pivot)
//         {
//             i++; // increment index of smaller element
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return (i + 1);
// }

// void quickSort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         /* pi is partitioning index, arr[p] is now
// 		at right place */
//         int pi = partition(arr, low, high);

//         // Separately sort elements before
//         // partition and after partition
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// // Driver Code
// int main()
// {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     quickSort(arr, 0, n - 1);
//     cout << "Sorted array: \n";
//     printArray(arr, n);
//     return 0;
// }
// class Solution
// {
// public:
//     int maxArea(vector<int> &height)
//     {
//         int maxArea = 0;
//         for (int i = 0; i < height.size(); i++)
//         {
//             for (int j = 1; j < height.size(); j++)
//             {
//                 maxArea = max(maxArea, min(height[i], height[j]) * (j - i));
//             }
//         }
//         return maxArea;
//     }
// };

// class Solution
// {
// public:
//     int maxArea(vector<int> &height)
//     {
//         int maxArea = 0;
//         int leftPointer = 0;
//         int rightPointer = height.size() - 1;
//         while (leftPointer < rightPointer)
//         {
//             maxArea = max(maxArea, min(height[leftPointer], height[rightPointer]) * (rightPointer - leftPointer));
//             if (height[leftPointer] < height[rightPointer])
//                 leftPointer++;
//             else
//                 rightPointer--;
//         }

//         return maxArea;
//     }
// };

// int main()
// {
//     vector<int> nums = {-1, 0, 1, 2, -1, -4};
//     sort(nums.begin(), nums.end());
//     printVector(nums);
//     for (int i = 0; i < nums.size(); i += 2)
//     {
//         int ans = 0;
//         for (int j = i; j < 3; j++)
//         {
//             ans += nums[j];
//         }
//         if (ans = 0)
//         {
//             cout << i << endl;
//         }
//     }
// }

// class Solution
// {
// public:
//     int removeElement(vector<int> &nums, int val)
//     {
//         int ans = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] != val)
//             {
//                 nums[ans] = nums[i];
//                 ans++;
//             }
//         }
//         return ans;
//     }
// };

// Binary Search

// int main()
// {
//     int arr[] = {1, 2, 4, 6, 7};
//     int a = 0;
//     int x = 10;
//     int b = sizeof(arr) / sizeof(arr[0]);
//     while(a <= b)
//     {
//         int k = (a + b)/2;
//         if (arr[k] == x)
//         {
//             cout << k << endl;
//             break;
//         }
//         if (arr[k] > x)
//             b = k - 1;
//         else
//             a = k + 1;
//     }
// }

// int main()
// {
//     multiset<int> a;
//     a.insert(1);
//     a.insert(7);
//     a.insert(2);
//     a.insert(2);
//     a.insert(7);

//     // cout << a.count(7) << endl;
//     a.erase(2);
//     for (auto x: a)
//         cout << x << endl;
// }

// int main()
// {
//     queue<int> d;
//     d.push(1);
//     d.push(2);
//     d.push(3);

//     cout << d.back() << endl;
//     cout << d.front() << endl;
// }

// class Solution {
// public:
//     vector<int> mostCompetitive(vector<int>& nums, int k) {
//         vector<int> s;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             while (!s.empty() && s.back() > nums[i] && s.size() + nums.size() - i > k)
//                 s.pop_back();
//             if (s.size() < k)
//                 s.push_back(nums[i]);
//         }
//         return s;
//     }
// };

// int main()
// {
//     vector<int> nums = {1,2,4,3};
//     int limit = 4;
//     int count = 0;
//     int n = nums.size();
//     int x = nums[0] + nums[n - 1];
//     for (int i = 0; i < n / 2; i++)
//     {
//         if (nums[i] + nums[n - 1 - i] != x)
//             count++;
//     }
//     cout << count << endl;
// }
// class Solution {
// public:
//     int minimumDeviation(vector<int>& nums) {
//         int res = INT_MAX, min_n = INT_MAX;
//         priority_queue<int> pq;
//         for (auto n : nums) {
//             n = n % 2 ? n * 2 : n;
//             pq.push(n);
//             min_n = min(min_n, n);
//         }
//         while (pq.top() % 2 == 0) {
//             res = min(res, pq.top() - min_n);
//             min_n = min(min_n, pq.top() / 2);
//             pq.push(pq.top() / 2);
//             pq.pop();
//         }
//         return min(res, pq.top() - min_n);
//     }
// };

// void TOH(int n, int A, int B, int C)
// {
//     if (n > 0)
//     {
//         TOH(n - 1, A, C, B);
//         cout << "( " << A << ' ' << C << " )" << endl;
//         TOH(n - 1, B, A, C);
//     }
// }
// int main()
// {
//     TOH(3, 1, 2, 3);
// }

// class Solution
// {
// public:
//     bool isValid(string s)
//     {
//         string a = "";
//         for (size_t i = 0; i < s.size(); ++i)
//         {
//             if (match(a.back(), s[i]))
//             {
//                 a.pop_back();
//             }
//             else
//             {
//                 a.push_back(s[i]);
//             }
//         }
//         return (a.size() == 0);
//     }
//     bool match(char t1, char t2)
//     {
//         if (t1 == '(' && t2 == ')')
//         {
//             return true;
//         }
//         if (t1 == '[' && t2 == ']')
//         {
//             return true;
//         }
//         if (t1 == '{' && t2 == '}')
//         {
//             return true;
//         }
//         return false;
//     }
// };

// int main()
// {
//     Solution s1;
//     cout << s1.isValid("()");
// }

// void isValid(string s)
// {
//     stack<char> st;
//     int factor = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '(' || s[i] == '[' || s[i] == '{')
//         {
//             st.push(s[i]);
//             factor ++;
//         }
//         else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
//             factor--;
//         if (s[i] == ')' && !st.empty() && st.top() == '(')
//             st.pop();
//         else if (s[i] == '}' && !st.empty() && st.top() == '{')
//             st.pop();
//         else if (s[i] == ']' && !st.empty() && st.top() == '[')
//             st.pop();
//     }

//     if (st.empty() && factor == 0)
//         cout << "VALID" << endl;
//     else
//     {
//         cout << "NOT VALID" << endl;
//     }

// }

// int main()
// {
//     isValid("{}");
// }

// int main()
// {
//     string s = "0P";
//     int n = s.length() - 1;
//     string newString = "";
//     for (int i = 0; i < s.length(); i++)
//     {
//         if ((int)tolower(s[i]) >= 97 && (int)tolower(s[i]) <= 122)
//             newString += tolower(s[i]);
//     }
//     bool result = true;
//     cout << newString << endl;
//     for(int i = 0; i < newString.length() / 2; i++)
//     {
//         if (newString[i] != newString[newString.length() - 1 - i])
//         {
//             result = false;
//             break;
//         }
//     }
//     if (result)
//         cout << "YEs" << endl;
//     else
//     {
//         cout << "NO" << endl;
//     }

// }

// int fun1(int x, int y)
// {
//     if (x == 0)
//         return y;
//     else
//     {
//         return fun1(x - 1, x + y);
//     }
// }
// int fun1(int n)
// {
//     if (n == 1)
//         return 0;
//     else
//         return 1 + fun1(n / 2);
// }

// int main()
// {
//     cout << fun1(15) << endl;
// }

// int Q(int x, int y)
// {
//     if (x < y)
//         return 5;
//     else
//         return Q(x - y, y + 2) + x;
// }

// int main()
// {
//     cout << Q(15, 2) << endl;
// }

// int main()
// {
//     int x, y;
//     while(true)
//     {
//         cin >> x >> y;
//         cout << x % y << endl;
//     }
// }

// void commonChild(string s1, string s2) {
//     string ans = "";
//     for (int i = 0; i < s1.length(); i++)
//     {
//         size_t found = s2.find(s1[i]);
//         if (found != string::npos)
//             ans += s1[i];
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         bool cond = true;
//         int forFirstString = s1.find(ans[i]);
//         int forSecondString = s2.find(ans[i]);
//         cout << ans[i] << ' '<< forFirstString << ' ' << forSecondString << endl;
//         for (int j = 0; j < ans.size(); j++)
//         {
//             if (j != i)
//             {
//                 int anotherIndexes = s1.find(ans[j]);
//                 int anotherIndexes2 = s2.find(ans[j]);
//                 // cout << '\t' << anotherIndexes << ' ' << anotherIndexes2 << endl;
//                 if (forFirstString > anotherIndexes)
//                 {
//                     cout << anotherIndexes << endl;
//                 }
//             }
//         }

//     }

// }
// int main()
// {
//     commonChild("SHINCHAN", "NOHARAAA");
// }
// int main()
// {
//     vector<int> nums = {1, 3, 5};
//     for (int i = 0; i < nums.size() - 1; i += 2)
//         cout << i << endl;
// }

// class Solution
// {
// public:
//     int searchInsert(vector<int> &nums, int target)
//     {
//         if (target > nums[nums.size() - 1])
//             return nums.size();
//         else if (target < nums[0])
//             return 0;
//         else
//         {
//             int a = 0;
//             int b = nums.size() - 1;
//             while (a <= b)
//             {
//                 int mid = (a + b) / 2;
//                 if (nums[mid] == target)
//                 {
//                     return mid;
//                 }
//                 if (nums[mid] > target)
//                     b = mid - 1;
//                 else
//                     a = mid + 1;
//             }
//             int index = 0;
//             for (int i = 0; i < nums.size() - 1; i++)
//             {
//                 if (target >= nums[i] && target <= nums[i + 1])
//                 {
//                     index = i + 1;
//                     break;
//                 }
//             }
//             return index;
//         }
//     }
// };

// class Solution {
// public:
//     int kthFactor(int n, int k) {
//         vector<int> factors;
//         for (int i = 1; i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 factors.push_back(i);
//             }
//         }
//         if (factors.size() < k)
//                 return -1;
//         return factors[k - 1];
//     }
// };

// class Solution
// {
// public:
//     bool validPal(string s, int i, int j)
//     {
//         while (i <= j)
//         {
//             if (s[i] != s[j])
//                 return false;
//             i++;
//             j--;
//         }
//         return true;
//     }
//     bool validPalindrome(string s)
//     {
//         int i = 0;
//         int j = s.length() - 1;
//         while (i <= j)
//         {
//             if (s[i] != s[j])
//                 return validPal(s, i, j - 1) || validPal(s, i + 1, j);
//             i++;
//             j--;
//         }
//         return true;
//     }
// };

// void hourglassSum(vector<vector<int>> arr) {
//     int ans = 0;
//     for (int i = 0; i <= 3; i++)
//     {
//         int y = 1;
//         for (int j = 0; j <= 3; j++)
//         {
//             int sum = 0;

//             for (int k = 0; k < 3; k++)
//             {
//                 sum += arr[i][j + k];
//                 sum += arr[i + 2][j + k];
//             }
//             sum += arr[i + 1][y];
//             y++;
//             ans = max(ans, sum);
//         }
//     }
//     cout << ans << endl;

// }

// int main()
// {
//     hourglassSum({{1, 1, 1, 0, 0, 0}, {0, 1, 0, 0, 0, 0},{1, 1, 1, 0, 0, 0},{0, 0, 2, 4, 4, 0},{0, 0, 0, 2, 0, 0},{0, 0, 1, 2, 4, 0}});
// }

// void rotLeft(vector<int> a, int d) {
//     vector<int> ans(a.size(), 0);
//     for (int i = 0; i < a.size(); i++)
//     {
//         int index = i - d;
//         if (index < 0)
//             index = a.size() + index;
//         ans[index] = a[i];
//     }
//     printVector(ans);

// }

// int main()
// {
//     rotLeft({1, 2, 3, 4, 5}, 4);
// }

// void minimumBribes(vector<int> q)
// {
//     int ans = 0;
//     for (int i = q.size() - 1; i >= 0; i--)
//     {
//         for (int j = max(0, q[i] - 2); j < i; j++)
//             cout << q[j] << ' ' << q[i] << endl;
//     }
//         // int count = 0;
//         // bool chaotic = false;
//         // vector<int> sortedQ = q;
//         // sort(sortedQ.begin(), sortedQ.end());
//         // printVector(q);
//         // printVector(sortedQ);
//         // map<int, int> indexes;
//         // for (int i = 0; i < q.size(); i++)
//         // {
//         //     indexes[q[i]] = i;
//         // }
//         // for (int i = 0; i < q.size(); i++)
//         // {
//         //     auto it = find(sortedQ.begin(), sortedQ.end(), q[i]);
//         //     int index = it - sortedQ.begin();
//         //     // cout << q[i] << " Sorted: " << index << " Original: " << indexes[q[i]] << endl;
//         //     if (indexes[q[i]] < index)
//         //     {
//         //         cout << q[i] << endl;
//         //         int x = index - indexes[q[i]];
//         //         if (x > 2)
//         //         {
//         //             chaotic = true;
//         //             break;
//         //         }
//         //         else
//         //         {
//         //             count += x;
//         //         }
//         //     }
//         // }
//         // if (chaotic)
//         //     cout << "Too chaotic" << endl;
//         // else
//         // {
//         //     cout << count << endl;
//         // }
//     }

//     int main()
//     {
//         minimumBribes({1, 2, 5, 3, 7, 8, 6, 4});
//     }

// int main()
// {
//     vector<int> nums = {4,1,2,1,2};
//     sort(nums.begin(), nums.end());
//     if (nums.size() == 1 || nums[0] != nums[1])
//         return nums[0];
//     if (nums[nums.size() - 1] != nums[nums.size() - 2])
//         return nums[nums.size() - 1];
//     for (int i = 0; i < nums.size() - 1; i++)
//     {
//         if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
//             return nums[i];
//     }
// }

// void solve(string text) {
//     string chars = "abcdefghijklmnopqrstuvwxyz";
//     string ans = "";
//     vector<int> ans2;
//     for (int i = 0; i < text.length(); i++)
//     {
//         int x = 25 - chars.find(text[i]);
//         ans += chars[x];
//     }
//     cout << ans <<
// }

// int main()
// {
//     solve("abcdef");
// }

// class Solution
// {
// public:
//     bool isAnagram(string s, string t)
//     {
//         if (s.length() != t.length())
//             return false;
//         else
//         {
//             vector<int> counts(26, 0);
//             for (int i = 0; i < i < s.length(); i++)
//             {
//                 count[s[i] - 'a']++;
//             }
//             for (int i = 0; i < t.length(); i++)
//             {
//                 count[t[i] - 'a']--;
//                 if (count[t[i] - 'a'] < 0)
//                     return false;
//             }
//         }
//         return true;
//     }
// };

// class Solution
// {
// public:
//     int maximalSquare(vector<vector<char>> &matrix)
//     {
//         int h = matrix.size();
//         int w = matrix[0].size();
//         if (h == 0 || matrix[0].empty())
//             return 0;
//         vector<vector<int>> dp(h, vector<int>(w));
//         int ans = 0;
//         for (int i = 0; i < h; i++)
//         {
//             for (int j = 0; j < w; j++)
//             {
//                 if (matrix[i][j] == '1')
//                 {
//                     dp[i][j] = 1;
//                     if (i > 0 && j > 0)
//                         dp[i][j] += min({dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]});
//                 }

//                 ans = max(ans, dp[i][j]);
//             }
//         }
//         return ans * ans;
//     }
// };

// void howManyGames(int p, int d, int m, int s) {
//     // Return the number of games you can buy
//     int count = 0;
//     int lastCost = 0;
//     while (s >= lastCost)
//     {
//         // count++;
//         // s -= p;
//         // p = max(p - d, m);
//         if (count == 0)
//         {
//             lastCost = p;
//             s -= lastCost;
//             count++;
//         }
//         else if (s - lastCost > m)
//         {
//             lastCost -= d;
//             s -= lastCost;
//             count++;
//         }
//         else
//         {
//             s -= m;
//             count++;
//         }
//     }
//     cout << count << endl;
// }

// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         int dp[m][n];
//         for (int i = 0; i < m; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (i == 0 || j == 0)
//                     dp[i][j] = 1;
//                 else
//                     dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//             }
//         }
//         return dp[m - 1][n - 1];
//     }
// };

// int main()
// {
//     Solution s1;
//     cout << s1.uniquePaths(3, 2) << endl;
// }

// void makeMatrix(int n)
// {
//     vector<vector<int>> mat(n, vector<int>(n));
//     int row = 0;
//     int column = 0;
//     int shrink = 0;
//     bool rDone = false;
//     bool dDone = false;
//     bool lDone = false;
//     bool doit = false;
//     bool uDone = false;
//     for (int i = 0; i < n * n; i++)
//     {
//         if(!rDone && column < n - shrink)
//         {
//             mat[row][column] = i + 1;
//             column++;
//         }
//         else if (!rDone && column == n - shrink)
//         {
//             row ++;
//             column --;
//             rDone = true;
//         }
//         if (rDone && !dDone && row < n - shrink)
//         {
//             mat[row][column] = i + 1;
//             row ++;
//         }
//         else if (rDone && !dDone && row == n - shrink)
//         {
//             dDone = true;
//             row --;
//             column --;
//             // cout << "Second " << row << ' ' << column << endl;
//         }
//         if (rDone && dDone && !lDone && !doit && column >= shrink)
//         {
//             mat[row][column] = i + 1;
//             column--;
//         }
//         else if (rDone && dDone && !lDone && column == shrink - 1)
//         {
//             // cout << "LEFT2 " << row << ' ' << column <<' ' << i + 1 << endl;
//             lDone = true;
//             column++;
//             row--;
//         }
//         if (rDone && dDone && lDone && !uDone && row - 1 > shrink)
//         {
//             cout << "Up " << row << ' ' << column <<' ' << i + 1 << endl;
//             mat[row][column] = i + 1;
//             row --;
//         }
//         else if (rDone && dDone && lDone && !uDone && row - 1 == shrink)
//         {
//             mat[row][column] = i + 1;
//             column++;
//             rDone = false;
//             dDone = false;
//             lDone = false;
//             uDone = false;
//             shrink++;
//         }
//     }
//     printMultiVector(mat);
// }

// int main()
// {
//     makeMatrix(1);
// }
// class Solution
// {
// public:
//     vector<vector<int>> generateMatrix(int n)
//     {

//         vector<vector<int>> result(n, vector<int>(n));
//         int cnt = 1;
//         for (int layer = 0; layer < (n + 1) / 2; layer++)
//         {
//             // direction 1 - traverse from left to right
//             for (int ptr = layer; ptr < n - layer; ptr++)
//             {
//                 result[layer][ptr] = cnt++;
//             }
//             // direction 2 - traverse from top to bottom
//             for (int ptr = layer + 1; ptr < n - layer; ptr++)
//             {
//                 result[ptr][n - layer - 1] = cnt++;
//             }
//             // direction 3 - traverse from right to left
//             for (int ptr = n - layer - 2; ptr >= layer; ptr--)
//             {
//                 result[n - layer - 1][ptr] = cnt++;
//             }
//             // direction 4 - traverse from bottom to top
//             for (int ptr = n - layer - 2; ptr > layer; ptr--)
//             {
//                 result[ptr][layer] = cnt++;
//             }
//         }

//         return result;
//     }
// };

// class Solution
// {
// public:
//     int numPairsDivisibleBy60(vector<int> &time)
//     {
//         int count[60] = {0};
//         int result = 0;
//         for (int i = 0; i < time.size(); i++)
//         {
//             result += count[(60 - time[i] % 60) % 60];
//             count[time[i] % 60]++;
//         }
//         return result;
//     }
// };

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class BSTIterator
// {
// public:
//     vector<int> values;
//     int idx = 0;
//     void inorder(TreeNode *node, vector<int> &values)
//     {
//         if (node == NULL)
//             return;
//         inorder(node->left, values);
//         values.push_back(node->val);
//         inorder(node->right, values);
//     }
//     BSTIterator(TreeNode *root)
//     {
//         inorder(root, values);
//     }

//     int next()
//     {
//         return values[idx++];
//     }

//     bool hasNext()
//     {
//         return idx < values.size();
//     }
// };

// int main()
// {
//     vector<int> nums = {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3};
//     vector<int> fac;
//     int count = 0;
//     int x = nums[0];
//     int len = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == x && count < 2)
//         {
//             count++;
//             len++;
//         }
//         else if (nums[i] == x)
//         {
//             count++;
//             // i--;
//             cout << i << endl;
//             nums.erase(nums.begin() + i);
//             printVector(nums);
//             i--;
//         }

//         if (nums[i] != x)
//         {
//             count = 1;
//             len++;
//             x = nums[i];
//         }
//         // cout << len << endl;
//     }
//     cout << len << endl;
// }

// class Solution
// {
// public:
//     int removeDuplicates(vector<int> &nums)
//     {
//         if (nums.size() == 0)
//             return 0;
//         int count = 0;
//         int x = nums[0];
//         int len = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] == x && count < 2)
//             {
//                 count++;
//                 len++;
//             }
//             else if (nums[i] == x)
//             {
//                 count++;
//                 // i--;
//                 // cout << i << endl;
//                 nums.erase(nums.begin() + i);
//                 i--;

//                 // printVector(nums);
//             }

//             if (nums[i] != x)
//             {
//                 count = 1;
//                 len++;
//                 x = nums[i];
//             }
//             // cout << len << endl;
//         }
//         // cout << len << endl;
//         return len;
//     }
// };

// class Solution
// {
// public:
//     int removeDuplicates(vector<int> &nums)
//     {
//         int c = 2;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (i > 1 && nums[i] != nums[c - 2])
//             {
//                 nums[c] = nums[i];
//                 c++;
//             }
//         }
//         return c;
//     }
// };

// void function(vector<int> arr)
// {

//     int n = arr.size();
//     vector<int> S(n, 0);
//     vector<int> count(n, 0);
//     for (int i = 0; i < n; i ++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] < arr[j])
//                 count[j]++;
//             else
//             {
//                 count[i]++;
//             }

//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         S[count[i]] = arr[i];
//     }

//     printVector(S);
// }

// int main()
// {
//     function({60, 35, 81, 98});
// }

// bool solve(string s) {
//     int count = 0;
//     stack<int> abc;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '(')
//         {
//             count++;
//             abc.push('(');
//         }
//         else
//             count--;
//         if (!abc.empty() && s[i] == ')' && abc.top() == '(')
//             abc.pop();
//     }
//     if (abc.empty() && !count)
//         return true;
//     return false;
// }

// int main()
// {
//     bool x = solve(")");
//     cout << x << endl;
// }

// void increasingTriplet(vector<int> nums)
// {
//     for (int i = 0; i < nums.size() - 2; i++)
//         if (nums[i] <= nums[i + 1] && nums[i + 1] <= nums[i + 2])
//             cout << nums[i] << endl;
// }
// class Solution
// {
// public:
//     bool increasingTriplet(vector<int> &nums)
//     {
//         int one = INT_MAX, two = INT_MAX;
//         for (auto num : nums)
//         {
//             if (num < one)
//                 one = num;
//             else if (one < num && num < two)
//                 two = num;
//             else if (two < num)
//                 return true;
//         }
//         return false;
//     }
// };

// void removeDuplicated(vector<int> arr)
// {
//     int max = *max_element(arr.begin(), arr.end());
//     vector<int> counts(0, max + 1);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (counts[arr[i]] < 2)
//             counts[arr[i]]++;
//     }
//     for (int i = 0; i < counts.size(); i++)
//     {
//         cout << counts[i] << ' ';
//     }
// }

// int main()
// {
//     removeDuplicated({55, 33, 33, 11, 11, 11, 6, 5, 2, 7, 10, 1, 1, 8, 9});
// }
// bool solve(vector<int>& nums, int k) {
//     unordered_set<int> comps;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (comps.find(nums[i]) != comps.end())
//             return true;
//         else
//             comps.insert(k - nums[i]);
//     }
//     return false;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int d = 4;
//     int n = arr.size();
//     vector<int> result(n, 0);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int index = 0;
//         if (i - d < 0)
//             index = n + i - d;
//         else
//             index = i - d;
//         result[index] = arr[i];
//     }
//     printVector(result);
// }
// class Publication
// {
// protected:
//     string titleOfPublication;
//     float priceOfPublication;

// public:
//     Publication()
//     {
//         titleOfPublication = "";
//         priceOfPublication = 0;
//     }

//     virtual void getData()
//     {
//         cout << "Enter title of publication: ";
//         cin.ignore(1, '\n');
//         getline(cin, titleOfPublication);
//         cout << "Enter the price for this Publication: ";
//         cin >> priceOfPublication;
//     }

//     virtual void showData()
//     {
//         cout << endl;
//         cout << "The Title of Publication is: " << titleOfPublication << endl;
//         cout << "The price for this publication is: " << fixed << setprecision(2) << priceOfPublication << endl;
//     }
// };

// class Book : public Publication
// {
// protected:
//     int pageCount;

// public:
//     Book()
//     {
//         pageCount = 0;
//     }

//     void getData()
//     {
//         Publication::getData();
//         cout << "Enter Page count: ";
//         cin >> pageCount;
//     }

//     void showData()
//     {
//         Publication::showData();
//         cout << "The Page count is: " << pageCount << endl;
//     }
// };

// class Cassette : public Publication
// {
// protected:
//     float tapeInMints;

// public:
//     Cassette() : tapeInMints(0) {}

//     void getData()
//     {
//         Publication::getData();
//         cout << "Enter the Length of Tape in minutes: ";
//         cin >> tapeInMints;
//     }

//     void showData()
//     {
//         Publication::showData();
//         cout << "The Length of Cassette in minutes is: " << fixed << setprecision(2) << tapeInMints << endl;
//     }
// };
// int main()
// {
//     Publication *userArray[50];
//     char x;
//     int count = 0;
//     while (true)
//     {
//         cout << "Want to add Publisher Details y/n? ";
//         cin >> x;
//         if (x == 'n' || x == 'N')
//         {
//             break;
//         }
//         else
//         {
//             cout << "Do you want to Publish Book or Cassete b/c?";
//             cin >> x;
//             if (x == 'b' || x == 'B')
//             {
//                 userArray[count] = new Book;
//                 userArray[count]->getData();
//                 count += 1;
//             }
//             else if (x == 'c' || x == 'C')
//             {
//                 userArray[count] = new Cassette;
//                 userArray[count]->getData();
//                 count += 1;
//             }
//         }
//     }
//     for (int i = 0; i < count; i++)
//     {
//         userArray[i]->showData();
//     }
// }

// struct Data
// {
//     int a;
//     int b;
// };

// int main()
// {
//     int n, b;
//     cout << "Enter value of n: ";
//     cin >> n;
//     cout << "Enter value of B: ";
//     cin >> b;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         Data d1;
//         cout << "Enter value of a" << i + 1 << ": ";
//         cin >> d1.a;
//         d1.b = b;
//         sum += d1.a * d1.b;
//     }
//     float result = pow(sum, 0.25);
//     cout << "The final answer is: " << result << endl;
// }

// struct Publication
// {
//     string title;
//     float price;
// };

// struct Book
// {
//     Publication BookData;
//     int pageCount;
// };

// struct Tape
// {
//     Publication TapeData;
//     float playingTime;
// };

// Book getDataForBook()
// {
//     cout << endl;
//     Book b;
//     cout << "Enter Title of Book: ";
//     cin >> b.BookData.title;
//     cout << "Enter Price of Book: ";
//     cin >> b.BookData.price;
//     cout << "Enter Page Count for " << b.BookData.title << ": ";
//     cin >> b.pageCount;
//     cout << endl;
//     return b;
// }

// Tape getDataForTape()
// {
//     cout << endl;
//     Tape t;
//     cout << "Enter Title of Tape: ";
//     cin >> t.TapeData.title;
//     cout << "Enter Price of Tape: ";
//     cin >> t.TapeData.price;
//     cout << "Enter Playing time(seconds) for " << t.TapeData.title << ": ";
//     cin >> t.playingTime;
//     cout << endl;
//     return t;
// }

// void putDataForBook(Book b)
// {
//     cout << endl;
//     cout << "The Title of Book is: " << b.BookData.title << endl;
//     cout << "The Price of Book is: " << fixed << setprecision(2) << b.BookData.price << endl;
//     cout << "The Page Count for book is: " << b.pageCount << endl;
//     cout << endl;
// }

// void putDataForTape(Tape t)
// {
//     cout << endl;
//     cout << "The Title of Tape is: " << t.TapeData.title << endl;
//     cout << "The Price of Tape is: " << t.TapeData.price << endl;
//     cout << "The Playing Time in seconds is: " << fixed << setprecision(2) << t.playingTime << endl;
//     cout << endl;
// }

// int main()
// {
//     Book userBook = getDataForBook();
//     putDataForBook(userBook);

//     Tape userTape = getDataForTape();
//     putDataForTape(userTape);
// }

// int main()
// {
//     int n;
//     cout << "Enter length of Arrays: ";
//     cin >> n;
//     string arr[n];
//     string arr2[n];
//     for (int i = 0; i < n; i++)
//     {
//         string name;
//         cout << "Enter Name for Array 1: ";
//         cin >> name;
//         arr[i] = name;
//         string name2;
//         cout << "Enter Name for Array 2: ";
//         cin >> name2;
//         arr2[i] = name2;
//         if (name == name2)
//             cout << name << " and " << name2 << " are same." << endl;
//     }
//     cout << endl;
//     cout << "First Array {";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << ", ";
//     cout << "}" << endl;
//     cout << endl;
//     cout << "Second Array {";
//     for (int i = 0; i < n; i++)
//         cout << arr2[i] << ", ";
//     cout << "}" << endl;
// }

// void solve(vector<int> nums, int k)
// {
//     int index = -1;
//     int result = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] + result <= k)
//         {
//             index = i;
//         }
//         result += nums[i];
//     }
//     cout << index << endl;
// }

// int main()
// {
//     solve({9, -8, -10, -2, 3}, 0);
// }

// void solve(string s)
// {
//     string ans = "";
//     int index = -1;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] != ans[index])
//         {
//             ans += s[i];
//             index++;
//         }
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     solve("");
// }

// string INSERT(string T, int R, string P)
// {
//     string temp1 = T.substr(0, R);
//     string temp2 = T.substr(R, T.length() - 1);
//     temp1 += P + " ";
//     temp1 += temp2;
//     return temp1;
// }

// int main()
// {
//     string ans = INSERT("Department of Science", 14, "Computer");
//     cout << ans << endl;
// }

// string DELETE(string T, int R, int L)
// {
//     string temp1 = T.substr(0, R);
//     string temp2 = T.substr(R + L + 1, T.length() - R - L + 1);
//     temp1 += temp2;
//     return temp1;
// }

// int main()
// {
//     string ans = DELETE("Master of Computer Science", 10, 8);
//     cout << ans << endl;
// }

// bool solve(vector<int> nums)
// {
//     // map<int, string> mymap;
//     // for (int i = 0; i < nums.size(); i++)
//     // {
//     //     string key = to_string(nums[i]) + "ABC";
//     //     mymap[nums[i] * 3] = key;
//     // }
//     // for (int i = 0; i < nums.size(); i++)
//     // {
//     //     string key = to_string(nums[i]) + "ABC";
//     //     if (mymap.find(nums[i]) != mymap.end() && mymap[nums[i]] != key)
//     //         return true;
//     // }
//     // return false;
//     map<string, bool> mmap;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         string key = to_string(nums[i] * 3) + to_string(i);
//         mmap[key] = true;
//     }
//     for (int i = 0; i > nums.size(); i++)
//     {
//         string key = to_string(nums[i]) + to_string(i);
//         if (mmap[key])
//             return true;
//     }
//     return false;
// }

// bool solve(vector<int> nums)
// {
//     unordered_set<int> set;

//     for (int i : nums)
//     {
//         if ((i % 3 == 0 && set.count(i / 3) == 1) || set.count(3 * i) == 1)
//             return true;
//         set.insert(i);
//     }

//     return false;
// }

// int main()
// {
//     bool ans = solve({2, 3, 10, 7, 6});
//     cout << ans << endl;
// }
// void solve(vector<int> nums)
// {
//     map<int, bool> mmap;
//     for (int i = 0; i < nums.size(); i++)
//         mmap[nums[i]] = true;
//     vector<int> ans;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         bool x = mmap[nums[i]];
//         if (x)
//         {
//             ans.push_back(nums[i]);
//             mmap[nums[i]] = false;
//         }
//     }
//     printVector(ans);
// }

// int main()
// {
//     solve({1, 3, 4, 1, 3, 5});
// }
// vector<int> solve(vector<int>& nums) {
//     map<int, int> count;

//     for (int num : nums) {
//         auto it = count.find(num);
//         if (it != count.end()) {
//             it->second++;
//         } else {
//             count[num] = 1;
//         }
//     }

//     for (int i = nums.size() - 1; i > 0; i--) {
//         auto it = count.find(nums[i]);
//         if (it->second != 1) {
//             nums.erase(nums.begin() + i);
//             it->second = 1;
//         }
//     }

//     return nums;
// }

// int INDEX(string T, string P)
// {
//     int index = 0;
//     int k = 0;
//     int MAX = T.length() - P.length() + 1;
//     while (k <= MAX)
//     {
//         bool found = true;
//         for (int L = 0; L < P.length(); L++)
//         {
//             if (P[L] != T[k + L])
//             {
//                 found = false;
//             }
//         }
//         if (!found)
//             k++;
//         else
//         {
//             index = k;
//             break;
//         }
//     }
//     return index;
// }
// int main()
// {
//     cout << "The Index of Pattern in String: " << INDEX("Computer Science", "put") << endl;
//     cout << "The Index of Pattern in String: " << INDEX("INFORMATION", "FORN") << endl;
// }

// void REPLACE(string T, string P, string Q)
// {
//     int k = INDEX(T, P) + 1;
//     while (k > 0)
//     {
//         T.replace(k - 1, P.length(), Q);
//         k = INDEX(T, P);
//     }
//     cout << T << endl;
// }

// int main()
// {
//     REPLACE("We are Muslims", "We", "All");
// }

// void linearSearch(int DATA[], int N, int ITEM)
// {
//     int k = 0, LOC = -1;
//     while (k < N)
//     {
//         if (ITEM == DATA[k])
//         {
//             LOC = k;
//             break;
//         }
//         k++;
//     }
//     if (LOC == -1)
//         cout << "ITEM " << ITEM << " is not in array." << endl;
//     else
//         cout << LOC << " is the location of ITEM" << ITEM << endl;

// }

// class Solution {
// public:
//     int numRescueBoats(vector<int>& people, int limit) {
//         sort(people.begin(), people.end());
//         int i = 0, j = people.size() - 1;
//         int ans = 0;

//         while (i <= j) {
//             ans++;
//             if (people[i] + people[j] <= limit)
//                 i++;
//             j--;
//         }

//         return ans;
//     }
// };

// int solve(vector<int>& nums) {
//     map<int, int> count;
//     for (int num : nums) {
//         auto it = count.find(num);
//         if (it != count.end()) {
//             it->second++;
//         } else {
//             count[num] = 1;
//         }
//     }
//     int counts = 0;
//     for (auto &element: count)
//     {
//         int x = element.second;
//         counts += ((x * (x - 1))/2);
//     }
//     return counts;
// }

// int solve(vector<int>& nums) {
//     unordered_map<int, int> m;
//     int ans = 0;
//     for (int i = 0; i < nums.size(); i++) {
//         ans += m[nums[i]]++;
//     }
//     return ans;
// }

// int solve(vector<int>& nums) {
//     int ans = 0;
//     unordered_map<int, int> mp;
//     for (int i = 0; i < nums.size(); i++) ans += mp[nums[i]]++;
//     return ans;
// }

// int solve(int n)
// {
//     int count = 1;
//     while (n != 1)
//     {
//         count++;
//         if (n % 2 != 0)
//             n = 3 * n + 1;

//         else
//             n = n / 2;
//     }

//     return count;
// }
// int solve(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         int x = n % 2;
//         n /= 2;
//         if (x == 1)
//             count++;
//     }
//     return count;
// } /**
//  * class LLNode {
//  *     public:
//  *         int val;
//  *         LLNode *next;
//  * };
//  */
// int solve(LLNode *node)
// {
//     int count = 0;
//     while (node != NULL)
//     {
//         count++;
//         node = node->next;
//     }
//     return count;
// }
// int solve(int n) {
//     int ans = 1;
//     while (n)
//     {
//         ans *= n;
//         n -= 1;
//     }
//     return ans;
// }

// int main()
// {
//     int x = 3772;
//     int z = x;
//     int y = to_string(x).length();
//     int ans = 0;
//     while (x)
//     {
//         ans += pow(x % 10, y);
//         x /= 10;
//     }

//     cout << z << endl;
//     cout << ans << endl;
// }

// int main()
// {
//     vector<int> nums = {0, 1, 1, 1, 2, 3};
//     int onesCount = 0;
//     int index = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (onesCount == 0 && nums[i] == 1)
//             index = i;
//         if (nums[i] == 1)
//             onesCount++;
//     }
//     int check = 0;
//     while (nums[index] == 1)
//     {
//         check++;
//         index++;
//     }
//     if (check == onesCount)
//         cout << "Y";
//     else
//         cout << "N";
// }

// void bubbleSort(int DATA[], int N)
// {
//     int k = 0;
//     while (k < N)
//     {
//         int PTR = 0;
//         while (PTR < N - 1 - k)
//         {
//             if (DATA[PTR] > DATA[PTR + 1])
//             {
//                 swap(DATA[PTR], DATA[PTR + 1]);
//             }
//             PTR++;
//         }
//         k++;
//     }
//     for (int i = 0; i < N; i++)
//     {
//         cout << DATA[i] << ' ';
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {1, 6, 2, 5, 3};
//     bubbleSort(arr, 5);
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void multiplyMatrix(vector<vector<int>> A, vector<vector<int>> B)
// {
// 	vector<vector<int>> C(A.size(), vector<int>(B[0].size(), 0));
// 	for (int i = 0; i < C.size(); i++)
// 	{
// 		for (int j = 0; j < C[0].size(); j++)
// 		{
// 			int k = 0;
// 			while (k < B.size())
// 			{
// 				C[i][j] += A[i][k] * B[k][j];
// 				k++;
// 			}
// 		}
// 	}
// 	for (int i = 0; i < C.size(); i++)
// 	{
// 		for (int j = 0; j < C[0].size(); j++)
// 		{
// 			cout << C[i][j] << ' ';
// 		}
// 		cout << endl;
// 	}
// }

// int main()
// {
// 	multiplyMatrix({ {1, 2, 3}, {4, 5, 6} }, { {7, 8}, {9, 10}, {11, 12} });
// }

// #include <iostream>
// using namespace std;

// void printStack(int arr[], int N)
// {
//     for (int i = 0; i < N; i++)
//         cout << arr[i] << ' ';
//     cout << endl;
// }

// void pushIntoStack(int STACK[], int TOP, int MAXSTR, int ITEM)
// {
//     cout << "Stack before push: ";
//     printStack(STACK, TOP);
//     if (TOP == MAXSTR - 1)
//     {
//         cout << "Overflow" << endl;
//     }
//     STACK[TOP] = ITEM;
//     cout << "Stack After push: ";
//     printStack(STACK, ++TOP);
// }

// void popFromStack(int STACK[], int TOP)
// {
//     cout << "Stack before push: ";
//     printStack(STACK, TOP);
//     if (TOP == 0)
//     {
//         cout << "Underflow" << endl;
//     }
//     TOP -= 1;
//     cout << "Stack After pop: ";
//     printStack(STACK, TOP);
// }

// int main()
// {
//     int arr[10] = {1, 2, 4, 3, 6};
//     pushIntoStack(arr, 5, 10, 100);
//     popFromStack(arr, 6);
// }

// int main()
// {
//     int x;
//     printf("enter the value\n");
//     scanf("%d",&x);
//     if(x<0)
//     {
//         printf("the number is negative");
//     }
//     if(x>0)
//     {
//         printf("the num is positive");
//     }
// }

// void bubbleSort(int data[], int n)
// {
//     int k = 0;
//     while (k < n)
//     {
//         int ptr = 0;
//         while (ptr < n - 1 - k)
//         {
//             if (data[ptr] > data[ptr + 1])
//             {
//                 int temp = data[ptr];
//                 data[ptr] = data[ptr + 1];
//                 data[ptr + 1] = temp;
//             }
//             ptr++;
//         }
//         k++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << data[i] << ' ';
//     }
// }

// int main()
// {
//     int list[] = {6, 2, 1, 55, 100};
//     bubbleSort(list, 5);
// }

// const int row = 3, column = 3;
// void matrixMultiplication(int mat1[row][column], int mat2[row][column])
// {
//     int arr[row][column] = {0};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             int k = 0;
//             while (k < 3)
//             {
//                 arr[i][j] += mat1[i][k] * mat2[k][j];
//                 k++;
//             }
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << ' ';
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int list1[row][column] = {{1, 2, 3}, {5, 4, 6}, {7, 8, 9}};
//     int list2[row][column] = {{4, 2, 1}, {7, 3, 1}, {9, 9, 9}};
//     matrixMultiplication(list1, list2);
// }

// #include <iostream>
// using namespace std;

// void showStack(int arr[], int N)
// {
//     for (int i = 0; i < N; i++)
//         cout << arr[i] << ' ';
//     cout << endl;
// }

// void pushStack(int STACK[], int TOP, int MAXSTR, int ITEM)
// {
//     cout << "Stack before push: ";
//     showStack(STACK, TOP);
//     if (TOP == MAXSTR - 1)
//     {
//         cout << "Overflow" << endl;
//     }
//     STACK[TOP] = ITEM;
//     cout << "Stack After push: ";
//     showStack(STACK, ++TOP);
// }

// void popStack(int STACK[], int TOP)
// {
//     cout << "Stack before pop: ";
//     showStack(STACK, TOP);
//     if (TOP == 0)
//     {
//         cout << "Underflow" << endl;
//     }
//     TOP -= 1;
//     cout << "Stack After pop: ";
//     showStack(STACK, TOP);
// }

// int main()
// {
//     int arr[9] = {1, 6, 2, 7, 22};
//     popStack(arr, 5);
//     pushStack(arr, 4, 9, 100);
// }

// struct DATA
// {
//     string model;
//     int price;
//     string company;
//     string color;
// };

// struct Node
// {
//     DATA data;
//     struct Node *next;
// };

// void append(Node **head_ref, DATA data)
// {
//     struct Node *newNode = new Node;
//     Node *last = *head_ref;
//     newNode->data = data;

//     newNode->next = NULL;

//     if (*head_ref == NULL)
//     {
//         *head_ref = newNode;
//         return;
//     }

//     while (last->next != NULL)
//         last = last->next;

//     last->next = newNode;
//     return;
// }
// void insertAfter(Node *prev_node, DATA data)
// {
//     /*1. check if the given prev_node is NULL */
//     if (prev_node == NULL)
//     {
//         cout << "the given previous node cannot be NULL";
//         return;
//     }

//     // Node* new_node = new Node();
//     struct Node *newNode = new Node;
//     newNode->data = data;

//     newNode->next = prev_node->next;

//     prev_node->next = newNode;
// }
// void insertAtPosition(struct Node **head_ref, DATA data, int position)
// {
//     if (*head_ref == NULL)
//         return;

//     struct Node *temp = *head_ref;
//     for (int i = 0; i < position - 2; i++)
//     {
//         temp = temp->next;
//     }
//     insertAfter(temp, data);
// }
// void deleteNode(struct Node **head_ref, int position)
// {
//     // If linked list is empty
//     if (*head_ref == NULL)
//         return;

//     struct Node *temp = *head_ref;

//     if (position == 0)
//     {
//         *head_ref = temp->next;
//         free(temp);
//         return;
//     }

//     for (int i = 0; temp != NULL && i < position - 1; i++)
//         temp = temp->next;

//     if (temp == NULL || temp->next == NULL)
//         return;

//     struct Node *next = temp->next->next;

//     free(temp->next); // Free memory

//     temp->next = next;
// }
// void display(struct Node **head_ref)
// {
//     if ((*head_ref) == NULL)
//     {
//         cout << "List is empty!" << endl;
//         return;
//     }
//     struct Node *ptr;
//     ptr = (*head_ref);
//     int i = 1;
//     while (ptr != NULL)
//     {
//         cout << endl;
//         cout << "(POSITION " << i << ") ";
//         cout << "Car Model: " << ptr->data.model << " || "
//              << "Car Price: " << ptr->data.price << " || "
//              << "Car company: " << ptr->data.company << " || "
//              << "Car Color: " << ptr->data.color << endl;
//         ;
//         ptr = ptr->next;
//         cout << endl;
//         i++;
//     }
// }

// int main()
// {

//     struct Node *head = NULL;
//     cout << "Creating 6 nodes" << endl;
//     for (int i = 1; i < 7; i++)
//     {
//         DATA data;
//         data.model = "Model No. " + to_string(i);
//         data.price = i + 1000;
//         data.color = "Black";
//         data.company = "Rolls Royce";
//         append(&head, data);
//     }
//     display(&head);
//     cout << "===========================================================================================================" << endl;
//     DATA data;
//     data.model = "INSERTED MODEL";
//     data.price = 999;
//     data.color = "INSERTED COLOR";
//     data.company = "INSERTED COMPANY";
//     insertAtPosition(&head, data, 4);
//     cout << "INSERTING AT 4th POSITION" << endl;
//     display(&head);
//     cout << "===========================================================================================================" << endl;
//     cout << "DELETING NODE AT ZERO POSITION" << endl;
//     deleteNode(&head, 0);
//     display(&head);
// }

// struct DATA
// {
//     string model;
//     string company;
//     string RAM;
//     string storageCapacity;
// };

// struct Node
// {
//     DATA data;
//     struct Node *next;
// };

// void append(Node **head_ref, DATA data)
// {
//     struct Node *newNode = new Node;
//     Node *last = *head_ref;
//     newNode->data = data;

//     newNode->next = NULL;

//     if (*head_ref == NULL)
//     {
//         *head_ref = newNode;
//         return;
//     }

//     while (last->next != NULL)
//         last = last->next;

//     last->next = newNode;
//     return;
// }
// void insertAfter(Node *prev_node, DATA data)
// {
//     /*1. check if the given prev_node is NULL */
//     if (prev_node == NULL)
//     {
//         cout << "the given previous node cannot be NULL";
//         return;
//     }

//     // Node* new_node = new Node();
//     struct Node *newNode = new Node;
//     newNode->data = data;

//     newNode->next = prev_node->next;

//     prev_node->next = newNode;
// }
// void insertAtPosition(struct Node **head_ref, DATA data, int position)
// {
//     if (*head_ref == NULL)
//         return;

//     struct Node *temp = *head_ref;
//     for (int i = 0; i < position - 2; i++)
//     {
//         temp = temp->next;
//     }
//     insertAfter(temp, data);
// }
// void deleteNode(struct Node **head_ref, int position)
// {
//     // If linked list is empty
//     if (*head_ref == NULL)
//         return;

//     struct Node *temp = *head_ref;

//     if (position == 0)
//     {
//         *head_ref = temp->next;
//         free(temp);
//         return;
//     }

//     for (int i = 0; temp != NULL && i < position - 1; i++)
//         temp = temp->next;

//     if (temp == NULL || temp->next == NULL)
//         return;

//     struct Node *next = temp->next->next;

//     free(temp->next); // Free memory

//     temp->next = next;
// }
// void display(struct Node **head_ref)
// {
//     if ((*head_ref) == NULL)
//     {
//         cout << "List is empty!" << endl;
//         return;
//     }
//     struct Node *ptr;
//     ptr = (*head_ref);
//     int i = 1;
//     while (ptr != NULL)
//     {
//         cout << endl;
//         cout << "(POSITION " << i << ") ";
//         cout << "MOBILE Model: " << ptr->data.model << " || "
//              << "MOBILE Company: " << ptr->data.company << " || "
//              << "MOBILE RAM: " << ptr->data.RAM << " || "
//              << "MOBILE Storage Capacity: " << ptr->data.storageCapacity << endl;
//         ;
//         ptr = ptr->next;
//         cout << endl;
//         i++;
//     }
// }

// int main()
// {

//     struct Node *head = NULL;
//     display(&head);
//     for (int i = 1; i < 6; i++)
//     {
//         DATA data;
//         data.model = "Model No. " + to_string(i);
//         data.company = "CHINA KA PHONE";
//         data.RAM = "16GB";
//         data.storageCapacity = "256GB";
//         append(&head, data);
//     }
//     DATA data;
//     data.model = "INSERTED MOBILE";
//     data.company = "INSERTED COMPANY";
//     data.RAM = "8GB";
//     data.storageCapacity = "120GB";
//     insertAtPosition(&head, data, 3);
//     display(&head);
//     cout << "DELETING NODE AT ZERO POSITION" << endl;
//     deleteNode(&head, 5);
//     display(&head);
// }

// void printQueue(int Queue[], int front, int rear, int N)
// {
//     int i;
//     for (i = front; i != rear; i = (i + 1) % N)
//         cout << Queue[i] << " ";
//     if (front != -1 && i == rear)
//         cout << Queue[i] << " ";

//     cout << " || ";
//     cout << "Front: " << front << " "
//          << "Rear: " << rear << endl;
// }

// void queueDelete(int Queue[], int N, int front, int rear)
// {
//     cout << "Queue before deleting an item: ";
//     printQueue(Queue, front, rear, N);
//     if (front == -1)
//     {
//         cout << "UnderFlow" << endl;
//         return;
//     }
//     int item = Queue[front];
//     if (front == rear)
//     {
//         front = -1;
//         rear = -1;
//     }
//     else if (front == N - 1)
//         front = 0;
//     else
//         ++front;

//     cout << "ITEM removed the Queue is: " << item << endl;
//     cout << "Queue After deleting an item: ";
//     printQueue(Queue, front, rear, N);
// }

// int main()
// {
//     int Queue[] = {1, 2, 3, 4, 5};
//     queueDelete(Queue, 5, 0, 4);
//     cout << endl;
//     int Queue2[] = {25, 0, 0, 33, 12, 8};
//     queueDelete(Queue2, 6, 3, 0);
// }

// void printQueue(int Queue[], int front, int rear, int N)
// {
//     int i;
//     for (i = front; i != rear; i = (i + 1) % N)
//         cout << Queue[i] << " ";
//     if (front != -1 && i == rear)
//         cout << Queue[i] << " ";

//     cout << " || ";
//     cout << "Front: " << front << " "
//          << "Rear: " << rear << endl;
// }

// void insertInQueue(int Queue[], int N, int front, int rear, int ITEM)
// {
//     cout << "Queue before insertion of ITEM";
//     printQueue(Queue, front, rear, N);
//     if (front == 0 && rear == N - 1 || front == rear + 1)
//     {
//         cout << "OverFlow" << endl;
//         return;
//     }
//     if (front == -1)
//     {
//         front = 0;
//         rear = 0;
//     }
//     else if (rear == N - 1)
//         rear = 0;
//     else
//         rear++;
//     Queue[rear] = ITEM;
//     cout << "Queue after insertion: ";
//     printQueue(Queue, front, rear, N);
// }

// int main()
// {
//     int Queue[] = {1, 2, 3, 4, 5};
//     insertInQueue(Queue, 6, 0, 4, 99);
//     cout << endl;
//     int Queue2[] = {6, 1, 2, 8, 4, 5};
//     insertInQueue(Queue2, 6, 3, 2, 66);
// }

// void printArray(int arr[], int N)
// {
//     for (int i = 0; i < N; i++)
//         cout << arr[i] << ' ';
//     cout << endl;
// }

// void MERGE(int A[], int B[], int low, int mid, int high)
// {
//     int x, y, i;
//     for (x = low, y = mid + 1, i = low; x <= mid && y <= high; i++)
//     {
//         if (A[x] <= A[y])
//             B[i] = A[x++];
//         else
//             B[i] = A[y++];
//     }
//     while (x <= mid)
//         B[i++] = A[x++];
//     while (y <= high)
//         B[i++] = A[y++];
//     for (i = low; i <= high; i++)
//         A[i] = B[i];
// }

// void sortArray(int A[], int B[], int low, int high)
// {
//     int MID;
//     if (low < high)
//     {
//         MID = (low + high) / 2;
//         sortArray(A, B, low, MID);
//         sortArray(A, B, MID + 1, high);
//         MERGE(A, B, low, MID, high);
//     }
//     else
//         return;
// }

// int main()
// {
//     int A[10] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
//     int B[10];
//     cout << "List Before Sorting: ";
//     printArray(A, 10);
//     sortArray(A, B, 0, 9);
//     cout << "List After Sorting: ";
//     printArray(B, 10);
// }

// void searchElement(int arr[], int low, int high, int N, int ITEM)
// {
//     bool found = false;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == ITEM)
//         {
//             cout << "ITEM is at position: " << mid + 1 << endl;
//             found = true;
//             return;
//         }
//         if (arr[mid] > ITEM)
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     if (!found)
//         cout << "ITEM not found in the list" << endl;
// }
// int main()
// {
//     int arr[] = {1, 2, 4, 6, 7};
//     searchElement(arr, 0, 4, 5, 6);
//     searchElement(arr, 0, 4, 5, 10);
// }
// void swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }
// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high]; // pivot
//     int i = (low - 1);     // Index of smaller element

//     for (int j = low; j <= high - 1; j++)
//     {
//         // If current element is smaller than the pivot
//         if (arr[j] < pivot)
//         {
//             i++; // increment index of smaller element
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return (i + 1);
// }

// void quickSort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         /* pi is partitioning index, arr[p] is now
//         at right place */
//         int pi = partition(arr, low, high);

//         // Separately sort elements before
//         // partition and after partition
//         quickSort(arr, low, pi - 1);
//         printArray(arr, 7);
//         quickSort(arr, pi + 1, high);
//         printArray(arr, 7);
//     }
// }

// /* Function to print an array */

// // Driver Code
// int main()
// {
//     int arr[] = {45, 34, 12, 56, 78, 90, 41};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     quickSort(arr, 0, n - 1);
//     cout << "Sorted array: \n";
//     printArray(arr, n);
//     return 0;
// }

// struct Length
// {
//     int lengthInYards;
//     int lengthInFeets;
//     int lengthInInches;
// };

// Length add(Length struct1, Length struct2)
// {
//     Length result;
//     result.lengthInYards = struct1.lengthInYards + struct2.lengthInYards;
//     result.lengthInFeets = struct1.lengthInFeets + struct2.lengthInFeets;
//     result.lengthInInches = struct1.lengthInInches + struct2.lengthInInches;
//     return result;
// }
// void show(Length data)
// {
//     cout << endl;
//     cout << "The Length in yards is: " << data.lengthInYards << " yards" << endl;
//     cout << "The Length in feets is: " << data.lengthInFeets << " feets" << endl;
//     cout << "The Length in Inches is: " << data.lengthInInches << " inches" << endl;
// }

// int main()
// {
//     Length struct1;
//     Length struct2;
//     cout << endl;
//     cout << "Enter length in yards for struct1: ";
//     cin >> struct1.lengthInYards;
//     cout << "Enter length in feets for struct1: ";
//     cin >> struct1.lengthInFeets;
//     cout << "Enter length in Inches for struct1: ";
//     cin >> struct1.lengthInInches;
//     cout << endl;
//     cout << "Enter length in yards for struct2: ";
//     cin >> struct2.lengthInYards;
//     cout << "Enter length in feets for struct2: ";
//     cin >> struct2.lengthInFeets;
//     cout << "Enter length in Inches for struct2: ";
//     cin >> struct2.lengthInInches;

//     Length result = add(struct1, struct2);
//     show(result);
// }

// int main()
// {
//     // A
//     unsigned const int size = 5;
//     unsigned int values[size] = {2, 4, 6, 8, 10};

//     // B
//     unsigned int *vPtr;

//     // C
//     for (int i = 0; i < size; i++)
//     {
//         cout << values[i] << " ";
//     }
//     cout << endl;

//     // D
//     vPtr = values;
//     vPtr = &values[0];

//     // E
//     for (int i = 0; i < size; i++)
//     {
//         cout << *(vPtr + i) << ' ';
//     }
//     cout << endl;

//     // F
//     for (int i = 0; i < size; i++)
//     {
//         cout << *(values + i) << " ";
//     }
//     cout << endl;

//     // G
//     for (int i = 0; i < size; i++)
//     {
//         cout << (vPtr[i]) << ' ';
//     }
//     cout << endl;

//     // H
//     cout << values[4] << endl;
//     cout << *(vPtr + 4) << endl;
//     cout << *(values + 4) << endl;
//     cout << vPtr[4] << endl;

//     // I
//     cout << (vPtr + 3) << endl;
//     cout << *(vPtr + 3) << endl;

//     // J
//     unsigned int *temp = vPtr;
//     cout << (vPtr -= 4) << endl;
//     cout << *(temp -= 4) << endl;
// }

// int main()
// {
//     // A
//     long *longPtr;

//     // B
//     long value1 = 200000;
//     long value2;
//     longPtr = &value1;

//     // C
//     cout << *longPtr << endl;

//     // D
//     value2 = *longPtr;

//     // E
//     cout << value2 << endl;

//     // F
//     cout << &value1 << endl;

//     // G
//     cout << longPtr << endl;
// }