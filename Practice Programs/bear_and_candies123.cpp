#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        for (int i = 1; (A >= 0 && B >= 0); i++)
        {
            if (i % 2 == 1)
                A -= i;
            else
                B -= i;
        }
        if (A < 0)
            cout << "Bob" << endl;
        else if (B < 0)
            cout << "Limak" << endl;
    }
    return 0;
}