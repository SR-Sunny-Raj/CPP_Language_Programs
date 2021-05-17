#include<iostream>
using namespace std;
//Overloading of operators as a friend function
class complex
{
    private:
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"a = "<<a<<" and b = "<<b;
    }
    friend complex operator+(complex,complex);
};
complex operator+(complex X,complex Y)
{
    complex temp;
    temp.a = X.a+Y.a;
    temp.b = X.b+Y.b;
    return (temp);
}
int main()
{
    int m,n,o,p;
    cout<<"Enter real and imaginary part of 1st complex number :  ";
    cin>>m>>n;
    cout<<"Enter real and imaginary part of 2nd complex number : ";
    cin>>o>>p;
    complex c1,c2,c3;
    c1.set_data(m,n);
    c2.set_data(o,p);
    c3 = c1+c2;             //Here we can also write it as c3 = operator+(c1,c2);
    c3.show_data();
    return 0;
}
