#include <iostream>
#include <vector>
#include <string>
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
        vector<string> str((N * 3), "\n");
        vector<int> arr(N * 3, 0);
        for (int i = 0; i < (N * 3); i++)
        {
            string s;
            int x, flag = 0;
            cin >> s >> x;
            for (int j = 0; j < i; j++)
            {
                if (s == str[j])
                {
                    arr[j] = arr[j] + x;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                str[i] = s;
                arr[i] = x;
            }
        }
        // int f;
        // for (int i = 0; i < arr.size() - 1; i++)
        // {
        //     f = 0;
        //     for (int j = 0; j < arr.size() - i - 1; j++)
        //     {
        //         if (arr[j] > arr[j + 1])
        //         {
        //             int temp = arr[j];
        //             arr[j] = arr[j + 1];
        //             arr[j + 1] = temp;
        //             f = 1;
        //         }
        //     }
        //     if (f == 0)
        //         break;
        // }
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     if (arr[i] == 0)
        //         continue;
        //     else
        //         cout << arr[i] << " ";
        // }
        sort(arr.begin(), arr.end());
        for (auto x : arr)
        {
            if (x == 0)
                continue;
            cout << x << " ";
        }
        cout << endl;
    }
}