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
        vector<int> vec(N, 1);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = N - 2; i >= 0; i--)
        {
            if (arr[i] > 0 && arr[i + 1] < 0 || arr[i] < 0 && arr[i + 1] > 0)
            {
                vec[i] += vec[i + 1];
            }
        }
        for (auto x : vec)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}