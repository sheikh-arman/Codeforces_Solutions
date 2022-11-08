/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
    Date:
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

#define sf(n) scanf("%lld",&n);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define nl cout<<"\n";
#define PB push_back
#define pb push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
#define T(n) printf("test : %d\n",n);
ll dx[]= {1,-1,0,0,1,-1,-1,1};
ll dy[]= {0,0,1,-1,1,1,-1,-1};
ll knx[]= {2,2,1,-1,-2,-2,1,-1};
ll kny[]= {1,-1,2,2,1,-1,-2,-2};
ll mod= 998244353;

ll chk[50007];
vector<ll> p;

ll llcm(ll a,ll b)
{
    ll ans=a*b;
    ll gc=__gcd(a,b);
    ans/=gc;
    return ans;
}
int main()
{

    for(ll i=2;i<50007;i++){
        if(!chk[i]){
            chk[i]=1;
            p.pb(i);
            for(ll j=i;j<50007;j+=i){
                chk[j]=1;
            }
        }
    }
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>V;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
        }
        ll gcd=V[0];
        ll ans=1,ok=0;

        for(ll i=1;i<n;i++){
            if(V[i-1]%V[i]){
                cout<<0<<endl;
                ok=1;
                break;
            }
        }
        if(ok) continue;

        vector<pair<ll,ll>> f;
        ll x=V[0];
        for(ll i=0;i<p.size() && p[i]*p[i]<=x;i++){
            ll cnt=0;
            if(x%p[i]==0){
                while(x%p[i]==0){
                    cnt++;
                    x/=p[i];
                }
                f.pb({p[i],cnt});
            }
        }
        if(x!=1) f.pb({x,1});
        //cout<<f.size()<<endl;

        for(ll i=1;i<n;i++){
            if(V[i]==V[i-1]){
                ll v=m/V[i];
                ans=(ans*v)%mod;
                continue;
            }
            ll v=V[i-1]/V[i];
            vector<ll> pr;
            for(ll j=0;j<f.size();j++){
                if(v%f[j].first==0) pr.pb(f[j].first);
            }
            //cout<<p[0]<<endl;
            ll ran=pow(2,pr.size()),temp=0;
            for(ll j=0;j<ran;j++){
                ll c=0,vv=1;
                for(ll k=0;k<pr.size();k++){
                    if(j&(1<<k)){
                        c++;
                        vv*=pr[k];
                    }
                }
                vv*=V[i];
                if(c%2) temp=(temp-m/vv+mod)%mod;
                else temp=(temp+m/vv)%mod;
            }
            ans=(ans*temp)%mod;
        }
        cout<<ans<<endl;

    }
    return 0;
}