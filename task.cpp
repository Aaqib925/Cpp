#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <sstream>
#include <iterator>

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
//     string name = "Shahwar";
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

class Person{
    public:
    string name;
    int age;
    int cur_id;

    Person(){
        name = "", age = 0, cur_id = 0;
    }
    
    virtual void getdata(){
        cin >> name >> age;
    }
    virtual void putdata(){
        cout << name << " " << age << endl;

    }
};

class Professor: public Person{
    public:
    int publications, cur_id;
    static int id;

    Professor(){
        cur_id = id;
        publications = 0;
    }

    void getdata() override{
        cin >> name >> age >> publications;
    }

    void putdata() override{
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }

};

int Professor::id = 1;

