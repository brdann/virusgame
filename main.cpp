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

