#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // for outputting a value into the file or writing into file we use ofsream object
    // for taking input from the file we use the ifstream object 

    ofstream fout;

    fout.open("data.txt");
    // for writing something we use object of ofstream object name

    fout << "Hello Students";

    fout.close();

    ifstream fin;
    // for reading the input
    fin.open("data.txt.c_str()");
    char ch;
    // fin >> ch;  // but this will not get the space

    ch = fin.get();
    while(!fin.eof()){
        
        cout << ch;
        ch = fin.get();
    }

    fin.close();

    // different mods for opening file in cpp are

    // ios:: in to read
    // iout:: to output
    // ios::app to append
    // ios::ate to update
    // ios::binary to add binary

    
}