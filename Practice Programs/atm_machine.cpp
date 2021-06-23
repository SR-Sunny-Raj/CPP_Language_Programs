#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        string S = "\0";
        cin >> N >> K;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            if (K >= arr[i])
            {
                S.append("1");
                K = K - arr[i];
            }
            else
                S.append("0");
        }
        cout << S << endl;
    }
    return 0;
}