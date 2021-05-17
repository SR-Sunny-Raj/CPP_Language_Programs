#include<iostream>
using namespace std;
//Function overloading
int area(int,int);
float area(int);
int main()
{
    int r;
    cout<<"Enter the Radius of the circle : ";
    cin>>r;
    cout<<"Area of the circle is : "<<area(r)<<endl;
    int l,b;
    cout<<"Enter the length and width of the rectangle : ";
    cin>>l>>b;
    cout<<"Area of the rectangle is : "<<area(l,b)<<endl;
}
int area(int x,int y)
{
    return(x*y);
}
float area(int z)
{
    return(3.14*z*z);
}
