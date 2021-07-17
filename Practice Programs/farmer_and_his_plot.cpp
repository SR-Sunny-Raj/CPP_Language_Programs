#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, x;
        cin >> N >> M;
        x = gcd(N, M);
        cout << ((N / x) * (M / x)) << endl;
    }
    return 0;
}