#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, sum = 0;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        cout << arr[0] * (arr.size() - 1) << endl;
    }
    return 0;
}