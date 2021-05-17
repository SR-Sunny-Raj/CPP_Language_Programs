#include<iostream>
using namespace std;
//Overloading of insertion and extraction operator as a friend function
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
    friend ostream& operator<<(ostream&,complex);
    friend istream& operator>>(istream&,complex&);
};
ostream& operator<<(ostream &dout,complex C)
{
    cout<<"a = "<<C.a<<" and b = "<<C.b;
    return (dout);
}
istream& operator>>(istream &din,complex &D)
{
    cin>>D.a>>D.b;
    return (din);
}
int main()
{
    complex c1;
    cout<<"Enter a complex number : ";
    cin>>c1;                             //We can also write it as operator>>(cin,c1);
    cout<<"The number is : ";
    cout<<c1;                         //We can also write it as operator<<(cout,c1);
    return 0;
}
