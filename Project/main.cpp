#include <iostream>
#include <fstream>


using namespace std;

class User{
    protected:
    string username, password;
    
    public:

    virtual string getData(){
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;
        return username+password;
    }

    void createAccount(string userData){
        ofstream fout; // object for writing into the file

        fout.open("Users.txt", ios::app); // opening the file in apppend mode

        fout << userData << "\n";

        cout << "Your Account has been Created" << endl;

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
                    cout << "NOT FOUND" << endl;
                    return false;
                }
            }
        }

        fin.close();
    }
};

class Customer: public User{
    protected:
    bool ans = false;

    public:
    void working(){
        while(!ans){
            string addedString; // this contains username+password

            addedString = User::getData();
            
            if(checkData(addedString)){
                ans = true;
            }

            else{
                cout << "Your Account doesn't exist in out records, Please Create Account" << endl;
                User::createAccount(User::getData());
                ans = true;

            }       

        }

    }

};

int main(){
    Customer c1;
    c1.working();
}