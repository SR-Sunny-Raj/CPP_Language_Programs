#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, sum = 0;
        cin >> N;
        while (N != 0)
        {
            sum += (N % 10);
            N /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}