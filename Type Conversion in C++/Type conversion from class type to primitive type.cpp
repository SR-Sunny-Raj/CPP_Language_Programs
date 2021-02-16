#include<iostream>
using namespace std;
//Type conversion from class type to primitive type
class complex
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
    operator int()          //Here we will take the type, the value of type which we want to return
    {
        return (a);
    }
};
int main()
{
    complex c1;
    c1.set_data(2,4);
    c1.show_data();
    int x;
    x=c1;
    cout<<"x = "<<x;
    return 0;
}
