#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    string sM, sR;
    cin >> T;
    while (T--)
    {
        int sumR = 0, sumM = 0;
        cin >> sM >> sR;
        for (int j = 0; j < sM.size(); j++)
        {
            sumM = sumM + sM[j];
            sumR = sumR + sR[j];
        }
        int sum = sumR - sumM;
        if (sum >= 1 && sum <= 10)
            cout << "Rashmi" << endl;
        else if (sum == 0)
            cout << "No One" << endl;
        else
            cout << "Mohit" << endl;
    }
    return 0;
}