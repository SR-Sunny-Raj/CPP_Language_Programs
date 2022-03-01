#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void binarySearch()
{
    int l;
    int r;
    int x;
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        // if (mid == x)
        //     // return mid;

        //     // If element is smaller than mid, then
        //     // it can only be present in left subarray
        //     if (mid > x)
        // return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        // return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
}

ll cDivisor(ll N)
{
    ll count = 0;
    for (ll i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            if (N / i == i)
            {
                count++;
            }
            else
                count += 2;
        }
    }
    return count;
}

void isPrime(ll N)
{
    if (N == 3)
        return;
    for (ll i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return;
            break;
        }
    }
    return;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int K = log2(N);
        cout << K << endl;
    }
    return 0;
}