#include<iostream>
using namespace std;
//Type conversion from primitive to class type
class complex
{
    private:
    int a,b;
    public:
    complex()
    {}
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"a = "<<a<<" and b = "<<b;
    }
    complex(int k)
    {
        a=k;
        b=0;
    }
};
int main()
{
    complex c1;
    int x=5;
    c1=x;               //Here we are doing type conversion with the help os constructor
    c1.show_data();
    return 0;
}
