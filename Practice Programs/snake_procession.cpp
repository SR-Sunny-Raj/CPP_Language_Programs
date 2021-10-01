#include<iostream>
using namespace std;
int main(){
    int R;
    cin >> R;
    while(R--){
        int L,flag=1,head=0;
        cin >> L;
        string str;
        cin >> str;
        for (int i = 0; i < L;i++){
            if((str[i]=='H' && head==1) || (str[i]=='T' && head==0)){
                flag = 0;
                break;
            }
            else if(str[i]=='H'){
                head = 1;
            }else if(str[i]=='T'){
                head = 0;
            }
        }
        if(flag==0 || head==1){
            cout << "Invalid" << endl;
        }else{
            cout << "Valid" << endl;
        }
    }
    return 0;
}