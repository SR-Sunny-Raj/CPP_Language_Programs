#include<iostream>
using namespace std;
//Object pointer in C++
class Box
{
    private:
    int l,b,h;
    public:
    void set_dimension(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    void show_dimension()
    {
        cout<<"l = "<<l<<", b = "<<b<<" and h = "<<h;
    }
};
int main()
{
    int m,n,o;
    cout<<"Enter the length , breadth and height of the dimension : ";
    cin>>m>>n>>o;
    Box smallbox;
    Box *p = &smallbox;
    p->set_dimension(m,n,o);
    p->show_dimension();
    return 0;
}
