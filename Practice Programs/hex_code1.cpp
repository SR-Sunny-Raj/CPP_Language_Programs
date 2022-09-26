#include <iostream>
using namespace std;
int main()
{
    int N, K, count = 0;
    cin >> N >> K;
    while (N--)
    {
        if ((N ^ K) > (N & K))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}