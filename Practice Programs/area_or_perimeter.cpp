#include <iostream>
using namespace std;
int main()
{
    int L, B;
    cin >> L >> B;
    int peri = 2 * (L + B);
    int area = L * B;
    if (peri > area)
        cout << "Peri" << endl
             << peri;
    else if (area > peri)
        cout << "Area" << endl
             << area;
    else
        cout << "Eq" << endl
             << peri;
    return 0;
}