#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, K, countTI = 0, countUU = 0, flag1 = 0, flag2 = 0;
        cin >> N >> M >> K;
        int arr[M], brr[K];
        for (int i = 1; i <= M; i++)
        {
            cin >> arr[i];
        }
        for (int j = 1; j <= K; j++)
        {
            cin >> brr[j];
        }
        for (int i = 1; i <= N; i++)
        {
            flag1 = 0;
            flag2 = 0;
            for (int j = 1; j <= M; j++)
            {
                if (i == arr[j])
                    flag1 = 1;
            }
            for (int j = 1; j <= K; j++)
            {
                if (i == brr[j])
                    flag2 = 1;
            }
            if (flag1 == 0 && flag2 == 0)
                countUU += 1;
            else if (flag1 == 1 && flag2 == 1)
                countTI += 1;
        }
        cout << countTI << " " << countUU << endl;
    }
    return 0;
}