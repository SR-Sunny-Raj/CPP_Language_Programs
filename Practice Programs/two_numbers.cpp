#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll A, B, N;
        cin >> A >> B >> N;
        if (N % 2 == 0)
        {
            cout << (max(A, B) / min(A, B)) << endl;
        }
        else
        {
            A *= 2;
            cout << (max(A, B) / min(A, B)) << endl;
        }
    }
    return 0;
}