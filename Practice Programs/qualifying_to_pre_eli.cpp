#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N, K,count=0;
        cin >> N >> K;
        int arr[N];
        for (int i = 0; i < N;i++){
            cin >> arr[i];
        }
        sort(arr, arr + N, greater<int>());
        int ele = arr[K - 1];
        for (int i = 0; arr[i]>=ele;i++){
                count++;
        }
        cout << count << endl;
    }
    return 0;
}