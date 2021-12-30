#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, c0 = 0, c1 = 0;
        cin >> N;
        string str;
        cin >> str;
        for (int i = 0; i < N; i++)
        {
            if (str[i] == '0')
                c0++;
            else
                c1++;
        }
        if (c0 == 0 || c1 == 0)
            cout << 0 << endl;
        else if (c0 < c1)
            cout << c0 - 1 << endl;
        else if (c1 <= c0)
            cout << c1 - 1 << endl;
    }
    return 0;
}