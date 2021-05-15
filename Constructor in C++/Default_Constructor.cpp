#include<iostream>
using namespace std;
//Constructor in C++
class complex
{
    private:
    int a,b;
    public:
    complex()
    {
        cout<<"Hello you are learning constuctor !";
    }
};
int main()
{
    complex c1; //The number of objects made, the number of times complex function will execute
    return 0;
}
