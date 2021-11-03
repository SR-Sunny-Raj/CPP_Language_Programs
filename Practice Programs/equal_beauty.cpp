#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<ll> arr;
        for (int i = 0; i < N; i++)
        {
            ll x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        // for (int i = 0; i < N; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        vector<ll> v;
        ll x = arr[N - 1] - arr[1];
        v.push_back(x);
        x = arr[N - 2] - arr[0];
        v.push_back(x);
        ll min = arr[0], max = arr[N - 1], i = N - 2, j = 1;
        for (i; i > 0; i--)
        {
            for (j; j < N - 1; j++)
            {
                if (j == i)
                    continue;
                else if (j > i + 1)
                    break;
                else
                {
                    ll val1 = arr[i] - min, val2 = max - arr[j];
                    v.push_back(abs(val1 - val2));
                }
            }
        }
        sort(v.begin(), v.end());
        cout << v[0] << endl;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }
    }
    return 0;
}