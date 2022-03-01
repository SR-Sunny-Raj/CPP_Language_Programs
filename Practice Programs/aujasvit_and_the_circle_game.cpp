#include <bits/stdc++.h>
#define ll int long long
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

bool isPrime(ll N)
{
    if (N == 3)
        return true;
    for (ll i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

void solution()
{
    ll N;
    cin >> N;
    N -= 1;
    ll X = 0;
    for (ll i = 1; (i * i) < N; i++)
    {
        if (N % i == 0)
        {
            X += 2;
        }
        if (pow((ll)sqrt(N), 2) == N)
            X += 1;
        cout << X << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int M, X;
        cin >> M >> X;
        M--;
        int srr[X];
        srr[0] = 1;
        int varsunny;
        for (int i = 1; i < X; i++)
        {
            varsunny = (M % (i + 1)) + 1;
            if (srr[i - 1] < varsunny)
                srr[i] = srr[i - 1];
            else
                srr[i] = srr[i - 1] + 1;
        }
        for (int i = 0; i < X; i++)
        {
            cout << srr[i] << " ";
        }
    }
    return 0;
}