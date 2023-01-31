#include <bits/stdc++.h>
using namespace std;

void calculateScore(vector<string> response)
{
    float count = 0;
    for (int i = 0; i < 15; i++)
    {
        if (response[i][2] == '%' || response[i][3] == '%')
        {
            if (response[i][6] == '*' || response[i][7] == '*')
            {
                continue;
            }
            else if ((response[i][4] == response[i][6] && response[i][4] != ',') || (response[i][5] == response[i][7]))
            {
                count += 1;
            }
            else
            {
                count -= 0.25;
            }
        }
        else if (response[i][2] == '$' || response[i][3] == '$')
        {
            if (response[i][6] == '*' || response[i][7] == '*')
            {
                continue;
            }
            else if ((response[i][4] == response[i][6] && response[i][4] != ',') || (response[i][5] == response[i][7]))
            {
                count += 2;
            }
            else
            {
                count -= 0.5;
            }
        }
        else if (response[i][2] == '^' || response[i][3] == '^')
        {
            if (response[i][6] == '*' || response[i][7] == '*')
            {
                continue;
            }
            else if ((response[i][4] == response[i][6] && response[i][4] != ',') || (response[i][5] == response[i][7]))
            {
                count += 3;
            }
            else
            {
                count -= 1;
            }
        }
    }
    cout << count << endl;
    if (count >= 15)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }
}

int main()
{
    vector<string> str;
    for (int i = 0; i < 15; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    calculateScore(str);
}