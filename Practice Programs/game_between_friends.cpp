#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        if (B > A)
            A += C;
        else
            B += C;

        if (B > A)
            A += D;
        else
            B += D;

        if (B > A)
            cout << 'S' << endl;
        else
            cout << 'N' << endl;
    }
    return 0;
}