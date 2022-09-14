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
ll color[110];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        for(ll i=0; i<=n; i++)
        {
            color[i]=0;
        }
        vector<ll>k;
        vector<ll>h;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            k.PB(a);
        }
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            h.PB(a);
        }
        color[n-1]=1;
        ll pos=n-1,start=0;
        for(ll i=n-2; i>=0; i--)
        {
            ll dif=k[pos]-k[i];
            if(h[pos]<=dif)
            {
                color[i]=1;
                pos=i;
            }
            else
            {
                ll start2=(k[pos]-h[pos])+1;
                ll pos2=k[i]-start2;
                pos2+=1;
                if(pos2<h[i])
                {
                    h[pos]+=(h[i]-pos2);
                }
            }
        }
        unsigned long long ans=0;
        for(ll i=0; i<n; i++)
        {
            if(color[i]==1)
            {
                unsigned long long tm=(h[i]*(h[i]+1))/2;
                ans+=tm;
                //cout<<i<<" "<<h[i]<<"\n";
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}