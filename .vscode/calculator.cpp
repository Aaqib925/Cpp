#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double addNumbers(double, double);
double subNumbers(double, double);
double divNumbers(double, double);
double multNumbers(double, double);

int main(){
    double result = 0;
    int operands;
    cout << "Enter number of Operatands: ";
    cin >> operands;
    cout << endl;
    char symbol = 'z';
    string equation;

    for (int i = 0; i < operands; i++){
        double secondValue;
        cout << "Enter the Operand number " << i + 1 << ": ";
        cin >> secondValue;
        equation += to_string(secondValue);
        equation += " ";

        if (i == 0){
            result = secondValue;
        }
        if (symbol != 'z'){
            if (symbol == '+'){
                result = addNumbers(result, secondValue);
            }
            else if(symbol == '-'){
                result = subNumbers(result, secondValue);
            }
            else if(symbol == '*'){
                result = multNumbers(result, secondValue);
            }
            else if(symbol == '/'){
                result = divNumbers(result, secondValue);
            }
        }

        if (i < operands - 1){
            cout << "Enter Operator: ";
            cin >> symbol; 
            cout << endl;
            equation += symbol;
            equation += " ";
        }
    }
    cout << endl;
    cout << "Your Answer is: ";
    cout << equation << " = " << result << endl;

}

double addNumbers(double num1, double num2){
    return num1 + num2;
}

double subNumbers(double num1, double num2){
    return num1 - num2;
}

double multNumbers(double num1, double num2){
    return num1 * num2;
}

double divNumbers(double num1, double num2){
    return num1 / num2;
}