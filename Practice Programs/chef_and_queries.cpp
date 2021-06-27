#include <iostream>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    int arr[N];
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= Q; i++)
    {
        int query, L, R, X, Y;
        cin >> query;
        if (query == 1)
        {
            cin >> L >> R >> X;
            for (int j = 1; j <= N; j++)
            {
                if (j >= L && j <= R)
                {
                    arr[j] = arr[j] + ((X + j - L) * (X + j - L));
                }
            }
        }
        else if (query == 2)
        {
            cin >> Y;
            cout << arr[Y] << endl;
        }
    }
    return 0;
}