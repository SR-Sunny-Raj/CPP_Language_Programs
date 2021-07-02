#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int g, c;
        cin >> g >> c;
        cout << int((c * c) / (2 * g)) << endl;
    }
    return 0;
}