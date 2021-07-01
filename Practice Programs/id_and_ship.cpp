#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char ch;
        cin >> ch;
        if (ch == 'b' || ch == 'B')
            cout << "BattleShip" << endl;
        else if (ch == 'c' || ch == 'C')
            cout << "Cruiser" << endl;
        else if (ch == 'd' || ch == 'D')
            cout << "Destroyer" << endl;
        else if (ch == 'f' || ch == 'F')
            cout << "Frigate" << endl;
    }
    return 0;
}