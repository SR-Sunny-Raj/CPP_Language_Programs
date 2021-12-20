#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cpp_int fact = 1;
        cin >> n;
        while (n != 0)
        {
            fact *= n--;
        }
        cout << fact << endl;
    }
    return 0;
}