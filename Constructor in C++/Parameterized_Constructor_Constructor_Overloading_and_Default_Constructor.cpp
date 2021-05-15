#include<iostream>
using namespace std;
//Defualt Constructor , Parameterized Cnstructor and Constructor Overloading
class complex
{
    private:
    int a,b;
    public:
    complex(int x,int y)
    {
        a=x;b=y;
        cout<<"Parameterized Constructor :- "<<endl<<"a = "<<a<<" and b = "<<b;
    }
    complex(int z)
    {
        a=z;
        cout<<endl<<"Overloading :- "<<endl<<"a = "<<a;
    }
    complex()
    {
        cout<<endl<<"Default Constructor";
    }
};
int main()
{
    complex c1(1,2),c2(3),c3;
    return 0;
}
