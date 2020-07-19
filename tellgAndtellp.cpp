#include <iostream>
#include <fstream>

using namespace std;
// predefined tellg and tellp
// tellg function tells at what position character pointer is pointing at current stream (input) istream
// tellp function returns position of pointer pointing to characater

int main(){
    ifstream fin;
    fin.open("data.txt");
    char x;
    
    int pos = fin.tellg(); // this will show the position of the current reading char
    cout << pos << endl; // for "H" from file
    fin >> x;
    pos = fin.tellg();  // for "E" from file
    cout << pos << endl;

    fin.close();

}