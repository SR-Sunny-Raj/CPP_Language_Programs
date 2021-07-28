#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, count = 0, temp;
        cin >> N;
        while (N > 0)
        {
            count++;
            temp = sqrt(N);
            N -= (temp * temp);
        }
        cout << count << endl;
    }
    return 0;
}