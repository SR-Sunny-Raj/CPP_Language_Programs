#include<iostream>
using namespace std;
//Operator Overloading
class complex
{
    private:
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a=x;b=y;
    }
    void show_data()
    {
        cout<<"Sum of the complex numbers is : a = "<<a<<" and b = "<<b;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.a = a+c.a;
        temp.b = b+c.b;
        return(temp);
    }
};
int main()
{
    int p,q,m,n;
    cout<<"Enter real and imaginary part of 1st complex number : ";
    cin>>p>>q;
    cout<<"Enter real and imaginary part of 2nd complex number : ";
    cin>>m>>n;
    complex c1,c2,c3;
    c1.set_data(p,q);
    c2.set_data(m,n);
    c3=c1+c2;                    //Here we can also write it as c3=c1.operator+(c2);
    c3.show_data();
    return 0;
}
