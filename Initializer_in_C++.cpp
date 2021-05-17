#include<iostream>
#include<fstream>
using namespace std;
//Initializer in C++
class Dummy
{
    private:
    const int x;           //Here we need to initialize value to const variable but we can't do that in class so we use initializer
    int &y;               //In this case also we use initializer
    public:
    Dummy (int &n) : x(5),y(n)
    {
        cout<<"Dummy Constructor ran";
    }
    void show_data()
    {
        cout<<"\n x = "<<x<<" and y = "<<y;
    }
};
int main()
{
    int m;
    cout<<"Enter a number : ";
    cin>>m;
    Dummy obj(m);
    obj.show_data();
    return 0;
}
