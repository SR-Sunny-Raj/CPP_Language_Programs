#include<iostream>
using namespace std;
//Dynamic constructor in C++
class A
{
    private:
    int a,b,*p;
    public:
    A()
    {
        a=0;
        b=0;
        p=new int;
        *p=0;
    }
    A(int x,int y,int z)
    {
        a=x;
        b=y;
        p = new int;
        *p = z;
    }
    void show_data()
    {
        cout<<"a = "<<a<<"  b = "<<b<<"  and p = "<<*p<<endl;
    }
};
int main()
{
    A o1,o2,o3,o4(1,2,3);
    o1.show_data();
    o4.show_data();
    return 0;
}
