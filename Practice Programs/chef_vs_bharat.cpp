#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll getPower(ll base, ll power)
{
    ll res = 1;
    while (power != 0)
    {
        if (power % 2 == 0)
        {
            base = ((base % mod) * (base % mod)) % mod;
            power = floor(power / 2);
        }
        else
        {
            res = ((res % mod) * (base % mod)) % mod;
            power = power - 1;
        }
    }
    return res;
}

ll chefona(ll num)
{
    ll chefnum = num;
    ll retnum = 0;
    if (num < 10)
    {
        return chefnum;
    }
    else if (num >= 10)
    {
        num = num / 10;
        while (num != 0)
        {
            chefnum = chefnum * 10 + num % 10;
            num = num / 10;
        }
        return chefnum;
    }
    return retnum;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a[100001] = {0};
    ll prearray[100001] = {0};
    for (ll i = 1; i < 100001; i++)
    {
        a[i] = chefona(i);
        prearray[i] = prearray[i - 1] + a[i];
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll diff = prearray[r] - prearray[l];
        cout << getPower(a[l], diff) << endl;
    }
    return 0;
}