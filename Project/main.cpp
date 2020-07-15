#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include<string>


using namespace std;

class User{
    protected:
    string username, password;
    
    public:
    static int number;
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
        // number += 1;

        fout.close();

    }

    virtual bool checkData(string userData){
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
        return false;
    }
};

int User::number = rand () % 100+10000;

class Customer: public User{
    protected:
    bool ans = false;
    string contactNumber, address;

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

    void customerData(){
        number += 1;
        cout << "Dear " << username << " , Please enter your Billing address: ";
        cin >> this->address;
        cout << "Please enter your contact number: ";
        cin >> this->contactNumber;
        cout << "Thank You for the moment!!" << endl << "Your id is: " << number << endl;
    }

};

// map<string, int> ShoppingCart::mymap;



class ShoppingCart{
    protected:
    vector<vector<string>> customerList;
    bool order = false;
    map<string, int> mymap;
    
    public:
    ShoppingCart(){
        mymap["Grocery"] = 7;
        mymap["Fast food"] = 5;
        mymap["Electronic"] = 15;
        mymap["HouseHolds"] = 20;
    }


    void showItems(string userId){
        cout << "Dear Customer " << userId << ", Select your items from below: " << endl;
        vector<string> userls;

        for (auto const& pair: mymap){
            int x;
            cout << "Package " << pair.first << " of Price " << pair.second << "$ EACH!" << endl;
            cout << "Enter Quantity for " << pair.first << ": ";
            cin >> x;
            cout << endl;
            if (x != 0){
                userls.push_back(pair.first);
                userls.push_back(to_string(pair.second * x));
            }
        }
        
    }



};

int main(){
    Customer c1;
    c1.working();
    c1.customerData();

    ShoppingCart s1;
    s1.showItems("kiaaa haa");
}