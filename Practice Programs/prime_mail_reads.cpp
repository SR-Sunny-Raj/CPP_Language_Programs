#include <bits/stdc++.h>
#define i int
using namespace std;
bool isPrime(i N)
{
    if (N == 1 || N == 0)
        return false;

    for (i k = 2; k < N; k++)
    {
        if (N % k == 0)
            return false;
    }
    return true;
}

// int binarySearch(int arr[], int l, int r, int x)
// {
//     if (r >= l)
//     {
//         int mid = l + (r - l) / 2;
//         if (arr[mid] == x)
//             return mid;
//         if (arr[mid] > x)
//             return binarySearch(arr, l, mid - 1, x);
//         return binarySearch(arr, mid + 1, r, x);
//     }
//     return -1;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    i sum = 0, S, N, ans = 1;
    cin >> N;
    while (N > 1)
    {
        sum = 0;
        ans = ans + 1;
        for (S = 1; S <= N; S++)
        {
            if (isPrime(S))
                sum += 1;
        }
        N = N - sum;
    }
    cout << ans;
}