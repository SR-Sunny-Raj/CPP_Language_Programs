#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll X, K, min, max, prod;
        cin >> X >> K;
        prod = X * K;
        min = X * 2;
        max = prod * (prod - 1);
        cout << min << " " << max << endl;
    }
    return 0;
}