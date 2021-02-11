#include<iostream>
using namespace std;
//Method overloading , Method overriding and Method hiding
class car
{
    public:
    void shift_gear()
    {
        cout<<"shiftgear fun of car"<<endl;
    }
    void f1()
    {
        cout<<"f1 fun called of car"<<endl;
    }
};
class sports_car : public car
{
    public:
    void shift_gear()
    {
        cout<<"shiftgear fun of sports_car"<<endl;                       //Method overriding
    }
    void f1(int x)                                                              //Method hiding
    {
        cout<<"f1 fun of sports_car"<<endl;
    }
};
int main()
{
    sports_car obj;
    car obj1;
    obj.shift_gear();              // sports_car shiftgear fun will be called
    obj1.shift_gear();                  // car shiftgear fun will be called
   // obj.f1();                    // This line will be an error
    obj.f1(2);                   // sports_car f1 fun will be called
    return 0;
}
