#include <iostream>
using namespace std;
int main()
{
    int T, flag = 1;
    cin >> T;
    while (T--)
    {
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
        if (x2 < x1)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (y2 < y1)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (z2 > z1)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}