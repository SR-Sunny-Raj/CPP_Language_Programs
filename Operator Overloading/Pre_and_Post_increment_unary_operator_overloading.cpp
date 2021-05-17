#include<iostream>
using namespace std;
//Pre and Post increment unary operator overloading
class Integer
{
    private:
    int x;
    public:
    void set_data(int a)
    {
        x=a;
    }
    void show_data()
    {
        cout<<"x = "<<x<<endl;
    }
    Integer operator++()        //Pre increment
    {
        Integer i;
        i.x=++x;
        return(i);
    }
    Integer operator++(int)   //Post increment
    {
        Integer i;
        i.x=x++;
        return(i);
    }
};
int main()
{
    int p;
    cout<<"Enter any number : ";
    cin>>p;
    Integer i1,i2;
    i1.set_data(p);
    i1.show_data();
    i2=i1++;                    //Call for post increment
    //i2=++i1;                //Call for pre increment
    i1.show_data();
    i2.show_data();
    return 0;
}
