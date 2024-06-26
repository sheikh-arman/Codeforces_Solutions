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
vector<ll>V;
ll ar1[5010],ar2[5010],n;
ll mem[5010][5010];
ll dp(ll i,ll pre){
    if(i>=n){
        return 0;
    }
    if(mem[i][pre]!=-1){
        return mem[i][pre];
    }
    ll ans=MAX;
    if(i==0){
        ans=dp(i+1,0)+ar1[V[i]-1];
    }
    else{
        
        ans=dp(i+1,pre)+(V[i-1]==V[i]?ar2[V[i]-1]:ar1[V[i]-1]);
        ans=min(ans,dp(i+1,V[i-1])+(pre==V[i]?ar2[V[i]-1]:ar1[V[i]-1]));
    }
    //cout<<i<<" "<<V[i]<<" "<<pre<<" "<<ans<<" x\n";
    return mem[i][pre]=ans;
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
        ll k;
        cin>>n>>k;
        V.clear();
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.PB(a);
        }
        for(ll i=0;i<k;i++){
            cin>>ar1[i];
        }
        for(ll j=0;j<k;j++){
            cin>>ar2[j];
        }
        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=k;j++){
                mem[i][j]=-1;
            }
        }
        ll ans=dp(0,0);
        cout<<ans<<"\n";
    }
    return 0;
}