#include <iostream>
using namespace std;

enum class Cell : int
{
    blank = 0,
    p1virus = 1,
    p2virus = 2,
    p1food = 3,
    p2food = 4
};

const int N = 8;
Cell field[N][N];

void putcross(string command, int player)
{
    string s;
    int i = 0;
    int x=0;
    int y=0;
    while (command[i]>47 && s[i]<58)
    {
        s+=command[i];
        i++;
        x = stoi(s);
    }
    string s2;
    if (command[i]==':')
    {
        while (command[i]>47 && s[i]<58)
        {
            s2+=command[i];
            i++;
        }
        y = stoi(s2);
    }
    else
    {
        cout << "Wrong command" << endl;
    }
    if (player==1)
        field[x][y]=Cell::p1virus;
    else
        field[x][y]=Cell::p2virus;
}

void printfield()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << ". ";
        cout << "\n";
    }
};

int main()
{
    printfield ();
    return 1;
}

// changes
