#include<iostream>
using namespace std;
//Unary operator overloading
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
        cout<<"a = "<<a<<" and b = "<<b;
    }
    complex operator-()
    {
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return(temp);
    }
};
int main()
{
    int p,q;
    cout<<"Enter any two numbers : ";
    cin>>p>>q;
    complex c1,c2;
    c1.set_data(p,q);
    c2=-c1;                //We can also write it as c2=c1.operator-();
    c2.show_data();
    return 0;
}
