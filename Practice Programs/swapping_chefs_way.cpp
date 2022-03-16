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
        string str;
        cin >> str;
        string cstr = str;
        for (int i = 0; i < N / 2; i++)
        {
            if (str[i] > str[N - 1 - i])
            {
                char ch = str[i];
                str[i] = str[N - 1 - i];
                str[N - 1 - i] = ch;
            }
        }
        sort(cstr.begin(), cstr.end());
        if (str == cstr)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}