#include<iostream>
#include<array>
using namespace std;
//array container in C++
int main()
{
    int i; 
    array <int,5> data_array1={11,22,33,44,55};
    array <int,5> data_array2={1,2,3,4,5};
    cout<<data_array1.at(2)<<endl;
    cout<<data_array1[2]<<endl;
    cout<<data_array1.front()<<endl;
    cout<<data_array1.back()<<endl;
    data_array2.fill(21);
    for(i=0;i<=4;i++)
    {
        cout<<data_array2[i];
    }
    cout<<endl;
    data_array1.swap(data_array2);
    for(i=0;i<=4;i++)
    {
        cout<<data_array1[i];
    }
    cout<<endl;
    for(i=0;i<=4;i++)
    {
        cout<<data_array2[i];
    }
    cout<<endl<<data_array1.size();
    return 0;
}
