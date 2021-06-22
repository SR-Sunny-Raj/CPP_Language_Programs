#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    long long int arr[t], temp;
    for (long long int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (long long int i = 0; i < t - 1; i++)
    {
        for (long long int j = 0; j < t - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (long long int i = 0; i < t; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}