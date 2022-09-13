#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
ll mem[2010][2010];
vector<ll>V;
ll dp(ll left,ll right)
{
    if(left>=right)
    {
        return 0;
    }
    if(mem[left][right]!=-1)
    {
        return mem[left][right];
    }
    ll ans=V[right]-V[left];
    ll mi=min(dp(left+1,right),dp(left,right-1));
    mem[left][right]=ans+mi;
    return mem[left][right];
}
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        for(ll i=0; i<=n; i++)
        {
            for(ll j=0; j<=n; j++)
            {
                mem[i][j]=-1;
            }
        }
        V.clear();
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
        }
        VST(V);
        ll ans=V[n-1]-V[0];
        ll mi=min(dp(1,n-1),dp(0,n-2));
        cout<<ans+mi<<"\n";
    }
    return 0;
}