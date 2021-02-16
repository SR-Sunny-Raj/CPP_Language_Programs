#include<iostream>
using namespace std;
//Exception handling (try,throw,catch) in C++
int main()
{
    cout<<"Welcome";
    try
    {
        throw 24;
        cout<<"\nIn try";
    }
    catch(int e)
    {
        cout<<"\nException no. -: "<<e;
    }
    cout<<"\nLast line";
    return 0;
}
