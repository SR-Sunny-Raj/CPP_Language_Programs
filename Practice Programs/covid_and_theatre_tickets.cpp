#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        if (M % 2 == 1)
            M = (M + 1) / 2;
        else
            M /= 2;
        if (N % 2 == 1)
            N = (N + 1) / 2;
        else
            N /= 2;
        cout << (N * M) << endl;
    }
    return 0;
}