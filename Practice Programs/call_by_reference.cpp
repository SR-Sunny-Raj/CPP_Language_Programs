#include <iostream>
using namespace std;
void reverse_dig(int &a, int &b)
{
    //Add your code here.
    int tempa = a, tempb = b;
    a = 0, b = 0;
    while (tempa != 0 || tempb != 0)
    {
        if (tempa != 0)
        {
            a = (a * 10) + (tempa % 10);
            tempa = tempa / 10;
        }
        if (tempb != 0)
        {
            b = (b * 10) + (tempb % 10);
            tempb = tempb / 10;
        }
    }
}
void swap(int &a, int &b)
{
    //Add your code here.
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        reverse_dig(a, b);
        swap(a, b);
        cout << a << " " << b;
        return 0;
    }
}