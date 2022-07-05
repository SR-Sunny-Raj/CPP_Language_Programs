#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n < 2)
    {
        cout << -1 << -1;
    }
    else
    {
        int fmax = INT_MIN, smax = INT_MIN, fmin = INT_MAX, smin = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > fmax)
            {
                smax = fmax;
                fmax = arr[i];
            }
            else if (arr[i] > smax && arr[i] != fmax)
            {
                smax = arr[i];
            }
            if (arr[i] < fmin)
            {
                smin = fmin;
                fmin = arr[i];
            }
            else if (arr[i] < smin && arr[i] != smin)
            {
                smin = arr[i];
            }
        }
        cout << "Second Smallest element is -: " << smin << endl
             << "Second largest element is -: " << smax;
    }
    return 0;
}