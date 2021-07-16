#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, count = 0;
        cin >> N;
        int arr[N], brr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> brr[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (i == 0)
            {
                if ((arr[i] - 0) >= brr[i])
                    count++;
            }
            else
            {
                if ((arr[i] - arr[i - 1]) >= brr[i])
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}