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
        string lstr = str.substr(1) + str[0];
        string rstr = str[str.size() - 1] + str.substr(0, str.size() - 1);
        if (str.size() < 3)
        {
            cout << "YES" << endl;
        }
        else if (lstr == rstr)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}