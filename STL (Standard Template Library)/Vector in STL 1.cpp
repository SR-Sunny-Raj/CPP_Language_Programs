#include<iostream>
#include<vector>
using namespace std;
//Vector in STL in C++
//push_back() , pop_back() , capacity() , aize()
int main()
{
    int i;
    vector <int> v1;
    cout<<"Capacity is -:"<<v1.capacity()<<endl;
    for(i=0;i<=9;i++)
    {
        v1.push_back(10*(i+1));
    }
    cout<<"Current Capacity is -: "<<v1.capacity()<<endl;
    for(i=0;i<=9;i++)
    {
        cout<<v1[i]<<endl;
    }
    v1.pop_back();
    cout<<"Current Capacity is -: "<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"Current Capacity is -: "<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"Current Capacity is -: "<<v1.capacity()<<endl;
    cout<<"Total elements remaining is -: "<<v1.size()<<endl;
    for(i=0;i<=v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
    return 0;
} 
