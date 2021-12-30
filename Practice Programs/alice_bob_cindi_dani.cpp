#include <iostream>
using namespace std;
int main()
{
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    if (str1 != "Alice")
        cout << "Alice" << endl;
    else if (str2 != "Bob")
        cout << "Bob" << endl;
    else if (str3 != "Cindy")
        cout << "Cindy" << endl;
    else
        cout << "Dani" << endl;
    return 0;
}