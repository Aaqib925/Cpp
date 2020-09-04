#include <iostream>
#include <cstdlib>
// #include <conio.h>
using namespace std;

class accountManagement
{
public:
    string name, pin;
    char cnic[14], acc_type[10], confirmation;
    double balance;
    int acc_num = rand() % 100 + 1000000;

public:
    void create_account()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter CNIC Number: ";
        cin >> cnic;
        cout << "Enter Account Type (Current/Saving): ";
        cin >> acc_type;
        cout << "Enter the amount of cash (More than RS. 1000): ";
        cin >> balance;
        if (balance < 1000)
        {
            cout << "Amount must be greater than 1000!\nEnter new amount: ";
            cin >> balance;
        }
        else
            cout << "\nCongratulations! Your Account Has Been Created. One last step.\n"
                 << endl;
        cout << "Your Account Number is: " << acc_num << endl;
        cout << "Enter 6 digit pin: ";
        cin >> pin;
        cout << "\nAll Done!\n"
             << endl;
    }
    void block_account()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter CNIC Number: ";
        cin >> cnic;
        cout << "Enter Your Account Number: ";
        cin >> acc_num;
        cout << "Enter 6 digit pin: ";
        cin >> pin;
        cout << "Are you sure you want to continue?(y/n): ";
        cin >> confirmation;
        if (confirmation == 'y')
            cout << "Account Successfully Blocked!\n";
        else
            cout << "Process Aborted.\n";
    }
    void virtual deposit()
    {
        cout << "Base class deposit" << endl;
    }
    void virtual display_info()
    {
        cout << "Base class display_info" << endl;
    }
    void virtual widtdraw()
    {
        cout << "Base class witdraw" << endl;
    }
};

class accountOperations
{
public:
    bool isCreating;
    bool isBlocking;
    accountManagement acc;
    // accountManagement *ptrAcc = &acc;
public:
    accountOperations()
    {
        isCreating = false;
        isBlocking = false;
    }
    void Create()
    {
        isCreating = true;
        isBlocking = false;
    }
    void Block()
    {
        isCreating = false;
        isBlocking = true;
    }
    void create_account()
    {
        if (isCreating)
        {
            acc.create_account();
        }
    }
    void block_account()
    {
        if (isBlocking)
        {
            acc.block_account();
        }
    }
};

class accountInfo : virtual public accountManagement
{
private:
    string verification;

public:
    void display_info(accountManagement acc)
    {
        accountManagement *acc2 = &acc;
        cout << "\nEnter your pin to continue: ";
        cin >> verification;
        if (verification == acc2->pin)
        {
            cout << "--------------------------------------------" << endl;
            cout << "Name: " << acc2->name << endl;
            cout << "CNIC: " << acc2->cnic << endl;
            cout << "Account Type: " << acc2->acc_type << endl;
            cout << "Balance: "
                 << "RS. " << acc2->balance << endl;
            cout << "Account Number: " << acc2->acc_num << endl;
            cout << "--------------------------------------------" << endl;
        }
        else
            cout << "Pin Incorrect!" << endl;
    }
};

class transactions : virtual public accountManagement
{
private:
    double amount;

public:
    double deposit(accountManagement acc)
    {
        accountManagement *acc2 = &acc;
        cout << "--------------------------------------------" << endl;
        cout << "Current Balance: " << acc2->balance << endl;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        acc2->balance += amount;
        cout << "Deposit Successful!" << endl;
        cout << "Your account balance after the deposit is: RS. " << acc2->balance << endl;
        cout << "--------------------------------------------" << endl;
        return acc2->balance;
    }

    double widtdraw(accountManagement acc)
    {
        accountManagement *acc2 = &acc;
        cout << "--------------------------------------------" << endl;
        cout << "Current Balance: " << acc2->balance << endl;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > acc2->balance)
        {
            cout << "You donot have enough money in your account. Try again." << endl;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
        }
        else
        {
            acc2->balance -= amount;
            cout << "Widtdrawal Successful!" << endl;
            cout << "Your account balance after the withdrawal is: RS. " << acc2->balance << endl;
            cout << "--------------------------------------------" << endl;
        }
        return acc2->balance;
    }
};

class customerInteraction
{
private:
    char choice, startupChoice;
    accountOperations opr;
    accountOperations *ptr = &opr;
    accountInfo inf;
    // accountManagement *ptr2 = &inf;
    transactions tr1;
    // accountManagement *ptr3 = &tr1;

public:
    customerInteraction()
    {
        cout << "Welcome!\nSelect an option.\nPress '1' to create an account or '2' to block: ";
        cin >> startupChoice;
        if (startupChoice == '1')
        {
            ptr->Create();
            ptr->create_account();
        }
        else if (startupChoice == '2')
        {
            ptr->Block();
            ptr->block_account();
        }
    }

    void close_program()
    {
        cout << "\nThank you for your time. Goodbye!\n";
        cout << "\nPress any key close";
        // getch();
    }

    void functionalities()
    {
        if (startupChoice == '1')
        {
            do
            {
                cout << "\nWhat other functionalities do you want to use?" << endl
                     << "\nPress 1 for checking your balance.\nPress 2 to deposit cash.\nPress 3 to withdraw cash." << endl;
                cout << "Enter your choice: (1/2/3): ";
                cin >> choice;
                if (choice == '1')
                    inf.display_info(ptr->acc);
                else if (choice == '2')
                {
                    // ptr3->deposit();
                    double x = tr1.deposit(ptr->acc);
                    ptr->acc.balance = x;
                }

                else if (choice == '3')
                {
                    // ptr3->widtdraw();
                    double x = tr1.widtdraw(ptr->acc);
                    ptr->acc.balance = x;
                }
                cout << "Do you want to continue?(y/n) ";
                cin >> choice;
            } while (choice == 'y');

            if (choice == 'n')
                close_program();
        }

        else
            close_program();
    }
};

int main()
{
    int choice;
    customerInteraction c1;
    c1.functionalities();
    return 0;
}