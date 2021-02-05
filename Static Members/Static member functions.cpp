#include<iostream>
using namespace std;
//Static member (functions)
class account
{
    private:
    int balance;
    static float roi;
    public:
    void set_balance(int b) //Instance member function
    {
        balance=b;
    }
    static void set_roi(float r) //static member function
    {
        roi=r;
    }
    void show_data()
    {
        cout<<"Balance = "<<balance<<endl<<"roi = "<<roi;
    }
};
float account :: roi = 3.5f;
int main()
{
    account a1;
    a1.set_balance(5000);
    account::set_roi(4.5f); //calling static member function require no object
    a1.show_data();
    return 0;
}
