#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, D;
        cin >> N >> D;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int brr[D];
        for (int i = 0; i < D; i++)
        {
            brr[i] = arr[i];
        }
        for (int i = 0; i < N - D; i++)
        {
            arr[i] = arr[i + D];
        }
        for (int i = N - D; i < N; i++)
        {
            arr[i] = brr[i - (N - D)];
        }
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}