#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A = 0, B = 0, C = 0, D = 0;
        cin >> A >> B >> C >> D;
        if (A + C == 180 && B + D == 180)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}