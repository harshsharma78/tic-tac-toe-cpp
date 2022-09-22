#include <iostream>
#include <cstring>
using namespace std;

void display();

void input();

int finish();

void end();

char a[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int i, j, k, f = 1;

int main()
{
    cout << "Welcome To The TIC TAC TOE" << endl;
    display();

    while (f != 0)
    {
        input();
        display();
        end();
    }
}

int finish()
{
    if ((a[0] == 'X') && (a[1] == 'X') && (a[2] == 'X'))
        return 1;
    else if ((a[0] == 'X') && (a[3] == 'X') && (a[6] == 'X'))
        return 1;
    else if ((a[0] == 'X') && (a[4] == 'X') && (a[8] == 'X'))
        return 1;
    else if ((a[1] == 'X') && (a[4] == 'X') && (a[7] == 'X'))
        return 1;
    else if ((a[2] == 'X') && (a[5] == 'X') && (a[8] == 'X'))
        return 1;
    else if ((a[2] == 'X') && (a[4] == 'X') && (a[6] == 'X'))
        return 1;
    else if ((a[3] == 'X') && (a[4] == 'X') && (a[5] == 'X'))
        return 1;
    else if ((a[6] == 'X') && (a[7] == 'X') && (a[8] == 'X'))
        return 1;

    else if ((a[0] == 'O') && (a[3] == 'O') && (a[6] == 'O'))
        return 2;
    else if ((a[0] == 'O') && (a[4] == 'O') && (a[8] == 'O'))
        return 2;
    else if ((a[1] == 'O') && (a[4] == 'O') && (a[7] == 'O'))
        return 2;
    else if ((a[2] == 'O') && (a[5] == 'O') && (a[8] == 'O'))
        return 2;
    else if ((a[2] == 'O') && (a[4] == 'O') && (a[6] == 'O'))
        return 2;
    else if ((a[3] == 'O') && (a[4] == 'O') && (a[5] == 'O'))
        return 2;
    else if ((a[6] == 'O') && (a[7] == 'O') && (a[8] == 'O'))
        return 2;

    else
    {
        return 3;
    }
}

void display()
{
    cout << " " << a[0] << " "
         << "| " << a[1] << " "
         << "| " << a[2] << " " << endl
         << "-----------" << endl
         << " " << a[3] << " "
         << "| " << a[4] << " "
         << "| " << a[5] << " " << endl
         << "-----------" << endl
         << " " << a[6] << " "
         << "| " << a[7] << " "
         << "| " << a[8] << " " << endl;
}

void end()
{

    int v = finish();
    if (v == 1)
    {
        cout << "Player 1st has won the game " << endl;
        f = 0;
    }
    else if (v == 2)
    {
        cout << "Player 2nd has won the game " << endl;
        f = 0;
    }
}

void input()
{
    char ch;
    cout << "Enter any number from 1 to 9" << endl;
    cin >> ch;
    if (k == 0)
    {
        for (j = 1; j <= 9; j++)
        {
            if (a[j] == ch)
            {
                a[j] = 'X';

                k = 1;
                break;
            }
        }
    }
    else
    {
        for (j = 1; j <= 9; j++)
        {
            if (a[j] == ch)
            {
                a[j] = 'O';

                k = 0;
                break;
            }
        }
    }
}