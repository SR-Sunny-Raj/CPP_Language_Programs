#include<iostream>
using namespace std;
//Member function of any class as a friend function of another class
class A
{
    private:
    int a,b;
    public:
    void fun()
    {
        cout<<"Hello !!";
    }
    void gun()
    {
        cout<<"Hello Sunny !";
    }
};
class B
{
    private:
    int m,n;
    public:
    friend class A;                   //We can write like this if we want all the function of any class to make the friend of another class
    //friend void A :: fun();     // And we should write like this if we want any particular function of any class to be made the friend of another class
};
int main()
{
    A a1;
    B b1;
    return 0;
}
