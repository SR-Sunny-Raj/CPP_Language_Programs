#include <iostream>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int N;
    cin >> N;
    string arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < N; j++)
    {
        int flag = 0;
        for (int l = 0; l < arr[j].size(); l++)
        {
            flag = 0;
            for (int k = 0; k < S.size(); k++)
            {
                if (S[k] == arr[j][l])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                continue;
            else
                break;
        }
        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}