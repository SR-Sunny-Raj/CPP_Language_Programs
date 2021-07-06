#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, maxC = -1;
        cin >> N >> K;
        for (int i = 1; i <= K; i++)
        {
            if (N % i > maxC)
                maxC = N % i;
        }
        cout << maxC << endl;
    }
    return 0;
}