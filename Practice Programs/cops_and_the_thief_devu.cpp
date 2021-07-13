#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int M, x, y, count = 0, a;
        cin >> M >> x >> y;
        int arr[101] = {0};
        for (int i = 0; i < M; i++)
        {
            cin >> a;
            for (int j = a - (x * y); j <= a + (x * y); j++)
            {
                if (j > 0 && j < 101)
                {
                    arr[j] = 1;
                }
            }
        }
        for (int i = 1; i < 101; i++)
        {
            if (arr[i] == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}