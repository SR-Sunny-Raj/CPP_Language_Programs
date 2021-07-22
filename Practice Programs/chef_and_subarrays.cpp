#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, sum = 0, prod = 1;
        cin >> N;
        int count = 0, arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            sum = 0, prod = 1;
            for (int j = i; j < N; j++)
            {
                sum += arr[j];
                prod *= arr[j];
                if (sum == prod)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}