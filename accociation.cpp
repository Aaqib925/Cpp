#include <iostream>
#include <vector>
#include <string>
using namespace std;

// class Library{
//     private:
//     static vector<string> books;
//     double cost;
//     string name;
//     int count;
//     vector<string> userBooks;
    
//     public:
//     Library(){
//         cout << "Please enter your Name: ";
//         getline(cin, name);
//         count = 0;
//         cost = 0;
//     }

//     void getData(){
//         cout << "Dear " << name << ", The Available Books are as follow" << endl;
//         for (int i = 0; i < books.size(); i++){
//             cout << books[i] << " ID: " << i + 1 << endl;
//         }
        
//         cout << "Every Book has price of 1$ each!!!" << endl;
//         cout << "How many Books you wanna issue: " << endl;
//         cin >> count;
//         userBooks[count];
//         int x, y;
//         for (int i = 0; i < count; i++){
//             cout << "Enter the ID Number for Book " << i + 1 << ": ";

//             while(!(cin >> x) && x <= books.size()){
//                 cout << "Please Enter Valid ID: ";
//                 cin.clear();
//                 cin.ignore(123, '\n');            
//             }

//             cout << "Enter the Quantity of " << books[x - 1] << ": ";
//             while(!(cin >> y)){
//                 cout << "Enter valid number!!" << endl;
//                 cin.clear();
//                 cin.ignore(123, '\n');
//             }
//             cost += 1 * y;
//             i += y - 1;
//             string data = books[i] + " x" + to_string(y);
//             userBooks.push_back(data);
//         }
//     }

//     void showData(){
//         cout << "The Books you selected are: ";
//         for (int i = 0; i < userBooks.size(); i++){
//             cout << userBooks[i] << ",\t";
//         }
//         cout << endl << "Your Total Prize is: " << cost << "$" << endl;
//     }

// };

// // vector<string> Library::myvec = {"Magazine", "Comics", "Sci-Fi", "General Knowledge"};
// vector<string> Library::books = {"Harry Potter", "Ullysses", "War & Peace"};

// int main()
// {
//     Library l1;
//     l1.getData();
//     l1.showData();

// }

class Student{
    private:
    string school;
    string degree;

    public:
    void getData(){
        cout << "Enter the Name of School: "; getline(cin, school);
        cout << "Enter the Degree (HighSchool, Bachelor's, Master's, PhD)"; cin >> degree;
    }
    void showData(){
        cout << "Name of School is: " << school << endl;
        cout << "Degree: " << degree << endl;
    }

};

class Employee{
    private:
    string name;
    unsigned long number;

    public:
    void getData(){
        cout << "Enter Name of Employee: "; cin >> name;
        cout << "Enter the Number of Employee: "; cin >> number;   
    }

    void showData(){
        cout << "Name of Employee is: " << name << endl;
        cout << "Number of " << name << " is: " << number << endl;
    }
};

class Manager{
    public:
    string title;
    double dues;
    Employee emp;
    Student su;

    public:
    void getData(){
        
    }
}