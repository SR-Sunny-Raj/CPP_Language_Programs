#include<iostream>
using namespace std;
//namespace in C++
namespace Myspace
{
    int a,b;
    int f1();
    class A
    {
        public:
        void fun();
    };
}
int Myspace::f1()
{
    cout<<"f1 function ran"<<endl;
}
void Myspace::A::fun()
{
    cout<<"fun function ran"<<endl;
}
using namespace Myspace;
int main()
{
    a=5;                   //Here if we hadn't written previously like using namespace Myspace then we should have written Myspace::a=5;
    b=3;
    A obj;
    cout<<a<<"\n"<<b<<endl;
    f1();
    obj.fun();
    return 0;
}
