#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> mydeque; //Creates a double ended queue of deque of int type

    int length = mydeque.size(); //Gives the size of the deque

    mydeque.pop_back();  //Pops element from the end
    mydeque.pop_front(); //Pops element from the beginning

    cout << mydeque.empty() << endl; //Returns a boolean value which tells whether the deque is empty or not
}

void printKMax(int arr[], int n, int k)
{
    //Write your code here.
    deque<pair<int, int>> dq;
    for (int a = 0; a < n; a++)
    {
        while (!dq.empty() && a - dq.front().second >= k)
        {
            dq.pop_front();
        }
        while (!dq.empty() && dq.back().first <= arr[a])
        {
            dq.pop_back();
        }
        dq.push_back({arr[a], a});
        if (a >= k - 1)
        {
            cout << dq.front().first << " ";
        }
    }
    cout << endl;
}
