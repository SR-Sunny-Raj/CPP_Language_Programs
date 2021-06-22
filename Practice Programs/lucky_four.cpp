#include <iostream>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        int num, count = 0;
        cin >> num;
        while (num != 0)
        {
            if (num % 10 == 4)
                count++;
            num = num / 10;
        }
        cout << count << endl;
    }
    return 0;
}