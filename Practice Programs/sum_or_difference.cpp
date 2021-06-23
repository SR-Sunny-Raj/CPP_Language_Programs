#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    if ((A - B) > 0)
        cout << (A - B);
    else
        cout << (A + B);
    return 0;
}