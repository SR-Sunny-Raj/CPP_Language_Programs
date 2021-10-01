#include<iostream>
using namespace std;
int main(){
    int S;
    cin >> S;
    while(S--){
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N;i++){
            cin >> arr[i];
        }
        if(N%2==0 || arr[0]!=1 || arr[N-1]!=1){
            cout << "no" << endl;
        }else{
            int l = 0, r = N - 1,flag=0;
            while(l<r){
                if((arr[l+1]!= arr[l]+1) || arr[l]!=arr[r]){
                    flag = 1;
                }
                l++;
                r--;
            }
            if(flag==0)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
    return 0;
}