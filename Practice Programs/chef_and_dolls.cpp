#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + N);
        for (int i = 0; i < N; i = i + 2)
        {
            if ((arr[i] != arr[i + 1]) || (i == N - 1))
            {
                cout << arr[i] << endl;
                break;
            }
        }
    }
    return 0;
}