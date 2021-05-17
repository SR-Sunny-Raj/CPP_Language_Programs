#include<iostream>
using namespace std;
//Pair in STL in C++
class student
{
    private:
    string name;
    int age;
    public:
    void set_student(string s,int a)
    {
        name = s;
        age = a;
    }
    void show_student()
    {
        cout<<"\nName :  "<<name;
        cout<<"\nAge :  "<<age;
    }
};
int main()
{
    pair <string,int> p1;
    pair <string,string> p2;
    pair <string,float> p3;
    pair <student,int> p4;
    p1 = make_pair("Sunny",21);
    p2 = make_pair("India","New Delhi");
    p3 = make_pair("Drilling C++",490.99f);
    student s1;
    s1.set_student("Nisha",19);
    p4 = make_pair(s1,1);
    cout<<"\nPair - 1";
    cout<<"\n"<<p1.first<<"     "<<p1.second;
    cout<<"\nPair - 2";
    cout<<"\n"<<p2.first<<"     "<<p2.second;
    cout<<"\nPair - 3";
    cout<<"\n"<<p3.first<<"     "<<p3.second;
    cout<<"\nPair - 4";
    student s2 = p4.first;
    s2.show_student();
    cout<<"     "<<p4.second;
    return 0;
}
