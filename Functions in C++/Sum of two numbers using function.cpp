#include<iostream>
using namespace std;
//Function in C++
int sum(int,int);
int main()
{
    int a,b;
    cout<<"Enter any two number : ";
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum(a,b);
    return 0;
}
int sum(int x,int y)
{
    return(x+y);
}
