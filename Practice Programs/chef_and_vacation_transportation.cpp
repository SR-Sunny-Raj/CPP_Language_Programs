#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if ((X + Y) > Z)
        {
            cout << "TRAIN" << endl;
        }
        else if ((X + Y) < Z)
        {
            cout << "PLANEBUS" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}