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
    for(int i=2, j=2; i<=8; i++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=5, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color ");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=10, j=8; j>=2; j--)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=10, j=2; i<=16; i++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=16, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=10, j=5; i<=16; i++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=19, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=19, j=8; i<=25; i++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=28, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=34, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=28, j=5; i<=34; i++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=37, j=8; j>=2; j--)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=37, j=2; i<=43; i++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=43, j=2; j<=8; j++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=37, j=5; i<=43; i++)
    {
        Sleep(100);
        system("color 0B");
        gotoxy(i,j);
        cout<<"*";
    }

    getch();
}