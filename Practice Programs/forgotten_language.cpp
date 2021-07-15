#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        string arr[N], orr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            orr[i] = "NO";
        }
        for (int i = 0; i < K; i++)
        {
            int L;
            cin >> L;
            string brr[L];
            for (int j = 0; j < L; j++)
            {
                cin >> brr[j];
                for (int k = 0; k < N; k++)
                {
                    if (arr[k] == brr[j])
                    {
                        orr[k] = "YES";
                        break;
                    }
                }
            }
        }
        for (int s = 0; s < N; s++)
        {
            cout << orr[s] << " ";
        }
        cout << endl;
    }
    return 0;
}