#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES printf("YES\n");
#define NO printf("NO\n");
#define nl printf("\n");
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
ll dx[]= {1,-1,0,0};
ll dy[]= {0,0,1,-1};
ll SET(ll NUM,ll POS)
{
    return NUM | (1<<POS);
}
bool isOn(ll NUM,ll POS)
{
    return (bool)(NUM & (1<<POS));
}
ll mat_row[510][510];
ll mat_col[510][510],n,m;
ll mem[510][510][12];
ll dp(ll i,ll j,ll k)
{
    if(k<=0)
    {
        return 0;
    }
    if(mem[i][j][k]!=-1)
    {
        return mem[i][j][k];
    }
    ll ans=LONG_MAX;
    if(i-1>=0)
    {
        ans=min(ans,dp(i-1,j,k-1)+mat_col[i-1][j]);
    }
    if(i+1<n)
    {
        ans=min(ans,dp(i+1,j,k-1)+mat_col[i][j]);
    }
    if(j-1>=0)
    {
        ans=min(ans,dp(i,j-1,k-1)+mat_row[i][j-1]);
    }
    if(j+1<m)
    {
        ans=min(ans,dp(i,j+1,k-1)+mat_row[i][j]);
    }
    return mem[i][j][k]=ans;
}
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll k;
        cin>>n>>m>>k;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m-1; j++)
            {
                cin>>mat_row[i][j];
            }
        }
        for(ll i=0; i<n-1; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>mat_col[i][j];
            }
        }
        if(k%2!=0)
        {
            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<m; j++)
                {
                    cout<<"-1 ";
                }
                cout<<"\n";
            }
            return 0;
        }
        k/=2;
        for(ll i=0; i<=n; i++)
        {
            for(ll j=0; j<=m; j++)
            {
                for(ll x=0; x<=k; x++)
                {
                    mem[i][j][x]=-1;
                }
            }
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                ll ans=dp(i,j,k);
                cout<<ans*2<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}