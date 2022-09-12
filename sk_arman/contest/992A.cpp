#include<bits/stdc++.h>
using namespace std;
int a1[100000],a2[100000];
int main (){
    int n,t,ans=0;
    cin>>t;
    while(t--){
        scanf("%d",&n);
        if(n<0)
            a1[n*-1]++;
        else if(n>0)
            a2[n]++;
    }
    for(int i=1;i<=100000;i++){
        if(a1[i]>0)
            ans++;
        if(a2[i]>0)
            ans++;
    }
    cout<<ans<<endl;
}