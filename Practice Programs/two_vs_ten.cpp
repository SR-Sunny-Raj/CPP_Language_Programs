#include <iostream>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll X;
        cin >> X;
        if (X % 10 == 0)
            cout << "0" << endl;
        else if (X % 5 == 0)
            cout << "1" << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}