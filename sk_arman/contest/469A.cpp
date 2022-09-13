#include<bits/stdc++.h>
using namespace std;
int arr[102];
int main (){
    int n,p,q,a,ck=0;
    cin>>n;
    cin>>p;
    for(int i=1;i<=p;i++){
        cin>>a;
        arr[a]=1;
    }
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>a;
        arr[a]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]!=1){
         ck=1;break;
        }
    }
    cout<<(ck==1?"Oh, my keyboard!":"I become the guy.")<<endl;
}