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
    int k;
    cin >> k;
    int res[n];
    for (int i = 0; i < n; i++)
    {
        int index = i + k + 1;
        if (index > n - 1)
        {
            index -= n;
        }
        res[index] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}