#include <iostream>
using namespace std;
int main()
{
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        int num = 0;
        while (N != 0)
        {
            num = (num * 10) + (N % 10);
            N = N / 10;
        }
        cout << num << endl;
    }
    return 0;
}