#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int odd = 0, even = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] % 2 != 0)
        {
            odd = arr[i];
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even = arr[i];
            break;
        }
    }
    if (odd == 0 || even == 1)
    {
        cout << "None";
    }
    else
    {
        cout << abs(odd - even);
    }
    return 0;
}