#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int N;
    cin >> N;
    vector<long> srr(N), p(N);
    long sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> srr[i];
        sum += srr[i];
        p[i] = sum;
    }
    long result = sum;
    for (int i = 0;

         i < N;
         i++)
    {
        result = min(max(p[i], sum - p[i]), result);
    }
    cout << result << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}