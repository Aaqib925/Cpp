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

        

    }

    virtual bool checkData(string userData){
        
    }


};


int main(){
    
}