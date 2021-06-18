#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string flipCoins(int N, string s)
    {
        string str;
        for (int i = 0; i < N - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
            {
                s[i + 1] = '0';
                s[i] = '1';
            }
            else if (s[i] == '0' && s[i + 1] == '0')
            {
                s[i] = '1';
                s[i + 1] = '1';
            }
        }
        for (int i = 0; i < N; i++)
        {
            if (s[i] == '0')
                return "No";
        }
        return "Yes";
    }
};
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution obj;
        string ans = obj.flipCoins(n, s);
        cout << ans << endl;
    }
}