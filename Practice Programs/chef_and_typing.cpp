#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        string arr[N];
        for (int i = 0; i < N;i++){
            cin >> arr[i];
        }
        float brr[N];
        for (int i = 0; i < N;i++){
            float count = 0;
            char h;
            if(arr[i][0]=='d' || arr[i][0]=='f'){
                count += 0.2;
                h = 'l';}
            else{
                count += 0.2;
                h = 'r';}
            for (int j = 1; j < arr[i].size();j++){
                if(arr[i][j]=='d' ||  arr[i][j]=='f'){
                    if(h=='l')
                        count += 0.4;
                    else
                        count += 0.2;
                    h = 'l';
                }else if(arr[i][j]=='j' || arr[i][j]=='k'){
                    if(h=='l')
                        count += 0.2;
                    else
                        count += 0.4;
                    h = 'r';
                }
            }
            brr[i] = count;
        }
        for (int i = 0; i < N;i++){
            for (int j = 0; j < i;j++){
                if(arr[i]==arr[j]){
                    brr[i] /= 2;
                    break;
                }
            }
        }
        float time = 0;
        for (int i = 0; i < N;i++){
            time += brr[i];
        }
        cout << (time*10);
    }
    return 0;
}