#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int i, cap = 0, count = 0;
        cin >> i;
        int arr[i];
        for (int k = 0; k < i; k++)
        {
            cin >> arr[k];
        }
        for (int k = 0; cap != 7; k++)
        {
            if (arr[k] == 1 || arr[k] == 2 || arr[k] == 3 || arr[k] == 4 || arr[k] == 5 || arr[k] == 6 || arr[k] == 7)
            {
                cap++;
                count++;
            }
            else
                count++;
        }
        cout << count << endl;
    }
}