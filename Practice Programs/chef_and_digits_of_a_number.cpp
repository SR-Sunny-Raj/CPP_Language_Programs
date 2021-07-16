#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '0')
                count0++;
            else
                count1++;
        }
        if (count0 == 1 || count1 == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}