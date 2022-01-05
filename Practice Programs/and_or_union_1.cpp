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

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N;
        int arr[N], brr[32] = {0};
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            for (int j = 0; j < 32; j++)
            {
                K = arr[i] >> j;
                if (K & 1)
                    brr[j]++;
            }
        }
        ll X = 0;
        for (int i = 0; i < 32; i++)
        {
            if (brr[i] > 1)
                X += pow(2, i);
        }
        cout << X << endl;
    }
    return 0;
}