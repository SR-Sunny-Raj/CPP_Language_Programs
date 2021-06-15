#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int num;
        cin >> num;
        int f, l = num % 10;
        while (num)
        {
            f = num;
            num = num / 10;
        }
        cout << (f + l) << endl;
    }
    return 0;
}