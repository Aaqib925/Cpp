#include <iostream>
#include <vector>
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

int main(){
    int n, e;
    cin >> n;
    vector<int> myVector;

    for (int i = 0; i < n; i ++){
        int x;
        cin >> x;
        myVector.push_back(x);
    }
    cin >> n;

    myVector.erase(myVector.begin() + n);

    cin >> n >> e;

    myVector.erase(myVector.begin() + n - 1, myVector.begin() + e - 1);

    cout << myVector.size() << endl;

    for (int i = 0; i < myVector.size(); i++){
        cout << myVector[i] << " ";
    }


}