#include <bits/stdc++.h>
using namespace std;
int PrintMaxMinValue(double a, double b, double c)
{
    int val = c * 1.0 - (b * b / (4.0 * a));

    // Print the values
    if (a > 0)
    {
        return val;
    }
    else if (a < 0)
    {
        return val;
    }
    else
    {
        cout << "Not a quadratic function\n";
    }
}

int main()
{
    double a = -2, b = -8, c = 10;
    cout << PrintMaxMinValue(a, b, c);
    return 0;
}