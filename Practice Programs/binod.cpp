#include <iostream>
#include <vector>
using namespace std;
int min(int arr[])
{
    int min = arr[0];
    for (int k = 1; k < 5; k++)
    {
        if (min > arr[k])
            min = arr[k];
    }
    return min;
}
int binod(string S)
{
    int b = 0, i = 0, n = 0, o = 0, d = 0;
    for (int j = 0; j < S.size(); j++)
    {
        if (S[j] == 'b')
            b++;
        else if (S[j] == 'i')
            i++;
        else if (S[j] == 'n')
            n++;
        else if (S[j] == 'o')
            o++;
        else if (S[j] == 'd')
            d++;
    }
    int arr[5] = {b, i, n, o, d};
    if (b == 0 || i == 0 || n == 0 || o == 0 || d == 0)
        return 0;
    else
        return min(arr);
}
int main()
{
    string S;
    cin >> S;
    cout << binod(S);
    return 0;
}