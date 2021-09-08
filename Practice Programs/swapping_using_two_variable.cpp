#include<iostream>
using namespace std;
int main(){
    int A = 5, B = 6;
    cout << "Before Swapping -: A = " << A << " and B = " << B<<endl;
    A = A + B;
    B = A - B;
    A = A - B;
    cout << "After Swapping -: A = " << A << " and B = " << B << endl;
    return 0;
}