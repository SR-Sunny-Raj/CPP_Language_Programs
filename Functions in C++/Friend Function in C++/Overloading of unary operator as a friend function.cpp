#include<iostream>
using namespace std;
//Overloading of Unary operator as a friend function
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
        cout<<"a = "<<a<<" and b = "<<b<<endl;
    }
    friend complex operator-(complex);
};
complex operator-(complex c)
{
    complex temp;
    temp.a = -c.a;
    temp.b = -c.b;
    return (temp);
}
int main()
{
    int p,q;
    cout<<"Enter any two number : ";
    cin>>p>>q;
    complex c1,c2;
    c1.set_data(p,q);
    c2 = -c1;                                              //We can also write it as c2 = operator-(c1);
    c1.show_data();
    c2.show_data();
    return 0;
}
