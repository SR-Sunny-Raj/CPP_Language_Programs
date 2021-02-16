#include<iostream>
using namespace std;
//Exception handling in C++
void fun()
{
    throw 1;
}
int main()
{
    int i;
    cout<<"Welcome\nEnter any number from 1 to 3 : ";
    cin>>i;
    try
    {
        if(i==1)
        {
            fun();
        }
        if(i==2)
        {
            throw 'S';
        }
        if(i==3)
        {
            throw 2.14;
        }
    }
    /*catch(...)
    {
        cout<<"\nException no. -: ";
    }*/
    catch(double e)
    {
        cout<<"Exception no. -: "<<e;
    }
    catch(int e)
    {
        cout<<"Exception no. -: "<<e;
    }
    catch(char ch)
    {
        cout<<"Exception -: "<<ch;
    }
    return 0;
}
