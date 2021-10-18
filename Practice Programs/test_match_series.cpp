#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int D = 0, I = 0, E = 0, R[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> R[i];
            if (R[i] == 0)
                D++;
            else if (R[i] == 1)
                I++;
            else if (R[i] == 2)
                E++;
        }
        if (I > E)
            cout << "INDIA" << endl;
        else if (E > I)
            cout << "ENGLAND" << endl;
        else if ((D > I && D > E) || (I == E))
            cout << "DRAW" << endl;
    }
    return 0;
}