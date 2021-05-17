#include<iostream>
using namespace std;
//Inline function
inline void fun();
int main()
{
    cout<<"you are in main function"<<endl;
    fun();
    return 0;
}
void fun()
{
    cout<<"You are in fun function";
}
