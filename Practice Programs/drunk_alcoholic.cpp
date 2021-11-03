#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int k, ne, no, ans;
        cin >> k;
        ne = k / 2;
        no = k - ne;
        ans = ((no * 3) - ne);
        cout << ans << endl;
    }
    return 0;
}