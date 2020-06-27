#include <iostream>
#include <map>
#include <cassert>

using namespace std;
 
int main(){
    map<string, int> myHashMap;
    // first provide data type for key and then for the value
    myHashMap["Hello"] = 24;
    myHashMap["Aaqib"] = 18;

    if (myHashMap.find("World") == myHashMap.end()){
        cout << "The key world is not present." << endl;
    } 
    cout << myHashMap["world"] << endl; // if key is not present in hashmap, it result 0 value

    map<string, int>::iterator i = myHashMap.find("Aaqib");
    assert(i != myHashMap.end());
    cout << i->first << endl;
    cout << i->second << endl;

}