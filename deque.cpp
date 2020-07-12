#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> mydeque; //Creates a double ended queue of deque of int type

    int length = mydeque.size(); //Gives the size of the deque

    mydeque.pop_back(); //Pops element from the end
    mydeque.pop_front(); //Pops element from the beginning

    cout << mydeque.empty() << endl; //Returns a boolean value which tells whether the deque is empty or not
}