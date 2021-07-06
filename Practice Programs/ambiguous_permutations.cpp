#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        int arr[n], brr[n], flag = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            brr[arr[i]] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != brr[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << "ambiguous" << endl;
        else
            cout << "not ambiguous" << endl;
        cin >> n;
    }
    return 0;
}