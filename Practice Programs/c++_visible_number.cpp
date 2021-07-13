#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> compute(int arr[], int n)
    {
        // Complete the function
        vector<int> brr;
        int x = n / 3, count = 1;
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                count++;
            }
            else if ((arr[i] != arr[i + 1]) && (count <= x))
            {
                count = 1;
            }
            if (arr[i] != arr[i + 1] && count > x)
            {
                brr.push_back(arr[i]);
                count = 1;
            }
        }
        if (brr.size() == 0)
        {
            brr.push_back(-1);
            return brr;
        }
        else
            return brr;
    }
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];
        vector<int> v;
        Solution ob;
        v = ob.compute(arr, n);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}