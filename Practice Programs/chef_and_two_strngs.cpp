#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int min = 0, max = 0;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == '?' || s2[i] == '?')
            {
                min += 0;
                max += 1;
            }
            else if (s1[i] != s2[i])
            {
                min += 1;
                max += 1;
            }
        }
        cout << min << " " << max << endl;
    }
    return 0;
}