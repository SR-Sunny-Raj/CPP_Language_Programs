#include <iostream>
using namespace std;
int getMax(int A, int B, int C)
{
    int max;
    if (A > B && A > C)
        max = A;
    else if (B > A && B > C)
        max = B;
    else
        max = C;
    return max;
}
int getMin(int A, int B, int C)
{
    int min;
    if (A < B && A < C)
        min = A;
    else if (B < A && B < C)
        min = B;
    else
        min = C;
    return min;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C, max, min;
        cin >> A >> B >> C;
        max = getMax(A, B, C);
        min = getMin(A, B, C);
        if (A < max && A > min)
            cout << A << endl;
        else if (B < max && B > min)
            cout << B << endl;
        else
            cout << C << endl;
    }
    return 0;
}