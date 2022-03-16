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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (N < 3)
        {
            cout << "-1" << endl;
            continue;
        }
        if (N % 2 == 1)
        {
            for (int i = 1; i <= N; i++)
                cout << i << " ";
            cout << endl;
            continue;
        }
        cout << "2 3 1 4 ";
        for (int j = 5; j < N + 1; j++)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}