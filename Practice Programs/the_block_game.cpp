#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, nump, num = 0;
        cin >> N;
        nump = N;
        while (N != 0)
        {
            num = (num * 10) + (N % 10);
            N = N / 10;
        }
        if (nump == num)
            cout << "wins" << endl;
        else
            cout << "loses" << endl;
    }
    return 0;
}