#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
                continue;
            else
                count++;
        }
        cout << count << endl;
    }
    return 0;
}