#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 7; i++)
    {
        if (i < 4)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << (i * 2) - (j * 2) + 1;
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j <= (3 - (i - 3)); j++)
            {
                cout << ((3 - (i - 3)) * 2) - (j * 2) + 1;
            }
            cout << endl;
        }
    }
    return 0;
}