#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int R, x1, y1, x2, y2, x3, y3;
        float dist1, dist2, dist3;
        cin >> R;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        dist1 = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        dist2 = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
        dist3 = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
        if ((dist1 <= R && dist2 <= R) || (dist2 <= R && dist3 <= R) || (dist1 <= R && dist3 <= R))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}