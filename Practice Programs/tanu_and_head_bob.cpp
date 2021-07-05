#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, flag = 1;
        cin >> N;
        string str;
        cin >> str;
        for (int i = 0; i < N; i++)
        {
            if (str[i] == 'Y')
            {
                cout << "NOT INDIAN" << endl;
                flag = 0;
                break;
            }
            else if (str[i] == 'I')
            {
                cout << "INDIAN" << endl;
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << "NOT SURE" << endl;
    }
    return 0;
}