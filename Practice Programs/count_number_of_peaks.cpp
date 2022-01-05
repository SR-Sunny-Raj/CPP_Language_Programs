#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        ll res = 0;
        if (N == 3)
            cout << 10 << endl;
        else if (N > 3)
        {
            res = pow(3, (N - 3)) * 8 * (N - 2);
            res += (res / 4);
            cout << res << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}