#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    cin >> T;
    string S;
    while (T--)
    {
        int flagn = 0, flagu = 0, flagl = 0;
        cin >> S;
        for (int i = 0; i < S.size(); i++)
        {
            if (int(S[i]) >= 48 && int(S[i]) <= 57)
            {
                flagn = 1;
            }
            else if (int(S[i]) >= 65 && int(S[i]) <= 90)
            {
                flagu = 1;
            }
            else if (int(S[i]) >= 97 && int(S[i]) <= 122)
            {
                flagl = 1;
            }
        }
        if (flagn == 1 && flagu == 1 && flagl == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}