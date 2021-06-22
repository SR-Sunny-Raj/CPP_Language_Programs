#include <iostream>
using namespace std;
int main()
{
    int N, lucky = 0, unlucky = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            lucky++;
        else
            unlucky++;
    }
    if (lucky > unlucky)
        cout << "READY FOR BATTLE";
    else
        cout << "NOT READY";
}