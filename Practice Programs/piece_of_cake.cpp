#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        int flag = 0;
        cin >> S;
        for (int i = 0; i < S.length(); i++)
        {
            int counts = 0, countd = 0;
            for (int j = 0; j < S.length(); j++)
            {
                if (S[i] == S[j])
                    counts++;
                else if (S[i] != S[j])
                    countd++;
            }
            if (counts == countd)
            {
                flag = 1;
                cout << "YES" << endl;
                break;
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
    }
    return 0;
}