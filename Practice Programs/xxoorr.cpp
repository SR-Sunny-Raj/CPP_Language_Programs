#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        long arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int brr[33];
        for (int i = 0; i < 33; i++)
        {
            brr[i] = 0;
        }
        for (int i = 0; i < N; i++)
        {
            long x = arr[i];
            int j = 32;
            while (x > 0)
            {
                brr[j] = brr[j] + x % 2;
                x = x / 2;
                j--;
            }
        }
        int sum = 0;
        for (int i = 0; i < 33; i++)
        {
            if (brr[i] % K == 0)
            {
                sum = sum + brr[i] / K;
            }
            else
            {
                sum = sum + (brr[i] / K) + 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}