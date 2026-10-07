#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}
int main()
{
    int i, j;
    for(int i=2, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=2, j=2; i<=8; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=2, j=5; i<=7; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=11, j=2; i<=16; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=11, j=8; i<=16; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=11, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=16, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=19, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=25, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=19, j=8; i<=25; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=28, j=8; j>=2; j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=28, j=2; i<=34 && j<=8; i++,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=34, j=8; j>=2; j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=37, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=37, j=2; i<=42; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=37, j=8; i<=42; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=42, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=45, j=8; j>=2; j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=45, j=2; i<=51; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=51, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=45, j=5; i<=51; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=54, j=2; i<=60; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=57, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=63, j=2; i<=69; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=66, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=63, j=8; i<=69; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=72, j=2; i<=77; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=72, j=8; i<=77; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=72, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=77, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=80, j=8; j>=2; j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=80, j=2; i<=86 && j<=8; i++,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=86, j=8; j>=2; j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    for(int i=89, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=95, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=89, j=8; i<=95; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=98, j=8; j>=2; j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=98, j=2; i<=104 && j<=8; i++,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=104, j=8; j>=2; j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=107, j=2; i<=113; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=110, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=107, j=8; i<=113; i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    getch();
}