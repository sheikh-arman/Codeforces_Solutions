#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll mem[1010][1010][3],n,k;
ll mod=1e9+7;
ll dp(ll pos,ll j,ll status)
{
    if(j<=0)
    {
        return 0;
    }
    if(pos>=n)
    {
        ll x=1;
        if(status!=0)x=0;
        return x;
    }
    if(pos<0)
    {
        ll x=1;
        if(status!=1)x=0;
        return x;
    }
    if(mem[pos][j][status]!=-1)
    {
    //	cout<<"test \n";
        return mem[pos][j][status];
    }
    ll ans=0;
    if(status==0)
    {
        ans+=dp(pos+1,j,0);
        ans%=mod;
        ans+=dp(pos-1,j-1,1);
        ans%=mod;
    }
    else
    {
        ans+=dp(pos-1,j,1);
        ans%=mod;
        ans+=dp(pos+1,j-1,0);
        ans%=mod;
    }
    return mem[pos][j][status]=ans;
}
int main()
{
   // freopen("1input.txt","r",stdin);
   // fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        cin>>n>>k;
        for(ll i=0; i<=n; i++)
        {
            for(ll j=0; j<=k; j++)
            {
                mem[i][j][0]=-1;
                mem[i][j][1]=-1;
            }
        }
        ll ans=dp(0,k,0);
        cout<<ans<<"\n";
    }
    return 0;
}