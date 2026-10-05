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
        name = " ";
        phone = " ";
        pin = " ";
        balance = 0;
    }
    void createAccount()
    {
        
        cout << "          CREATE ACCOUNT " << endl;
        

        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter mobile number: ";
        cin >> phone;

        cout << "Create PIN: ";
        cin >> pin;

        cout << "Enter initial balance: Rs. ";
        cin >> balance;

        cout << " Account created successfully!" << endl;
    }
    int login()
    {
        string enteredPhone;
        string enteredPin;

        cout << "      LOGIN  " << endl;


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

        cout << "     ACCOUNT BALANCE         " << endl;

        cout << "Name    : " << name << endl;
        cout << "Phone   : " << phone << endl;
        cout << "Balance : Rs. " << balance << endl;
    }
    void sendMoney()
    {
        string receiver;
        double amount;
        cout << "       SEND MONEY    " << endl;

        cout << "Enter receiver number: ";
        cin >> receiver;

        cout << "Enter amount: Rs. ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "\nInvalid amount!\n";
        }

        else if (amount > balance)
        {
            cout << "\nInsufficient balance!\n";
        }

        else
        {
            balance = balance - amount;

            cout << "       TRANSACTION SUCCESSFUL   " << endl;

            cout << "Receiver : " << receiver << endl;
            cout << "Amount   : Rs. " << amount << endl;
            cout << "Balance  : Rs. " << balance << endl;
        }
    }
    void mobileLoad()
    {
        int network;
        string number;
        double amount;
        cout << "             MOBILE LOAD\n";
        cout << "1. Jazz\n";
        cout << "2. Zong\n";
        cout << "3. Telenor\n";
        cout << "4. Ufone\n";

        cout << "\nSelect network: ";
        cin >> network;

        cout << "Enter mobile number: ";
        cin >> number;

        cout << "Enter amount: Rs. ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "\nInvalid amount!\n";
        }

        else if (amount > balance)
        {
            cout << "\nInsufficient balance!\n";
        }

        else
        {
            balance = balance - amount;
            cout << "          LOAD SUCCESSFUL     " << endl;
            cout << "Number  : " << number << endl;
            cout << "Amount  : Rs. " << amount << endl;
            cout << "Balance : Rs. " << balance << endl;
        }
    }

    void payBill()
    {
        int billType;
        string consumerNumber;
        double amount;

        cout << "              PAY BILLS\n";
        cout << "1. Electricity\n";
        cout << "2. Gas\n";
        cout << "3. Internet\n";
        cout << "4. Water\n";

        cout << "\nSelect bill type: ";
        cin >> billType;

        cout << "Enter consumer number: ";
        cin >> consumerNumber;

        cout << "Enter bill amount: Rs. ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "\nInvalid amount!\n";
        }

        else if (amount > balance)
        {
            cout << "\nInsufficient balance!\n";
        }

        else
        {
            balance = balance - amount;
            cout << "       BILL PAID SUCCESSFULLY     " << endl;

            cout << "Consumer No. : " << consumerNumber << endl;
            cout << "Amount       : Rs. " << amount << endl;
            cout << "Balance      : Rs. " << balance << endl;
        }
    }
};
int main()
{
    Account user;
    int choice;
    int accountCreated = 0;
    int loggedIn = 0;

    while (choice != 3)
    {
        cout << "\n";
        cout << "<><><><><> JAZZCASH <><><><><>" <<endl;
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
                loggedIn = user.login();
                if (loggedIn == 1)
                {
                    int menuChoice = 0;

                    while (menuChoice != 5)
                    {
                        cout << "\n\n";
                        
                        cout << "     JAZZCASH MENU   " << endl;

                        cout << "Welcome, " << user.name << endl;
                        cout << "Balance: Rs. " << user.balance << endl;

                        cout << "\n";

                        cout << "1. Send Money\n";
                        cout << "2. Mobile Load\n";
                        cout << "3. Pay Bills\n";
                        cout << "4. Check Balance\n";
                        cout << "5. Logout\n";

                        cout << "\nEnter choice: ";
                        cin >> menuChoice;


                        if (menuChoice == 1)
                        {
                            user.sendMoney();
                        }

                        else if (menuChoice == 2)
                        {
                            user.mobileLoad();
                        }

                        else if (menuChoice == 3)
                        {
                            user.payBill();
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

                    loggedIn = 0;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "  Thank you for using JazzCash!  " <<endl;
            cout << " :) " << endl;
        }
        else
        {
            cout << "\nInvalid choice!\n";
        }
    }
    return 0;
}