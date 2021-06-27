#include <iostream>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        int N, A, B, ttime, ltime;
        cin >> N >> A >> B;
        ttime = 2 * (180 + N);
        ltime = A + B;
        cout << ttime - ltime << endl;
    }
    return 0;
}