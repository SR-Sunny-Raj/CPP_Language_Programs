#include<iostream>
using namespace std;
//Static member (variables)
class account
{
    private:
    int balance; //Instance variable
    static float roi; //Static member variable
    public:
    void set_balance(int b)
    {
        balance=b;
    }
    void show_balance()
    {
        cout<<"Balance = "<<balance;
    }
};
float account :: roi=3.5f; //Static member variable definition
int main()
{
    account a1;
    a1.set_balance(3000);
    a1.show_balance();
    return 0;
}
