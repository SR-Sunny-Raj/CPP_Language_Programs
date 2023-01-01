#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, res = 0;
        cin >> N >> K;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int ans[N] = {0};
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == (i + 1))
            {
                ans[i] = -999;
            }
            else
            {
                ans[arr[i] - 1]++;
            }
        }
        for (int i = 0; i < N; i++)
        {
            if (ans[i] >= K)
            {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}