#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string X, Y;
        int flag = 1;
        cin >> X >> Y;
        for (int i = 0; i < X.size(); i++)
        {
            if (X[i] == Y[i])
                continue;
            else if (X[i] == '?' || Y[i] == '?')
                continue;
            else if (X[i] != Y[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}