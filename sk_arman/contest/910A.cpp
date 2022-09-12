#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,j,cnt=0,p;
    cin>>n>>j;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        for(int k=i;k<=i+j;k++){
            if(s[k]=='1'){
                p=k;
            }
        }
        if(i==n-1)
            break;
        if(p>i){
            cnt++;i=p-1;
        }
        else{
            cout<<-1<<endl;return 0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}