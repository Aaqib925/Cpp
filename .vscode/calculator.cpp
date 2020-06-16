#include <iostream>
using namespace std;

double addNumbers(double, double);
double subNumbers(double, double);
double divNumbers(double, double);
double multNumbers(double, double);

int main(){
    double result;
    int operations;
    cout << "Enter number of Operations: ";
    cin >> operations;

    bool number = true;
    bool operation = false;

    for (int i = 0; i < operations; i++){
        double secondValue;
        char symbol;

        if (number == true && operation == false){
            cout << "Enter Operand number " << i + 1 << " : ";
            cin >> secondValue;
            number = false;
            operation = true;
        }

        else if (number == false && operation == true){
            cout << "Enter the operator: ";
            cin >> symbol;
            number = true;
            operation = false;
        }

        if (i == 0){
            result = secondValue;
        }
        else{
            if (symbol == '+')
            {
                result = addNumbers(result, secondValue);
            }

            else if (symbol == '-')
            {
                result = subNumbers(result, secondValue);
            }

            else if (symbol == '*')
            {
                result = multNumbers(result, secondValue);
            }
            else if (symbol == '/')
            {
                result = divNumbers(result, secondValue);
            }
                    
        }


    }

}