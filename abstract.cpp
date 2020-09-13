#include <iostream>
using namespace std;

// The type of class which can't be instanciated, or object can't be created for it
// We make abstract class using pure virtual functions, Also the memeber functions can't be accessed
// If we create a child class of abstract class, then we can use the member functions easily,
// But we have to override the pure virtual function


class A{
    public:

    // creating a pure virtual function

    virtual void fun() = 0; // special syntax

    void fun1(){
        cout << "This is member function of Parent class" << endl;
    }
};

class B: public A{
    public:
    void fun(){
        cout << "Overriding the Pure Virtual function." << endl;
    }


};

class C: public A{
    public:
    void fun(){
        cout << "Overriding the Pure Virtual function from second derived class." << endl;
    }
};

// Review Question

class Shape{
    protected:
    double length, width;

    public:

    virtual void get_data(){
        cout << "Enter the Length: ";
        cin >> this->length;
        cout << "Enter the Width: ";
        cin >> this->width;
    }

    virtual void show_data() = 0;

};

class Rectangle: public Shape{
    public:
    
    void show_data(){
        cout << "The Area of Rectangle is: " << (this->width * this->length) << endl;

    }

};

class Triangle: public Shape{
    public:
    void show_data(){
        cout << "The Area of Triangle is: " << (this->width * this->length)/2 << endl;
    }

};

int main(){

    Shape *arr[2];

    Rectangle r1;
    Triangle t1;

    arr[0] = &r1;
    arr[1] = &t1;

    arr[0]->get_data();
    arr[0]->show_data();

    arr[1]->get_data();
    arr[1]->show_data();

}