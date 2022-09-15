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
ll mod=1e9+7;
ll big_mod(ll n,ll p)
{
    if(p==0)
    {
        return 1LL;
    }
    if(p==1)
    {
        return n;
    }
    if(p%2==0)
    {
        ll tm=big_mod(n,p/2);
        ll val=((tm%mod)*(tm%mod))%mod;
        return val;
    }
    else
    {
        ll val=((big_mod(n,p-1)%mod)*(n%mod))%mod;
        return val;
    }
}
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,k;
        cin>>n>>k;
        ll ans=0,cnt=0;
        while(k){
            if(k%2!=0){
                ans+=big_mod(n,cnt);
                ans%=mod;
            }
            k/=2;
            cnt++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}