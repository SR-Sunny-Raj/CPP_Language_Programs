#include<iostream>
using namespace std;
//Copy Constructor
class complex
{
    private:
    int a,b;
    public:
    complex(int x,int y)     //Parameterized Constructor
    {
        a=x;b=y;
        cout<<"For object c1 :- "<<endl<<"a = "<<a<<" and b = "<<b;
    }
    complex(int z)          //Parameterized Constructor
    {
        a=z;
        cout<<endl<<"For object c2 :- "<<endl<<"a = "<<a;
    }
    complex()                      //Default Constructor
    {}
    complex(complex &c)     //Copy Constructor
    {
        a=c.a;
        b=c.b;
        cout<<endl<<"For object c4 :- "<<endl<<"a = "<<a<<" and b = "<<b;
    }
};
int main()
{
    complex c1(1,2),c2(5),c3;
    complex c4(c1);
    return 0;
}
