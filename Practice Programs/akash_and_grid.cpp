#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, x, y;
        cin >> N >> x >> y;
        if (((x % 2 == 0) && (y % 2 == 0)) || ((x % 2 == 1) && (y % 2 == 1)))
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}