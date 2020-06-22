#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter the number from 0 to 6: ";
    cin >> x;

    string DayName;

    switch (x)
    {
    case 0: DayName = "Sunday"; break;
    case 1: DayName = "Monday"; break;
    case 2: DayName = "Tuesday"; break;
    case 3: DayName = "Wednesday"; break;
    case 4: DayName = "Thursday"; break;
    case 5: DayName = "Friday"; break;
    case 6: DayName = "Saturday"; break;

    
    default:
        cout << "You Entered a Invalid Number.";
    }

    cout << DayName << endl;


}