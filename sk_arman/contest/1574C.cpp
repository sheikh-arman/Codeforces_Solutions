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

int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,sum=0;
        cin>>n;
        vector<ll>V;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            sum+=a;
        }
        VST(V);
        ll q;
        cin>>q;
        for(ll i=0; i<q; i++)
        {
            ll a,b;
            cin>>a>>b;
            ll pos=upper_bound(V.begin(),V.end(),a)-V.begin();
            ll ans=0;
            if(pos>=n)
            {
                pos--;
                ll tm_sum=sum-V[pos];
                if(tm_sum<b)
                {
                    ans=b-tm_sum;
                }
                ans+=a-V[pos];
            }
            else
            {
                ll tm_sum=sum-V[pos];
                if(tm_sum<b)
                {
                    ans=b-tm_sum;
                }
                pos--;
                ll ans2=0;
                if(pos>=0)
                {
                    tm_sum=sum-V[pos];
                    if(tm_sum<b)
                    {
                        ans2=b-tm_sum;
                    }
                    ans2+=a-V[pos];
                    ans=min(ans,ans2);
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}