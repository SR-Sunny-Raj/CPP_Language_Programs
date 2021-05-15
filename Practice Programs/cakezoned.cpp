#include <iostream>
using namespace std;
int main()
{
    int N, Q, t, L, R, X, sumo, sume;
    cin >> N;
    int arr[N];
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> L >> R >> X;
            for (int i = L; i <= R; i++)
            {
                arr[i] = arr[i] + X;
            }
        }
        else if (t == 2)
        {
            sumo = 0;
            for (int i = 1; i <= N; i++)
            {
                if (i % 2 == 1)
                {
                    sumo = sumo + arr[i];
                }
            }
            cout << sumo;
        }
        else if (t == 3)
        {
            sume = 0;
            for (int i = 1; i <= N; i++)
            {
                if (i % 2 == 0)
                {
                    sume = sume + arr[i];
                }
            }
            cout << sume;
        }
    }
    return 0;
}