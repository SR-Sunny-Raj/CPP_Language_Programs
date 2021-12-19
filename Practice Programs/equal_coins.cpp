#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        if ((X == 0 && Y % 2 != 0) || (Y == 0 && Y % 2 != 0))
        {
            cout << "NO" << endl;
        }
        else if (((X + (Y * 2)) % 2 == 0))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}