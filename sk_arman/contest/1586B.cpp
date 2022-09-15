#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define nl cout<<"\n";
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
#define T(n) printf("test : %d\n",n);
ll ar[500000];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        vector<ll>V;
        cin>>n>>m;
        for(ll i=0;i<=n;i++)ar[i]=0;
        for(ll i=0; i<m; i++)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            ar[b]=1;
        }
        VST(V);
        ll x=n;
        for(ll i=1;i<=n;i++){
            if(ar[i]==0){
                x=i;break;
            }
        }
        for(ll i=1; i<=n; i++)
        {
            if(i!=x)
            {
                cout<<x<<" "<<i<<"\n";
            }
        }
    }
    return 0;
}