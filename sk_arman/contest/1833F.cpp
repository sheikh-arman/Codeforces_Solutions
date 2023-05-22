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
ll big(ll b,ll p, ll md){
    if(p==1)return b;
    if(p%2==0){
        ll q=big(b,p/2,md);
        return ((q%md)*(q%md))%md;
    }
    else{
        ll q=big(b,p-1,md);
        return ((q%md)*(b%md))%md;
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
        ll n,m,mod=1e9+7;
        cin>>n>>m;
        vector<ll>V;
        set<ll>st;
        map<ll,ll>mp;
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            st.insert(a);
            mp[a]++;
        }
        vector<ll>V2;
        ll res=1;
        for(ll i:st){
            V.PB(i);
            res*=mp[i];
            res%=mod;
            V2.PB(res);
        }
        ll siz=V.size();
        for(ll i=m-1;i<siz;i++){
            if(V[i]-V[i-(m-1)]==m-1){
                res=V2[i];
                if(i-m>=0){
                    res*=big(V2[i-m],mod-2,mod);
                    res%=mod;
                }
                ans+=res;
                ans%=mod;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
 ///*****************************  ALHAMDULILLAH  *****************************/
}