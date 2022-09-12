#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,o=0,e=0,ar[101],ok=0,ek=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]%2==0){
            e++;ek=i+1;
        }
        else {
            o++;ok=i+1;
        }
    }
    cout<<(e==1?ek:ok)<<endl;
}