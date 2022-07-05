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
    int fmax = arr[0], smax = -1, fmin = arr[0], smin = -1;
    if (n > 1)
    {
        smin = arr[1];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > fmax)
            {
                fmax = arr[i];
            }
            if (arr[i] < fmin)
            {
                fmin = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (smax < arr[i] && arr[i] < fmax)
            {
                smax = arr[i];
            }
            if (smin > arr[i] && arr[i] > fmin)
            {
                smin = arr[i];
            }
        }
    }
    cout << "Second Smallest element is -: " << smin << endl
         << "Second largest element is -: " << smax;
    return 0;
}