#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

//Removes the element present at position.
// Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)

// Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
// Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)

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

int main()
{
    vector<int> vecOfNums = {12, 45, 54, 33, 2, 7, 8, 22, 43, 19};
    vector<int>::iterator it = std::find(vecOfNums.begin(), vecOfNums.end(), 22);

    if (it != vecOfNums.end())
        std::cout << "Element Found" << std::endl;
    else
        std::cout << "Element Not Found" << std::endl;

    int index = std::distance(vecOfNums.begin(), it);
    cout << "The Index of Element is: " << index << endl;
}