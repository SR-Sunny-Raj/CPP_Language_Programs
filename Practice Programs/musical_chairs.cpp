#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solution()
{
    ll N;
    cin >> N;
    N -= 1;
    ll X = 0;
    for (ll i = 1; (i * i) < N; i++)
    {
        if (N % i == 0)
        {
            X += 2;
        }
        if (pow((ll)sqrt(N), 2) == N)
            X += 1;
        cout << X << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solution();
        // int N, count = 1;
        // cin >> N;
        // for (int i = 2; i < N; i++)
        // {
        //     if (N % i == 1)
        //         count++;
        // }
        // cout << count << endl;
    }
    return 0;
}