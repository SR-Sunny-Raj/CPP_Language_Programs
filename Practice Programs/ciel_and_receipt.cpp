#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int T;
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        arr[i] = pow(2, i);
    }
    cin >> T;
    while (T--)
    {
        int P, count = 0;
        cin >> P;
        while (P >= 2048 && P != 0)
        {
            P = P - 2048;
            count++;
        }
        for (int i = 0; P != 0; i++)
        {
            if (P == arr[i])
            {
                count++;
                break;
            }
            else if (P < arr[i])
            {
                P = P - arr[i - 1];
                count++;
                i = -1;
            }
        }
        cout << count << endl;
    }
    return 0;
}