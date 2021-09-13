#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        ll X;
        cin >> N >> X;
        ll arr[N], brr[N];
        for (int i = 0; i < N;i++){
            cin >> arr[i];
        }
        sort(arr, arr + N);
        for (int i = 0; i < N;i++){
            brr[i] = arr[i] ^ X;
        }
        sort(brr, brr + N);
        ll maxcount = 1,count=0,val,minop,counta=0;
        for (int i = 0; i < N;i++){
            int countx = 0, county = 0;
            for (int j = i; j<N && arr[j] == arr[j + 1];j++){
                count++;
                countx++;
                i++;
            }
            for (int k = 0; k < N;k++){
                if(arr[i]==brr[k]){
                    county++;
                    count++;
                }
            }
            if(count>maxcount || (count==maxcount && countx>county)){
                maxcount = count;
                val = arr[i];
            }
        }
        for (int i = 0; i < N;i++){
            if(val==arr[i]){
                counta++;
            }
        }
        minop = maxcount - counta;
        cout << maxcount << " " << minop<<endl;
    }
    return 0;
}