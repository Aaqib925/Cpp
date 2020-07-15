#include <iostream>
#include <fstream>


using namespace std;

class User{
    protected:
    string username, password;
    
    public:

    virtual void getData(){
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;
    }

    void createAccount(string userData){
        ofstream fout; // object for writing into the file

        fout.open("Users.txt", ios::app); // opening the file in apppend mode

        fout << userData << "\n";

        fout.close();

    }

    bool checkData(string userData){
        int offset;
        string line;
        ifstream fin;

        fin.open("Users.txt");

        if (fin.is_open()){

            while(!fin.eof()){

                getline(fin, line);
                if(offset = line.find(userData, 0) != string::npos){
                    cout << "FOUND" << endl;
                    return true;
                }
                else{
                    cout << "Not Fount" << endl;
                    return false;
                }
            }
        }
    }


};


int main(){
    
}