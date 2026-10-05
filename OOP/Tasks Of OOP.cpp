// TALHA MUBEEN
// ROLL NO.025
#include<iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 20; j++)
        {
            if (i == 1 || i == 20 || j == 1 || j == 20)
            {
                cout << "* ";
            }
            else if (i == 10 && j == 8)
            {
                cout << "Talha";
                j = 10;
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }


    cout << endl;
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 5)
        {
            cout << "1";
        }
        else if (i == 2 || i == 4)
        {
            cout << " 2";
        }
        else
        {
            cout << "   3";
        }

        if (i == 1 || i == 5)
        {
            cout << "       ";
        }
        else if (i == 2 || i == 4)
        {
            cout << "   ";
        }

        if (i == 1 || i == 5)
        {
            cout << "5";
        }
        else if (i == 2 || i == 4)
        {
            cout << "4";
        }

        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 5)
        {
            cout << "5";
        }
        else if (i == 2 || i == 4)
        {
            cout << " 4";
        }
        else
        {
            cout << "   3";
        }

        if (i == 1 || i == 5)
        {
            cout << "       ";
        }
        else if (i == 2 || i == 4)
        {
            cout << "   ";
        }

        if (i == 1 || i == 5)
        {
            cout << "1";
        }
        else if (i == 2 || i == 4)
        {
            cout << "2";
        }

        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "A";
            }
            else if (j == 2)
            {
                cout << "B";
            }
            else if (j == 3)
            {
                cout << "C";
            }
            else if (j == 4)
            {
                cout << "D";
            }
            else if (j == 5)
            {
                cout << "E";
            }
        }

        cout << endl;

    }
        cout << endl;
    return 0;
}