#include<iostream>
using namespace std;
//Type conversion from one class type to another class type using constructor
class Product
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
        cout<<"a = "<<a<<" and b = "<<b<<endl;
    }
    int getA()
    {
        return (a);
    }
    int getB()
    {
        return (b);
    }
};
class Item
{
    private:
    int m,n;
    public:
    Item()            //Default Constructor
    {}
    Item(Product p)
    {
        m=p.getA();
        n=p.getB();
    }
    void show_data()
    {
        cout<<"m = "<<m<<" and n = "<<n;
    }
};
int main()
{
    Product p1;
    p1.set_data(3,4);
    p1.show_data();
    Item i1;
    i1=p1;
    i1.show_data();
    return 0;
}
