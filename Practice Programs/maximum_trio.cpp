#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, maxfinal = 0;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < N - 2; i++)
        {
            int brr[3], maxtemp = 0;
            brr[0] = arr[i];
            brr[1] = arr[i + 1];
            brr[2] = arr[i + 2];
            sort(brr, brr + 3);
            maxtemp = ((brr[2] - brr[0]) * brr[1]);
            if (maxtemp < ((brr[1] - brr[0]) * brr[2]))
            {
                maxtemp = (brr[1] - brr[0]) * brr[2];
            }
            if (maxtemp > maxfinal)
            {
                maxfinal = maxtemp;
            }
        }
        cout << maxfinal << endl;
    }
    return 0;
}