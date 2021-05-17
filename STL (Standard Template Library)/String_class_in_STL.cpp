#include <iostream>
#include <string>
using namespace std;
//string class in STL in C++
int main()
{
    string s1 = "Sunny", s2(" Raj"), s3;
    s3 = s1 + s2;
    cout << s3;
    s1 += s2;
    if (s1 == s3)
        cout << "\nYes s1 and s3 are equal" << endl;
    string s4;
    cout << "Enter your name -: ";
    cin >> s4;
    cout << "Hello," << s4;
    return 0;
}
