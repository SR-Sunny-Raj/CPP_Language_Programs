#include <bits/stdc++.h>
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
        int arr[N];
        long long brr[40] = {0};
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            int x = 0;
            int y = arr[i];
            while (y >= 2)
            {
                y /= 2;
                x++;
            }
            brr[x]++;
        }
        long long ans = 0;
        for (int i = 0; i < 40; i++)
        {
            ans = (brr[i] * (brr[i] - 1)) / 2 + ans;
        }
        cout << ans << endl;
    }
    return 0;
}