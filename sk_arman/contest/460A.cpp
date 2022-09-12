#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin>>n>>m;
    int ans=n;
    while(n){
        ans+=n/m;
        n=n/m+n%m;
        if(n<m)
            break;
    }
    cout<<ans<<endl;
}