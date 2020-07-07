#include <iostream>

using namespace std;

// friend function is not a member function of class but it friend of class
// it is declared inside the class, but define outside the class

class Complex{
    private:
    int x, y;

    public:
    void setData(){
        cin >> x >> y;
    }

    void showdata(){
        cout << x << " "<< y;
    }

    friend void sum(Complex);

};

void sum(Complex c){
    cout << c.x + c.y << endl;
    
}

int main(){
    Complex c1, c2;
    c1.setData();
    c2.setData();

    sum(c1);
    sum(c2);

}