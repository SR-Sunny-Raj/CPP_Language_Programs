#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    while (q--)
    {
        long long int x, y, sum = 0l;
        cin >> x >> y;
        for (long long int i = n - x; i < n && y--; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}