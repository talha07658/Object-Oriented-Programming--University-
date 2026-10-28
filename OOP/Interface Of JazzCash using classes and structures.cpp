
// Talha Mubeen
// 025
// BS Computer Engineering

#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    string name;
    string phone;
    string pin;
    double balance;

    Account()
    {
        name = "";
        phone = "";
        pin = "";
        balance = 0;
    }

    void createAccount()
    {
        cout << "  <<<<<  CREATE ACCOUNT >>>>>  \n";

        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter mobile number: ";
        cin >> phone;

        cout << "Create PIN: ";
        cin >> pin;

        cout << "Enter initial balance: Rs. ";
        cin >> balance;

        cout << "\nAccount created successfully!\n";
    }

    int login()
    {
        string enteredPhone;
        string enteredPin;

        cout << "  <<<<<  LOGIN >>>>>  \n";

        cout << "Enter mobile number: ";
        cin >> enteredPhone;

        cout << "Enter PIN: ";
        cin >> enteredPin;

        if (enteredPhone == phone && enteredPin == pin)
        {
            cout << "\nLogin Successful!\n";
            cout << "Welcome " << name << "!\n";

            return 1;
        }
        else
        {
            cout << "\nWrong phone number or PIN!\n";
            return 0;
        }
    }

    void checkBalance()
    {
        cout << "  <<<<<  ACCOUNT BALANCE >>>>>  \n";

        cout << "Name    : " << name << endl;
        cout << "Phone   : " << phone << endl;
        cout << "Balance : Rs. " << balance << endl;
    }
};


class Transaction
{
public:

    void sendMoney(Account &user)
    {
        string receiver;
        double amount;

        cout << "  <<<<<  SEND MONEY >>>>>  \n";

        cout << "Enter receiver number: ";
        cin >> receiver;

        cout << "Enter amount: Rs. ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "\nInvalid amount!\n";
        }
        else if (amount > user.balance)
        {
            cout << "\nInsufficient balance!\n";
        }
        else
        {
            user.balance = user.balance - amount;

            cout << "\nTransaction Successful!\n";
            cout << "Receiver : " << receiver << endl;
            cout << "Amount   : Rs. " << amount << endl;
            cout << "Balance  : Rs. " << user.balance << endl;
        }
    }

    void mobileLoad(Account &user)
    {
        int network;
        string number;
        double amount;

        cout << "  <<<<<  MOBILE LOAD >>>>>  \n";

        cout << "1. Jazz\n";
        cout << "2. Zong\n";
        cout << "3. Telenor\n";
        cout << "4. Ufone\n";

        cout << "\nSelect network: ";
        cin >> network;

        if (network < 1 || network > 4)
        {
            cout << "\nInvalid network selection!\n";
            return;
        }

        cout << "Enter mobile number: ";
        cin >> number;

        cout << "Enter amount: Rs. ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "\nInvalid amount!\n";
        }
        else if (amount > user.balance)
        {
            cout << "\nInsufficient balance!\n";
        }
        else
        {
            user.balance = user.balance - amount;

            cout << "\nLoad Successful!\n";
            cout << "Network : ";

            if (network == 1)
                cout << "Jazz";
            else if (network == 2)
                cout << "Zong";
            else if (network == 3)
                cout << "Telenor";
            else
                cout << "Ufone";

            cout << endl;

            cout << "Number  : " << number << endl;
            cout << "Amount  : Rs. " << amount << endl;
            cout << "Balance : Rs. " << user.balance << endl;
        }
    }

    void payBill(Account &user)
    {
        int billType;
        string consumerNumber;
        double amount;

        cout << "  <<<<<  PAY BILLS >>>>>  \n";

        cout << "1. Electricity\n";
        cout << "2. Gas\n";
        cout << "3. Internet\n";
        cout << "4. Water\n";

        cout << "\nSelect bill type: ";
        cin >> billType;

        if (billType < 1 || billType > 4)
        {
            cout << "\nInvalid bill type!\n";
            return;
        }

        cout << "Enter consumer number: ";
        cin >> consumerNumber;

        cout << "Enter bill amount: Rs. ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "\nInvalid amount!\n";
        }
        else if (amount > user.balance)
        {
            cout << "\nInsufficient balance!\n";
        }
        else
        {
            user.balance = user.balance - amount;

            cout << "\nBill Paid Successfully!\n";
            cout << "Consumer No. : " << consumerNumber << endl;
            cout << "Amount       : Rs. " << amount << endl;
            cout << "Balance      : Rs. " << user.balance << endl;
        }
    }
};


class JazzCash
{
private:
    Account user;
    Transaction transaction;

    int accountCreated;

public:

    JazzCash()
    {
        accountCreated = 0;
    }

    void mainMenu()
    {
        int choice = 0;

        while (choice != 3)
        {
            cout << "  <<<<<  JAZZCASH >>>>>  \n";

            cout << "1. Create Account\n";
            cout << "2. Login\n";
            cout << "3. Exit\n";

            cout << "\nEnter choice: ";
            cin >> choice;

            if (choice == 1)
            {
                user.createAccount();
                accountCreated = 1;
            }
            else if (choice == 2)
            {
                if (accountCreated == 0)
                {
                    cout << "\nPlease create an account first!\n";
                }
                else
                {
                    int loggedIn = user.login();

                    if (loggedIn == 1)
                    {
                        accountMenu();
                    }
                }
            }
            else if (choice == 3)
            {
                cout << "\nThank you for using JazzCash!\n";
                cout << ":)\n";
            }
            else
            {
                cout << "\nInvalid choice!\n";
            }
        }
    }

    void accountMenu()
    {
        int menuChoice = 0;

        while (menuChoice != 5)
        {
            cout << "  <<<<<  JAZZCASH MENU >>>>>  \n";

            cout << "Welcome, " << user.name << endl;
            cout << "Balance: Rs. " << user.balance << endl;

            cout << "\n1. Send Money\n";
            cout << "2. Mobile Load\n";
            cout << "3. Pay Bills\n";
            cout << "4. Check Balance\n";
            cout << "5. Logout\n";

            cout << "\nEnter choice: ";
            cin >> menuChoice;

            if (menuChoice == 1)
            {
                transaction.sendMoney(user);
            }
            else if (menuChoice == 2)
            {
                transaction.mobileLoad(user);
            }
            else if (menuChoice == 3)
            {
                transaction.payBill(user);
            }
            else if (menuChoice == 4)
            {
                user.checkBalance();
            }
            else if (menuChoice == 5)
            {
                cout << "\nLogged out successfully!\n";
            }
            else
            {
                cout << "\nInvalid choice!\n";
            }
        }
    }
};


int main()
{
    JazzCash app;

    app.mainMenu();

    return 0;
}

