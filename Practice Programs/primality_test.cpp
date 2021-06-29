#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, flag = 0;
        cin >> N;
        if (N == -1 || N == 0 || N == 1)
        {
            cout << "no" << endl;
            continue;
        }
        else
        {
            for (int i = N / 2; i > 1 || i < -1; (N > 0 ? i-- : i++))
            {
                if (N % i == 0)
                {
                    cout << "no" << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << "yes" << endl;
    }
    return 0;
}