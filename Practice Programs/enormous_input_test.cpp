#include <iostream>
using namespace std;
int main()
{
    int n, k, t, count = 0;
    cin >> n >> k;
    while (n--)
    {
        cin >> t;
        if (t % k == 0)
            count++;
    }
    cout << count;
    return 0;
}