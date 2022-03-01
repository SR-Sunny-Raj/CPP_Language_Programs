#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, A;
        cin >> N >> A;
        if (N == 1)
        {
            if (A % 2 == 1)
                cout << "ODD" << endl;
            else
                cout << "EVEN" << endl;
        }
        else if (A % 2 == 1)
        {
            if (N % 2 == 1)
                cout << "ODD" << endl;
            else
                cout << "EVEN" << endl;
        }
        else
            cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}