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
double PI = 2 * acos(0.0);
ll dp[100011][3];
ll ar[100011][3];
vector<ll>edj[100010];
void dfs(ll node,ll parent){
    if(edj[node].size()>1||parent==-1){
        dp[node][0]=0;
        dp[node][1]=0;
        for(ll i:edj[node]){
            if(i!=parent){
                dfs(i,node);
               ll dif_mi1=abs(ar[node][0]-ar[i][0])+dp[i][0];
               ll dif_mi2=abs(ar[node][0]-ar[i][1])+dp[i][1];
               ll dif_ma1=abs(ar[node][1]-ar[i][0])+dp[i][0];
               ll dif_ma2=abs(ar[node][1]-ar[i][1])+dp[i][1];
               dp[node][0]+=max(dif_mi1,dif_mi2);
               dp[node][1]+=max(dif_ma1,dif_ma2);
            }
        }
    }
}
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        for(ll i=0;i<=n;i++){
            edj[i].clear();
            dp[i][0]=0;
            dp[i][1]=0;
        }
        for(ll i=1;i<=n;i++){
            cin>>ar[i][0]>>ar[i][1];
        }
        for(ll i=0;i<n-1;i++){
            ll a,b;
            cin>>a>>b;
            edj[a].PB(b);
            edj[b].PB(a);
        }
        dfs(1,-1);
        ll ans=max(dp[1][0],dp[1][1]);
        cout<<ans<<"\n";
    }
    return 0;
}