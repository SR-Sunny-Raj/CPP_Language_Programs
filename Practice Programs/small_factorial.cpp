#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, fact = 1;
        cin >> N;
        for (int i = 1; i <= N; i++)
        {
            fact = fact * i;
        }
        cout << fact << endl;
    }
    return 0;
}