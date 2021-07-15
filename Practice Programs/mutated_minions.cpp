#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, count = 0;
        cin >> N >> K;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            arr[i] += K;
        }
        for (int i = 0; i < N; i++)
        {
            if (arr[i] % 7 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}