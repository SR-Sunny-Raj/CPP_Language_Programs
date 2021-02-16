#include<iostream>
using namespace std;
//Shallow copy in C++
class cls
{
    private:
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"a = "<<a<<"and b = "<<b;
    }
    /*cls(cls &d)
    {
        a=d.a;
        b=d.b;
    }*/
};
int main()
{
    cls d1;
    d1.set_data(2,4);
    cls d2=d1;                //This way of copying is called shallow copy in which we copying with the help of copy constructor
    d2.show_data();
    return 0;
}
