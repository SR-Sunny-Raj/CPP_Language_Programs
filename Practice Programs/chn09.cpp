#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        int counta = 0, countb = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
                counta++;
            else if (s[i] == 'b')
                countb++;
        }
        if (counta == 0 || countb == 0)
            cout << 0 << endl;
        else if (counta > countb)
            cout << countb << endl;
        else if (countb >= counta)
            cout << counta << endl;
    }
    return 0;
}