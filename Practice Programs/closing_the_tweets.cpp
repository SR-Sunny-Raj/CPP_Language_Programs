#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K, count = 0;
    cin >> N >> K;
    int arr[N] = {0};
    for (int i = 0; i < K; i++)
    {
        string str;
        int x;
        cin >> str;
        if (str == "CLICK")
        {
            cin >> x;
            x = x - 1;
            if (arr[x] == 0)
            {
                arr[x] = 1;
                count++;
            }
            else if (arr[x] == 1)
            {
                arr[x] = 0;
                count--;
            }
            cout << count << endl;
        }
        else if (str == "CLOSEALL")
        {
            // arr[N] = {0};
            for (int j = 0; j < N; j++)
                arr[j] = 0;
            count = 0;
            cout << count << endl;
        }
    }
    return 0;
}