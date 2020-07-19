#include <iostream>
#include <fstream>

using namespace std;
// predefined tellg and tellp
// tellg function tells at what position character pointer is pointing at current stream (input) istream
// tellp function returns position of pointer pointing to characater

int main(){
    // ifstream fin;
    // fin.open("data.txt");
    // char x;
    
    // int pos = fin.tellg(); // this will show the position of the current reading char
    // cout << pos << endl; // for "H" from file
    // fin >> x;
    // pos = fin.tellg();  // for "E" from file
    // cout << pos << endl;

    // fin.close();

    // using the tellp function from ostream

    // ofstream fout;
    // fout.open("data.txt", ios::app); // opening the file in append mode

    // append function ignores the already present data, so that tellp function consider the last 
    // place as the 0 index
    // int pos;
    // pos = fout.tellp();
    // cout << pos << endl;
    // // now writing something in file

    // fout << "From AAQIB";
    // pos = fout.tellp();
    // cout << pos << endl;
    // fout.close();

    // using seekg and seekp, seekg for istream, and seekp for ostream

    ifstream fin;
    fin.open("data.txt");

    cout << fin.tellg() << endl;

    // to shift the get pointer position to a particular index, we use seekg function
    // it is overloaded, one argument and two arguments
    // one argument function just shifts the position of pointer
    // two argument function changes the position with respect to the second argument passed
    // from current, beginning and end, for end we use - value 

    cout << (char)fin.get() << endl; // fin.get() will return the ASCII code.
    cout << fin.tellg() << endl;
    fin.get();
    fin.get();
    cout << fin.tellg() << endl;

    // now if I want to point the pointer to 0

    fin.seekg(0);
    cout << fin.tellg() << endl;

    // now using the overloaded function
    fin.seekg(2, ios_base::cur);
    cout << fin.tellg() << endl;
    cout << (char)fin.get() << endl;

    cout << fin.tellg() << endl;
    fin.seekg(5, ios_base::beg);
    cout << fin.tellg() << endl;
    // cout << (char)fin.get() << endl;

    fin.seekg(2, ios_base::cur);
    cout << fin.tellg() << endl;
}