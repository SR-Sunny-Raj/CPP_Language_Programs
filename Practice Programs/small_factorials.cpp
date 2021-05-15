#include <iostream>
using namespace std;
int fact(int n)
{
    int f = n;
    while (f != 1)
    {
        n = n * (f - 1);
        f--;
    }
    return n;
}

int main()
{
    int t, n;
    cin >> t;
    int arr[t];
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        arr[i] = fact(n);
    }
    for (int i = 1; i <= t; i++)
    {
        cout << endl
             << arr[i];
    }
    return 0;
}