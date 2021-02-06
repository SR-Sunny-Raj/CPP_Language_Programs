#include<iostream>
using namespace std;
//Destructor in C++
class complex
{
    private:
    int a,b;
    public:
    ~complex()                     //Destructor
    {
        cout<<"Destructor !!";
    }
};
void fun()
{
    complex obj;
}
int main()
{
    fun();
}
