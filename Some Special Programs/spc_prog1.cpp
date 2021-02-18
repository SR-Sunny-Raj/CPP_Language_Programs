#include<iostream>
using namespace std;
//Special Program 1
class A
{
    public:
    A()
    {
        cout<<"*********** Welcome **********"<<endl;
    }
    ~A()
    {
        cout<<endl<<"*********** BYE ***********"<<endl;
    }
};
void fun()
{
    cout<<"\a"<<". . . "<<"\a"<<". . . "<<"\a"<<". . . "<<"\a"<<endl;
}
int main()
{
    A obj;
    fun();
    fun();
    fun();
    fun();
    fun();
    cout<<"3"<<endl<<"2"<<endl<<"1";
    return 0;
}
