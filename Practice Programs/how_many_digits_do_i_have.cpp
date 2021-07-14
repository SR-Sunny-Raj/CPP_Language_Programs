#include <iostream>
using namespace std;
int main()
{
    int N, count = 0;
    cin >> N;
    while (N != 0)
    {
        N = N / 10;
        count++;
    }
    if (count > 3)
        cout << "More than 3 digits";
    else
        cout << count;
    return 0;
}