#include<iostream>
#include<tuple>
using namespace std;
//Tuple in STL in C++
class student
{
    private:
    string name;
    int age;
    public:
    set_student(string s,int a)
    {
        name = s;
        age = a;
    }
    show_student()
    {
        cout<<"\nName : "<<name<<"\nAge : "<<age;
    }
};
int main()
{
    tuple<string,int,int>t1;
    tuple<float,int,string,student>t2;
    t1 = make_tuple("INDIA",82,33);
    student s1;
    s1.set_student("Sunny",24);
    t2 = make_tuple(4.21f,13,"Raj",s1);
    cout<<"Tuple - 1"<<endl;
    cout<<get<0>(t1)<<"  ";
    cout<<get<1>(t1)<<"  ";
    cout<<get<2>(t1)<<endl<<endl;
    cout<<"Tuple- 2"<<endl;
    cout<<get<0>(t2)<<"  ";
    cout<<get<1>(t2)<<"  ";
    cout<<get<2>(t2)<<"  ";
    student s2 = get<3>(t2);
    s2.show_student();
    return 0;
}
