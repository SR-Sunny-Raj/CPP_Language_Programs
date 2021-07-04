#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    ll arr[t];
    for (ll i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + t);
    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}