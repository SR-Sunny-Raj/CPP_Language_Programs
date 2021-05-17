#include<iostream>
using namespace std;
//this pointer in C++
class Box
{
    private:
    int l,b,h;
    public:
    void set_dimension(int l,int b,int h)                          //Here is a conflict between the names of the variable
    {
        this->l=l;                                                                   //So to solve this type of conflict we use this pointer
        this->b=b;
        this->h=h;                                                                 //Here writing "this" with an arrow operator before the variable tells the compiler that its the member variable of the caller object
    }
    void show_dimension()
    {
        cout<<"Length = "<<l<<" , Breadth = "<<b<<" and Height = "<<h;
    }
};
int main()
{
    int p,q,r;
    cout<<"Enter the length , breadth and height of the dimension : ";
    cin>>p>>q>>r;
    Box smallbox;
    smallbox.set_dimension(p,q,r);
    smallbox.show_dimension();
    return 0;
}
