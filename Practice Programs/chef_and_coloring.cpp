#include <iostream>
using namespace std;
int getMax(int countR, int countG, int countB)
{
    if (countR >= countG && countR >= countB)
        return countR;
    else if (countG >= countR && countG >= countB)
        return countG;
    else if (countB >= countR && countB >= countG)
        return countB;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, countR = 0, countG = 0, countB = 0;
        string S;
        cin >> N;
        cin >> S;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'R')
                countR++;
            else if (S[i] == 'G')
                countG++;
            else if (S[i] == 'B')
                countB++;
        }
        int max = getMax(countR, countG, countB);
        cout << N - max << endl;
    }
    return 0;
}