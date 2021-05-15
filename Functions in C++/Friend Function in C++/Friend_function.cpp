#include<iostream>
using namespace std;
//Friend function
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
    friend void fun(complex);
};
void fun(complex c)
{
    cout<<"Sum is : "<<c.a+c.b;
}
int main()
{
    int p,q;
    cout<<"Enter any two numbers : ";
    cin>>p>>q;
    complex c1,c2,c3;
    c1.set_data(p,q);          // We cannot write friend function like c1.fun() instead we need to write fun(c1); here c1 is object
    fun(c1);                      //Here fun() function is called directly because we cannot call the function using a caller object so in order to make the compiler understand for which object members will be accessed we pass that object as an argument in the function
    return 0;
}
