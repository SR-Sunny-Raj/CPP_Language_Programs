#include <iostream>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < Q; i++)
    {
        int k, brr[4], prod = 1, flag = 0;
        cin >> k;
        for (int j = 0; j < N; j++)
        {
            brr[j] = k - arr[j];
        }
        for (int j = 0; j < N; j++)
        {
            prod = prod * brr[j];
            flag = 1;
        }
        if (prod > 0 && flag == 1)
            cout << "POSITIVE" << endl;
        else if (prod < 0)
            cout << "NEGATIVE" << endl;
        else if (flag == 1)
            cout << 0 << endl;
    }
}