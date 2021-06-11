#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int T, n, h, l1, u1, l2, flag;
    string S;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> S;
        n = S.size();
        h = n / 2;
        char arr[h], brr[h];
        if (n % 2 == 1)
        {
            u1 = h;
            l2 = h + 1;
        }
        else
        {
            u1 = h;
            l2 = h;
        }
        for (l1 = 0; l1 < u1; l1++)
        {
            for (int j = l2; j < n; j++)
            {
                if (S[l1] == S[j])
                {
                    S[j] = '-';
                    flag = 1;
                    break;
                }
                flag = 0;
            }
            if (flag == 0)
                break;
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}