#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int brr[N];
        vector<int> crr;
        for (int i = 0; i < N; i++)
        {
            cin >> brr[i];
        }
        unordered_set<int> hashset, resset;
        for (int i = 0; i < N; i++)
        {
            int x = brr[i] - 1;
            while (hashset.count(x) > 0)
            {
                x--;
                if (x < 0)
                {
                    crr.push_back(0);
                }
            }
            if (x >= 0)
            {
                hashset.insert(x);
                crr.push_back(x);
            }
        }

        for (int i = 0; i < N; i++)
        {
            cout << crr[i] << " ";
        }

        // for (int i = 0; i < N; i++)
        // {
        //     int num = 1;
        //     int res = (brr[i] * num) + crr[i];
        //     while (resset.count(res) > 0)
        //     {
        //         num++;
        //         res = (brr[i] * num) + crr[i];
        //     }
        //     cout << res << " ";
        //     resset.insert(res);
        // }
        // for (auto it = resset.begin(); it != resset.end(); ++it)
        // {
        //     cout << (*it) << " ";
        // }
        cout << endl;
    }
    return 0;
}