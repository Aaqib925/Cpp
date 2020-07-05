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

    Count operator ++(int){  // postfix
        Count temp;
        temp.count = count++;
        return temp;

    }

    Count operator +(Count);

    void print(){
        cout << count << endl;
    }

    int ans(){
        return count;
    }

};

Count Count::operator+(Count c){
    int cc = count + c.count;
    return Count(cc);
    // this can also written like this
    // Count temp;
    // temp.count = count + c.count;
    // return temp;
}


class Conc{
    private:
    string str;

    public:
    Conc(){
        str = "";
    }
    Conc(string x){
        str = x;
    }

    void print(){
        cout << str << endl;

    }

    Conc operator+(Conc xx){
        string y = str + xx.str;
        return Conc(y);

    }
    string ans(){
        return str;
    }
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
    int ordinaryNumber = c3.ans();
    cout << ordinaryNumber << endl;
    c3.print();

    Conc cc("Aaqib");
    Conc cc2("Nazeer");
    Conc cc3 = cc + cc2;
    cc3.print();
    string ordinary = cc3.ans();
    cout << ordinary << endl;
}