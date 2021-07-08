#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y, sum = 0;
        cin >> x >> y;
        for (int i = 1; i < 1000; i++)
        {
            int flag = 1;
            sum = x + y + i;
            for (int j = 2; j <= sum / 2; j++)
            {
                if (sum % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}