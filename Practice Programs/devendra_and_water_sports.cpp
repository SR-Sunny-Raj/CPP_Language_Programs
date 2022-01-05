#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int Z, Y, A, B, C;
        cin >> Z >> Y >> A >> B >> C;
        if ((Z - Y) >= (A + B + C))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}