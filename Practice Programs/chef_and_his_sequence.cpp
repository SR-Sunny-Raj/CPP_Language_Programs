#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N,flag;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N;i++){
            cin >> arr[i];
        }
        int M;
        cin >> M;
        int brr[M];
        for (int i = 0; i < M;i++){
            cin >> brr[i];
        }
        int k = 0;
        for (int i = 0; i < M;i++){
            flag = 0;
            for (int j = k; j < N;j++){
                if(brr[i]==arr[j]){
                    k = j;
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        if(flag==0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}