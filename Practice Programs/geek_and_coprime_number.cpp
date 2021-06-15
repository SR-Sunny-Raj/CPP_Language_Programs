#include <iostream>
using namespace std;
class Solution
{
public:
    long long sum(long long N, long long M)
    {
        long long arr[N / 2] = {'\0'}, brr[M / 2] = {'\0'}, a = 2, b = 2, maxnum = 1;
        arr[0] = 1;
        arr[1] = N;
        brr[0] = 1;
        brr[1] = M;
        for (long long i = 2; i < N / 2; i++)
        {
            if (N % i == 0)
            {
                arr[a] = N / i;
                a++;
            }
        }
        for (long long j = 2; j < M; j++)
        {
            if (M % j == 0)
            {
                brr[b] = M / j;
                b++;
            }
        }
        for (long long i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (arr[i] == brr[j])
                {
                    maxnum = arr[i];
                }
            }
        }
        long long p = N / maxnum;
        long long q = M / maxnum;
        return (p + q);
    }
};
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long N, M;
        cin >> N >> M;
        Solution obj;
        cout << obj.sum(N, M) << endl;
    }
}