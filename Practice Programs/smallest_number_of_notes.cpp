#include <iostream>
using namespace std;
int main()
{
    int T, arr[] = {1, 2, 5, 10, 50, 100};
    cin >> T;
    while (T--)
    {
        int N, count = 0;
        cin >> N;
        while (N > 100 && N != 0)
        {
            N = N - 100;
            count++;
        }
        for (int i = 0; N != 0; i++)
        {
            if (N == arr[i])
            {
                N = N - arr[i];
                count++;
                break;
            }
            else if (N < arr[i])
            {
                N = N - arr[i - 1];
                count++;
                i = -1;
            }
        }
        cout << count << endl;
    }
    return 0;
}