#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        int power = 0;
        for (int i = 0; i < str.size(); i++)
        {
            char ch = str[i];
            power += ((i + 1) * (ch - 96));
        }
        cout << power << endl;
    }
    return 0;
}