#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    setprecision(6);
    int X, Y, N;
    cin >> X >> Y >> N;
    float arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int size1 = N - X + 1, size2 = N - Y + 1;
    float arr1[size1], arr2[size2];
    float sum1 = 0;
    for (int i = 0; i < X; i++)
    {
        sum1 += arr[i];
    }
    arr1[0] = (float)sum1;

    float win_sum = sum1;
    for (int i = X, j = 1; i < N; i++, j++)
    {
        win_sum += arr[i] - arr[i - X];
        arr1[j] = win_sum;
    }

    for (int i = 0; i < size1; i++)
    {
        arr1[i] = (float)arr1[i] / X;
    }
    // for second array
    float sum2 = 0;
    for (int i = 0; i < Y; i++)
    {
        sum2 += arr[i];
    }
    arr2[0] = (float)sum2;

    float win_sum1 = sum2;
    for (int i = Y, j = 1; i < N; i++, j++)
    {
        win_sum1 += arr[i] - arr[i - Y];
        arr2[j] = win_sum1;
    }

    for (int i = 0; i < size2; i++)
    {
        arr2[i] = (float)arr2[i] / Y;
    }

    int max, min;
    if (size1 < size2)
    {
        max = size2;
        min = size1;
    }
    else
    {
        max = size1;
        min = size2;
    }
    int diff = max - min;

    int trend[min];
    for (int i = 0; i < min; i++)
    {
        if (arr[i] < arr[i + diff])
        {
            trend[i] = 0;
        }
        else
        {
            trend[i] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < min - 1; i++)
    {
        if (trend[i] != trend[i + 1])
            count++;
    }

    cout << count;
    return 0;
}