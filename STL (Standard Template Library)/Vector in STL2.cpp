#include<iostream>
#include<vector>
using namespace std;
//Vector in STL in C++
//clear() , at() , front() , back() , iterator and insert()
int main()
{
    int i;
    vector <int> v1;
    for(i=0;i<=9;i++)
    {
        v1.push_back(10*(i+1));
    }
    cout<<"Current capacity is -: "<<v1.capacity()<<endl;
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<"Element at index 3 is -: "<<v1.at(3)<<endl;
    vector <int> :: iterator i1 = v1.begin();
    v1.insert(i1+3,35);
    cout<<"Current capacity is -: "<<v1.capacity()<<endl;
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<"First value is -: "<<v1.front()<<endl;
    cout<<"Last value is -: "<<v1.back()<<endl;
    v1.clear();
    cout<<"Current capacity is -: "<<v1.capacity()<<endl;
    cout<<"size is -: "<<v1.size();
}
