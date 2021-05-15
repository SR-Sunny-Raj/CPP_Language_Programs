#include<iostream>
using namespace std;
//Abstract Class in C++
class person
{
    public:
    virtual void fun()=0;                        //We can't create person's class object because it's an abstract class as it contains a pure virtual function
    void f1()
    {
        cout<<"You are in person class"<<endl;
    }
};
class student : public person
{
    public:
    void fun()                                         //Function Overriding
    {
        cout<<"You are in student class"<<endl;
    }
};
int main()
{
    student obj;
    obj.fun();
    obj.f1();
    return 0;
}
