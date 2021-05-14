#include <iostream>
using namespace std;
int main()
{
    int x;
    float y;
    cout.precision(2);
    cin >> x >> y;
    if (x + 0.5 <= y && x % 5 == 0)
    {
        // Successful Transaction
        y = y - x - 0.50;
        cout << fixed << y;
    }
    else
    {
        // Insufficient Funds
        // Incorrect withdraxl Amount (not multiple of 5)
        cout << fixed << y;
        ;
    }
    return 0;
}