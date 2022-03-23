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
        int start = 1, sum = 0, end = (int)log2(N), ans = 0;
        for (int i = 1; i < end; ++i)
        {
            sum += start;
            start *= 2;
            ans += sum;
        }
        ans += (N - (int)pow(2, end));
        cout << ans << endl;
    }
    return 0;
}