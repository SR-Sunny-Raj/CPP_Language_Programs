#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back

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
    vll temp;
    for (int i = 0; i < 17; i++)
    {
        for (int j = i + 1; j < 18; j++)
        {
            for (int k = j + 1; k < 19; k++)
            {
                for (int l = k + 1; l < 20; l++)
                {
                    ll val = (1 << l) + (1 << k) + (1 << j) + (1 << i);
                    temp.pb(val);
                }
                if (temp.size() == 1000)
                {
                    break;
                }
            }
            if (temp.size() == 1000)
            {
                break;
            }
        }
        if (temp.size() == 1000)
        {
            break;
        }
    }

    int T;
    cin >> T;
    while (T--)
    {

        ll N;
        cin >> N;

        for (int i = 0; i < N; i++)
        {
            cout << temp[i] << " ";
        }
        cout << endl;
    }

    return 0;
}