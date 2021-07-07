#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, K, diff = 0;
        cin >> N >> M >> K;
        if (N > M)
        {
            diff = N - M - K;
        }
        else if (M > N)
        {
            diff = M - N - K;
        }
        if (diff >= 0)
            cout << diff << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}