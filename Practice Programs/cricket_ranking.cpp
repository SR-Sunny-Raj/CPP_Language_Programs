#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int R1, W1, C1, R2, W2, C2;
        cin >> R1 >> W1 >> C1;
        cin >> R2 >> W2 >> C2;
        if ((R1 > R2 && W1 > W2 && C1 > C2) || (R1 > R2 && W1 > W2) || (W1 > W2 && C1 > C2) || (R1 > R2 && C1 > C2))
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}