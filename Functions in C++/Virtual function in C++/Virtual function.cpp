#include<iostream>
using namespace std;
//Virtual function in C++
class car
{
    public:
    virtual void shift_gear()
    {
        cout<<"shift gear of car class"<<endl;
    }
    void f1()
    {
        cout<<"f1 of car class"<<endl;
    }
};
class sports_car : public car
{
    public:
    void shift_gear()
    {
        cout<<"shift gear of sports_car class"<<endl;
    }
    void f1()
    {
        cout<<"f1 of sports_car class"<<endl;
    }
};
int main()
{
    car *p , c1;
    sports_car c2;
    p = &c2;
    c2.shift_gear();                         
    p->shift_gear();                      // It will call sports_car class shift_gear function because of late binding
    p->f1();                                    // Here car class f1 function will be called because of early binding because we had not used virtual function for f1 in parent class
    c2.f1();
    return 0;
}
