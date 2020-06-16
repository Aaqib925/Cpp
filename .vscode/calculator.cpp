#include <iostream>
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

    bool number = true;
    bool operation = false;

    for (int i = 0; i < operands; i++){
        double secondValue;
        char symbol = 'z';

        // taking inputs
        cout << "Enter Operand number " << i + 1 << ": ";
        cin >> secondValue;


        if (i == 0){
            result = secondValue;
        }

        if (i != operands - 1){
            cout << "Enter Operator: ";
            cin >> symbol; 
        }

        if (symbol == '+'){
            result = addNumbers(result, secondValue);
            cout << result << endl;
        }
        else if(symbol == '-'){
            result = subNumbers(result, secondValue);
            cout << result << endl;
        }
        else if(symbol == '*'){
            result = multNumbers(result, secondValue);
            cout << result << endl;
        }
        else if(symbol == '/'){
            result = divNumbers(result, secondValue);
            cout << result << endl;
        }
    }
    cout << result << endl;

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