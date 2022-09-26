#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int fp = 0, lp = str.size() - 1;
    while (fp < lp)
    {
        str[fp] = str[fp] ^ str[lp];
        str[lp] = str[fp] ^ str[lp];
        str[fp] = str[fp] ^ str[lp];
        fp++;
        lp--;
    }
    cout << str << endl;
    return 0;
}