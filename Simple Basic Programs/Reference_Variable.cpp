#include<iostream>
using namespace std;
//Reference Variable in C++
int main()
{
    int x=10,&y=x;
    cout<<x<<" and "<<y<<endl;
    y++;
    cout<<x<<" and "<<y<<endl;;
    return 0;
}
