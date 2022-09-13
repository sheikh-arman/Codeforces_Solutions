#include<bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long int
vector<ll>V;
ll mem[110][4],n;
ll dp(ll i,ll status){
    if(i>=n){
        return 0;
    }
    if(mem[i][status]!=-1){
        return mem[i][status];
    }
    ll ans=LONG_MAX;
    if(status==0){
        if(V[i]==0){
            ans=dp(i+1,0)+1;
        }
        else if(V[i]==1){
            ans=dp(i+1,1);
        }
        else if(V[i]==2){
            ans=dp(i+1,2);
        }
        else{
            ans=min(dp(i+1,1),dp(i+1,2));
        }
    }
    else if(status==1){
        if(V[i]==0){
            ans=dp(i+1,0)+1;
        }
        else if(V[i]==1){
            ans=dp(i+1,0)+1;
        }
        else if(V[i]==2){
            ans=dp(i+1,2);
        }
        else{
            ans=min(dp(i+1,0)+1,dp(i+1,2));
        }
    }
    else{
        if(V[i]==0){
            ans=dp(i+1,0)+1;
        }
        else if(V[i]==1){
            ans=dp(i+1,1);
        }
        else if(V[i]==2){
            ans=dp(i+1,0)+1;
        }
        else{
            ans=min(dp(i+1,1),dp(i+1,0)+1);
        }
    }
    return mem[i][status]=ans;
}
int main(){
    cin>>n;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        V.PB(a);
    }
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<4;j++){
            mem[i][j]=-1;
        }
    }
    ll ans=dp(0,0);
    cout<<ans<<"\n";

}