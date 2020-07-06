#include <iostream>
using namespace std;

class Chef{
    public:
    void makeChicken(){
        cout << "Chef is making chicken.";
    }

    void makeSpecialDish(){
        cout << "Chef is making Special Dish";
    }
};

class AnotherChef: public Chef{
    public:
    void makePasta(){
        cout << "Another Chef is making Pasta";
    }
};

class Counter{
    protected:
    int count;

    public:
    Counter(){
        count = 0;
    }

    Counter(int x){
        count = x;
    }

    Counter operator ++(){
        return Counter(++count);
    }
    Counter operator++(int){
        return Counter(count++);
    }
    void printData(){
        cout << count << endl;
    }
};

class CountDc : public Counter{
    public:
    CountDc() : Counter(){

    }

    CountDc(int x){
        count = x;
    }

    CountDc operator --(){
        return CountDc(--count);
    }
    CountDc operator --(int){
        return CountDc(count--);
    }
};

int main(){
    // Chef chef1;
    // chef1.makeChicken();

    // AnotherChef chef2;
    // chef2.makeChicken();
    // chef2.makePasta();

    Counter c1;
    c1++;
    c1.printData();

    CountDc c2;
    c2++;
    c2--;
    c2.printData();
}