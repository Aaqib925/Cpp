#include <iostream>
using namespace std;

int main(){
    pair<string, int> p1;
    p1 = make_pair("Aaqib", 19);

    cout << p1.first << " " << p1.second << endl;

}

// for more then to values, we can use tuple. Tuple are hetrogenous, make_tuple = assign values
// for making tuple, use tuple < data types>;
// getting values get<index> tupleName;