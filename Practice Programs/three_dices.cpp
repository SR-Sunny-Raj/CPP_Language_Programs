#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        double X, Y, sum;
        cin >> X >> Y;
        sum = X + Y;
        if (sum >= 6)
        {
            cout << 0 << endl;
        }
        else if (sum == 5)
        {
            cout << 0.166666 << endl;
        }
        else if (sum == 4)
        {
            cout << 0.333333 << endl;
        }
        else if (sum == 3)
        {
            cout << 0.5 << endl;
        }
        else if (sum == 2)
        {
            cout << 0.666666 << endl;
        }
    }
    return 0;
}