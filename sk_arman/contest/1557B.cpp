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
    cout<<fixed<<setprecision(10);
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>V,st;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.PB(a);
            st.PB(a);
        }
        ll pre=LONG_MAX;
        ll cnt=0;
        VST(st);
        for(ll i=0;i<n;i++){
            if(V[i]<pre){
                cnt++;
            }
            else{
                if(i>0){
                    ll pos=upper_bound(st.begin(),st.end(),V[i-1])-st.begin();
                    if(pos<n){
                        if(st[pos]!=V[i])cnt++;
                    }
                }
            }
            pre=V[i];
        }
        if(cnt<=k){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}