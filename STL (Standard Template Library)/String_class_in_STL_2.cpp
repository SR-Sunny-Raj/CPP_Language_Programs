#include <iostream>
#include <string>
#include <string.h>
using namespace std;
//String class in C++
int main()
{
    string s1;          //="sunny";
    s1.assign("Sunny"); //we can do this with the help of assign function also
    cout << s1 << endl;
    //s1 += " raj";       //We can also do this with the help of append function
    s1.append(" raj");
    cout << s1 << endl;
    s1.insert(6, "yadav "); //use of insert function
    cout << s1 << endl;
    s1.replace(6, 9, "yadav"); //use of replace function
    cout << s1 << endl;
    s1.insert(11, " yadav");
    cout << s1 << endl;
    int i = s1.find("yadav");
    cout << i << endl;
    int j = s1.rfind("yadav");
    cout << j << endl;
    string s2("sunny"), s3("raj");
    int k = s2.compare(s3);
    cout << k << endl;
    string s4("raj"), s5("sunny");
    int l = s4.compare(s5);
    cout << l << endl;
    string s6("raj"), s7("raj");
    int m = s6.compare(s7);
    cout << m << endl;
    char str[20];
    strcpy(str, s6.c_str());
    cout << str << endl;
    cout << s6.size();
    return 0;
}
