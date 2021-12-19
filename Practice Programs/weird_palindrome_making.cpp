#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int countodd = 0;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] % 2 == 1)
                countodd++;
        }
        cout << (countodd / 2) << endl;
    }
    return 0;
}