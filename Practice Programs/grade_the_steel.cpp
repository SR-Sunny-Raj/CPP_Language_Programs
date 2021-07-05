#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        double h, cc, ts;
        int con1 = 0, con2 = 0, con3 = 0;
        cin >> h >> cc >> ts;
        if (h > 50)
            con1 = 1;
        if (cc < 0.7)
            con2 = 1;
        if (ts > 5600)
            con3 = 1;
        if (con1 == 1 && con2 == 1 && con3 == 1)
            cout << 10 << endl;
        else if ((con1 == 1 && con2 == 1))
            cout << 9 << endl;
        else if (con2 == 1 && con3 == 1)
            cout << 8 << endl;
        else if (con1 == 1 && con3 == 1)
            cout << 7 << endl;
        else if (con1 == 1 || con2 == 1 || con3 == 1)
            cout << 6 << endl;
        else
            cout << 5 << endl;
    }
    return 0;
}