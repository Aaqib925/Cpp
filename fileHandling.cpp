#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // for outputting a value into the file or writing into file we use ofsream object
    // for taking input from the file we use the ifstream object 

    ofstream fout;

    fout.open("data.txt");
    // for writing something we use object of ofstream object name

    fout << "Aaqib";

    fout.close();

}