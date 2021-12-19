#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, A, B, K;
        cin >> X >> Y >> A >> B >> K;
        for (int i = 0; i < K; i++)
        {
            X += A;
            Y += B;
        }
        if (X == Y)
            cout << "SAME PRICE" << endl;
        else if (X < Y)
            cout << "PETROL" << endl;
        else
            cout << "DIESEL" << endl;
    }
    return 0;
}