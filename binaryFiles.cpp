#include <iostream>
#include <fstream>
#include <cstring>

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
        
    }
}