#include <iostream>
using namespace std;

class Count{
    private:
    unsigned int count;

    public:
    Count(){
        count = 0;
    }
    Count(int x){
        count = x;
    }

    void operator ++(){ //prefix
        count++;
    }

    Count operator ++(int){
        Count temp;
        temp.count = count++;
        return temp;

    }

    Count operator +(Count);

    void print(){
        cout << count << endl;
    }

};

Count Count::operator+(Count c){
    int cc = count + c.count;
    return Count(cc);

}


class Conc{
    private:
    string str;

    public 
};


int main(){

    Count c1;
    ++c1;
    ++c1;
    c1.print();
    c1++;
    c1.print();
    Count c2;
    c2++;
    Count c3 = c1 + c2;
    c3.print();
    
}