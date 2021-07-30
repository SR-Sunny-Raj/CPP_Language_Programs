#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, maxmul, maxrat, flag = 1, maxMind = 0, maxRind = 0, flag1 = 1;
        cin >> n;
        int length[n], rating[n];
        for (int i = 0; i < n; i++)
        {
            cin >> length[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> rating[i];
        }
        maxmul = length[0] * rating[0];
        maxrat = rating[0];
        for (int i = 0; i < n; i++)
        {
            if ((length[i] * rating[i]) > maxmul)
            {
                maxmul = length[i] * rating[i];
                maxMind = i;
            }
            if (rating[i] > maxrat)
            {
                maxrat = rating[i];
                maxRind = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (maxmul == (length[i] * rating[i]) && maxMind != i)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << (maxMind + 1) << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (rating[i] == maxrat && maxRind != i)
                {
                    flag1 = 0;
                    break;
                }
            }
            if (flag1 == 1)
                cout << maxRind + 1 << endl;
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (rating[i] == maxrat)
                    {
                        maxRind = i;
                        break;
                    }
                }
                cout << maxRind + 1 << endl;
            }
        }
    }
    return 0;
}