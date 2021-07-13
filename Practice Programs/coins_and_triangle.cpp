#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, height = 0;
        cin >> N;
        for (int i = 1; i <= N; i++)
        {
            N = N - i;
            height++;
        }
        cout << height << endl;
    }
    return 0;
}