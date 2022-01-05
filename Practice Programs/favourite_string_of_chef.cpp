#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string str;
        cin >> str;
        int pos1 = -1, pos2 = -1;
        pos1 = str.find("code");
        pos2 = str.find("chef");
        if (pos1 < pos2)
            cout << "AC" << endl;
        else
            cout << "WA" << endl;
    }
    return 0;
}