#include<iostream>
using namespace std;
//Function "Call by address" in C++
int sum(int*,int*);
int main()
{
    int a,b;
    cout<<"Enter any two number : ";
    cin>>a>>b;
    cout<<"The sum of the numbers is : "<<sum(&a,&b);
    return 0;
}
int sum(int *p,int *q)
{
    return(*p+*q);
}
