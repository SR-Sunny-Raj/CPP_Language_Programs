#include <bits/stdc++.h>
#define y 100
#define z 100
using namespace std;
int maxval(int arr[y][z], int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            arr[i][j] = arr[i][j] + max(arr[i + 1][j], arr[i + 1][j + 1]);
        }
    }
    return arr[0][0];
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int r;
        cin >> r;
        int arr[y][z];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << maxval(arr, r) << endl;
    }
}