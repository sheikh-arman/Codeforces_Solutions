/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution : DP
 */
#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
vector<ll>V;
ll n;
ll mem[200010][3];
ll dp(ll i,ll status)
{
    if(i>=n+2)
    {
        return 0;
    }
    if(mem[i][status]!=-1)
    {
        return mem[i][status];
    }
    ll ans=1;
    if(V[i+1]>V[i])
    {
        ans+=dp(i+1,status);
    }
    if(status==0&&V[i+2]>V[i])
    {
        ans=max(ans,1+dp(i+2,1));
    }
    return mem[i][status]=ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        V.PB(a);
        mem[i][0]=mem[i][1]=-1;
    }
    V.PB(-1);
    ll ans=0;
    for(ll i=n;i>=0;i--){
        ans=max(ans,dp(i,0));
    }
    cout<<ans<<"\n";

    return 0;
}