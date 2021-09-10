#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X, Y,i=0;
        cin >> X >> Y;
        if(X-Y<=0){
            i = 0;
        }else{
            while((Y*2 >= X) && Y<X){
                i++;
                Y--;
                X -= 2;
            }
        }
        cout << i << endl;
    }
    return 0;
}