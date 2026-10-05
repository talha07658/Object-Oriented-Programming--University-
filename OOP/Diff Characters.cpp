#include<iostream>
using namespace std;

int main()
{
    for (int i=1; i<=5; i++)
    {
        // Pehla letter
        for (int j=1; j<=5; j++)
        {
            if (i==1 || i==3 || j==1 || j==5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        // Space
        cout << "     ";

        // Doosra letter
        for (int a=1; a<=5; a++)
        {
            if (i==1 || i==3 || i==5 || a==1 || a==5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        // Space
        cout << "     ";

        // Teesra letter
        for (int b=1; b<=5; b++)
        {
            if (i==1 || i==5 || b==1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "     ";

         // chotha letter 
    for (int c=1; c<=5;c++)
    {
        if (i==1 || i==5 || c==1 || c==5)
        {
            cout << "*";
        }
        else 
        {
            cout << " ";
        }
     
    }
    cout << "     ";

         // Fifth letter 
    for (int d=1; d<=5;d++)
    {
        if (i==1 || i==3 || d==1)
        {
            cout << "*";
        }
        else 
        {
            cout << " ";
        }
     
    }
    
     cout << "     ";

         // sixth letter 
    for (int e=1; e<=5;e++)
    {
        if (i==3 || e==1 || e==5)
        {
            cout << "*";
        }
        else 
        {
            cout << " ";
        }
     
    }

     cout << "     ";

         // seventh letter 
    for (int f=1; f<=5;f++)
    {
        if (i==1 || i==5 || f==3)
        {
            cout << "*";
        }
        else 
        {
            cout << " ";
        }
     
    }

     cout << "     ";

         // eight letter 
    for (int k=1; k<=5;k++)
    {
        if (i==5 || k==1)
        {
            cout << "*";
        }
        else 
        {
            cout << " ";
        }
     
    }

     cout << "     ";

         // ninth letter 
    for (int l=1; l<=5;l++)
    {
        if (i==1 || i==5 || l==1 || l==5)
        {
            cout << "*";
        }
        else 
        {
            cout << " ";
        }
     
    }

     cout << "     ";

         // Tenth letter 
    for (int m=1; m<=5;m++)
    {
        if (i==1 || m==3 )
        {
            cout << "*";
        }
        else 
        {
            cout << " ";
        }
     
    }
cout << endl;
    }

    return 0;
}