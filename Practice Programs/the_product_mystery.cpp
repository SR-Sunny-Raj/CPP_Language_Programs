#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A = 1, B, C;
        cin >> B >> C;
        while (((A * B) % C) != 0)
        {
            A++;
        }
        cout << A << endl;
    }
    return 0;
}