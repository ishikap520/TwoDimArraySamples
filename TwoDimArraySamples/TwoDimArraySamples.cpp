#include <iostream>
using namespace std;

int main()
{
    int grades[4][4] = { {10,11,12,13},{20,21,22,23},{30,31,32,33},{40,41,42,43} };
    for (int r=0;r<4;r++)
    {
        for (int c=0;c<4;c++)
        {
            cout << grades[r][c] << " ";
        }
        cout << endl;
    }
}
