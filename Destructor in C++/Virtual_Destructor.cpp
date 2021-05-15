#include<iostream>
using namespace std;
//Virtual destructor in C++
class A
{
    int a;
    public:
    void f1()
    {
        cout<<"f1"<<endl;
    }
    virtual ~A()
    {
        cout<<"end of A"<<endl;
    }
};
class B : public A
{
    int b;
    public:
    void f2()
    {
        cout<<"f2";
    }
    ~B()
    {
        cout<<"end of B"<<endl;
    }
};
void fun();
void fun()
{
    A *p = new B;
    p->f1();
    delete p;
}
int main()
{
    fun();
    return 0;
}
