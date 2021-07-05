#include <bits/stdc++.h>
using namespace std;
int gcd(int p, int q)
{
    for (;;)
    {
        if (p == 0)
            return q;
        q %= p;
        if (q == 0)
            return p;
        p %= q;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, gd;
        cin >> N;
        int arr[N];
        cin >> arr[0] >> arr[1];
        gd = gcd(arr[0], arr[1]);
        for (int i = 2; i < N; i++)
        {
            cin >> arr[i];
            gd = gcd(gd, arr[i]);
        }
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] / gd << " ";
        }
        cout << endl;
    }
    return 0;
}