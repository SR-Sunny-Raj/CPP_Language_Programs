#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int q, p;
        double exp;
        cin >> q >> p;
        exp = q * p;
        if (q > 1000)
            exp = exp * (0.9);
        // printf("%.6f\n", exp);
        cout << fixed << setprecision(6) << exp << endl;
    }
    return 0;
}