#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, sum, count = 0;
        cin >> A >> B;
        sum = A + B;
        while (sum != 0)
        {
            int x = sum % 10;
            sum = sum / 10;
            if (x == 0 || x == 6 || x == 9)
                count += 6;
            else if (x == 1)
                count += 2;
            else if (x == 2 || x == 3 || x == 5)
                count += 5;
            else if (x == 4)
                count += 4;
            else if (x == 7)
                count += 3;
            else if (x == 8)
                count += 7;
        }
        cout << count << endl;
    }
    return 0;
}