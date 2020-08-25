#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Person
{
private:
    char name[80];
    int age;

public:
    Person()
    {
        strcpy(name, "NoName");
        age = 0;
    }
    Person(char *name, int age)
    {
        strcpy(this->name, name);
        this->age = age;
    }

    void showData()
    {
        cout << "I am " << name << ". I am " << age << " years old!" << endl;
    }
};

int main()
{
    char name[80] = "Aaqib";
    Person p(name, 16);
    p.showData();

    fstream file("person.bin", ios::binary | ios::in | ios::out | ios::trunc);
    if (!file.is_open())
    {
        cout << "Error opening the file!" << endl;
    }
    else
    {
        
    }
}