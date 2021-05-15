#include <iostream>
using namespace std;
//Constructor and Destructor in inheritance in C++
class A
{
private:
    int a;

public:
    A(int k)
    {
        a = k;
    }
    void show_data_a()
    {
        cout << "a = " << a << endl;
    }
};
class B : public A
{
private:
    int b;

public:
    B(int x, int y) : A(x)
    {
        b = y;
    }
    void show_data()
    {
        show_data_a();
        cout << "b = " << b;
    }
};
int main()
{
    int m, n;
    cout << "Enter any two number : ";
    cin >> m >> n;
    B obj(m, n);
    obj.show_data();
    return 0;
}
