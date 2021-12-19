#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        ll arr[N];
        for (ll j = 0; j < N; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + N);
        cout << abs((arr[N / 2]) - (arr[N / 2 - 1])) << endl;
    }
    return 0;
}