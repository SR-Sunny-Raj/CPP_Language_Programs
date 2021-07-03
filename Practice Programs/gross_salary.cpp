#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int sal;
        double gsal = 0;
        cin >> sal;
        if (sal < 1500)
        {
            gsal = sal + (sal * 0.1) + (sal * 0.9);
        }
        else
        {
            gsal = sal + 500 + (sal * 0.98);
        }
        if ((gsal - int(gsal)) > 0)
        {
            cout << fixed << setprecision(2) << gsal << endl;
        }
        else
            cout << int(gsal) << endl;
    }
    return 0;
}