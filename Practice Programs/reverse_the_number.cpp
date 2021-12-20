#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, rev = 0;
        cin >> N;
        while (N != 0)
        {
            rev = (rev * 10) + (N % 10);
            N /= 10;
        }
        cout << rev << endl;
    }
    return 0;
}