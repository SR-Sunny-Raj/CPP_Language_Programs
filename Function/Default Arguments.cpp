#include<iostream>
using namespace std;
//Default Arguments
int add(int,int,int=0);
int main()
{
    int a,b;
    cout<<"Enter any two numbers : ";
    cin>>a>>b;
    cout<<"Sum is : "<<add(a,b);
    int c;
    cout<<"Enter any three numbers : ";
    cin>>a>>b>>c;
    cout<<"The Sum is : "<<add(a,b,c);
    return 0;
}
int add(int x,int y,int z)
{
    return(x+y+z);
}
