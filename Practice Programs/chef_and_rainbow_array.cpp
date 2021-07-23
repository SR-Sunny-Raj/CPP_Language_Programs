#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, half, flag = 0;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        if (arr[N / 2] == 7 && arr[0] == 1)
        {
            for (int i = 0; i < N / 2; i++)
            {
                if ((arr[i] == arr[N - 1 - i]) && (arr[i] == arr[i + 1] || arr[i] + 1 == arr[i + 1]))
                {
                    count++;
                }
            }
        }

        if (count == N / 2)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}