// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, min;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        // min = arr[0] + arr[1];
        // for (int i = 0; i < N - 1; i++)
        // {
        //     for (int j = i + 1; j < N; j++)
        //     {
        //         if (min > (arr[i] + arr[j]))
        //             min = arr[i] + arr[j];
        //     }
        // }
        sort(arr, arr + N);
        min = arr[0] + arr[1];
        cout << min << endl;
    }
    return 0;
}