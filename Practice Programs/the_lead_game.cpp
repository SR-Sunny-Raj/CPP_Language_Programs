#include <iostream>
using namespace std;
int main()
{
    int T, p1 = 0, p2 = 0, lead = 0, leader;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;
        p1 += x;
        p2 += y;
        if (p1 > p2)
        {
            if ((p1 - p2) > lead)
            {
                leader = 1;
                lead = (p1 - p2);
            }
        }
        else if (p2 > p1)
        {
            if ((p2 - p1) > lead)
            {
                leader = 2;
                lead = (p2 - p1);
            }
        }
    }
    cout << leader << " " << lead;
    return 0;
}