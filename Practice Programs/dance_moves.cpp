#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, diff, count = 0;
        cin >> X >> Y;
        if (X <= Y)
        {
            diff = Y - X;
            count = diff / 2;
            diff %= 2;
            if (diff == 1)
                count += 2;
        }
        else
        {
            count = X - Y;
        }
        cout << count << endl;
    }
    return 0;
}