#include<iostream>
using namespace std;
//Classes and Objects
class complex
{
    private:
    int a,b;
    public:
    void set_data(int,int);
    void show_data()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};
void complex :: set_data(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    complex c1;
    c1.set_data(2,4);
    c1.show_data();
    return 0;
}
