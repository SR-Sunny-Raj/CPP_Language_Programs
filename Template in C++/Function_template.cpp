#include<iostream>
using namespace std;
//Function template in C++
template <class X>
X big(X a , X b)
{
    if(a>b)
    return(a);
    else
    return(b);
}
int main()
{
    cout<<big(1,2)<<endl;
    cout<<big(1.8,1.3);
    return 0;
}
