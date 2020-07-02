#include <set>
#include <iostream>
using namespace std;


int main(){
    set<int> a;

    // to insert something is set, we use .insert function

    a.insert(5);
    a.insert(88);

    for (int i: a){
        cout << i << endl;
    }

    // to print the length of the set we use .size() function

    cout << a.size() << endl;

    // for removing a element from the set we use .erase(value) function

    a.erase(5);
    
    // set<int>::iterator itr=s.find(val); //Gives the iterator to the element val if it is found otherwise returns s.end() .
    // Ex: set<int>::iterator itr=s.find(100); //If 100 is not present then it==s.end().

    auto pos = a.find(5); // i didn't got this bro
    cout << *pos << endl;
}