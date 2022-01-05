#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << "Before Swapping -: Num1 = " << num1 << " and Num2 = " << num2 << endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    cout << "After Swapping -: Num1 = " << num1 << " and Num2 = " << num2 << endl;
    return 0;
}