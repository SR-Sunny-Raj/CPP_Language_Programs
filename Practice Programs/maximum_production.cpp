#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int d, x, y, z, max1 = 0, max2 = 0;
        cin >> d >> x >> y >> z;
        max1 = x * 7;
        max2 = ((y * d) + (z * (7 - d)));
        if (max1 > max2)
            cout << max1 << endl;
        else
            cout << max2 << endl;
    }
    return 0;
}