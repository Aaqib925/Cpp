#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l1{1, 2, 3};
    // the important functions of lists are, sort(), size(), push_back(), push_front(), 
    // pop_back(), pop_front(), reverse(), remove(), clear()

    list<int>::iterator it = l1.begin();

    while(it != l1.end()){
        cout << *it << endl;
        it ++;
    }
    l1.reverse(); // for reversing the list
    
}