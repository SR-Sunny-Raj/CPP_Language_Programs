#include<iostream>
using namespace std;
//Deep copy in C++
class A
{
    private:
    int a,b;
    int *p;                 //Incase when there is pointer in class , we should do deep copy
    public:
    A()
    {
        p=new int;
    }
    void set(int x,int y,int z)
    {
        a=x;
        b=y;
        *p=z;
    }
    void show()
    {
        cout<<"a="<<a<<" b="<<b<<" and p="<<*p;
    }
    A(A &d)
    {
        a=d.a;
        b=d.b;
        p=new int;
        *p=*(d.p);
    }
    ~A()
    {
        delete p;
    }
};
int main()
{
    A d1;
    d1.set(1,2,3);
    A d2=d1;
    d2.show();
    return 0;
}
