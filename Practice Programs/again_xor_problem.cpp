#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        string str;
        cin >> str;
        int temp = stoi(str.substr(0, K));
        for (int i = 1; i <= (N - K); i++)
        {
            temp = temp ^ stoi(str.substr(i, K));
        }
        int count1 = 0;
        while (temp != 0)
        {
            int rem = temp % 10;
            if (rem == 1)
                count1++;
            temp /= 10;
        }
        cout << count1 << endl;
    }
    return 0;
}