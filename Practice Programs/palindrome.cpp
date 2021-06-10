#include <iostream>
#include <math.h>
using namespace std;
bool isPalindrome(int x)
{
    long int i = 0, j = 0, k = x;
    if (x < 0)
        return false;
    while (k != 0)
    {
        i = (i * 10) + (k % 10);
        k = k / 10;
        j++;
    }
    return i == x;
}
int main()
{
    long int x;
    bool result;
    cin >> x;
    result = isPalindrome(x);
    if (result == true)
        cout << "true";
    else
        cout << "false";
    return 0;
}