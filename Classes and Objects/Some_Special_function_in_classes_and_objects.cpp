#include<iostream>
using namespace std;
//Special type of function in Classes and Objects
class complex
{
    private:
    int a,b;
    public:
    void set_data(int,int);
    void show_data()
    {
        cout<<a<<" "<<b;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};
void complex :: set_data(int x,int y)
{
    a=x;b=y;
}
int main()
{
    complex c1,c2,c3;
    c1.set_data(1,2);
    c2.set_data(3,4);
    c3 = c1.add(c2);
    c3.show_data();
    return 0;
}
