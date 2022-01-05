#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<ll> vectA;
        for (int i = 0; i < N; i++)
        {
            ll x;
            cin >> x;
            vectA.push_back(x);
        }
        vector<ll> vectB;
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                ll x = vectA[i] & vectA[j];
                vectB.push_back(x);
            }
        }
        // for (auto it = vectB.begin(); it != vectB.end(); it++)
        // {
        //     cout << ' ' << *it;
        // }
        // cout << vectB.size() << endl;
        while (vectB.size() != 1)
        {
            ll maxE = *max_element(vectB.begin(), vectB.end());
            ll minE = *min_element(vectB.begin(), vectB.end());
            ll val = (minE | maxE);
            vector<ll>::iterator it1, it2;
            int minEI = min_element(vectB.begin(), vectB.end()) - vectB.begin();
            it1 = vectB.begin() + minEI;
            vectB.erase(it1);
            int maxEI = max_element(vectB.begin(), vectB.end()) - vectB.begin();
            it2 = vectB.begin() + maxEI;
            vectB.erase(it2);
            // cout << minEI << ' ' << maxEI;
            // cout << maxE << ' ' << minE << endl;
            vectB.push_back(val);
            // for (auto it = vectB.begin(); it != vectB.end(); it++)
            // {
            //     cout << ' ' << *it;
            // }
            // cout << endl;
            // cout << (minE | maxE);
        }
        vector<ll>::iterator it = vectB.begin();
        cout << *it << endl;
    }
    return 0;
}