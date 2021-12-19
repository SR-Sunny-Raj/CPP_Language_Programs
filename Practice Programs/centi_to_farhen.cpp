#include <iostream>
using namespace std;
int main()
{
    int x;
    float y;
    cout << "Enter temperature in centigrade -: ";
    cin >> x;
    y = (1.8 * x) + 32;
    cout << y;
    return 0;
}