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
vector<pair<ll,ll>>edj[100010];
map<ll,ll>mp;
void dfs(ll node,ll parent,ll xo)
{
    for(auto i:edj[node])
    {
        if(parent!=i.first)
        {
            mp[xo^i.second]=1;
            dfs(i.first,node,xo^i.second);
        }
    }
}
ll ck;
ll n,u,v;
void dfs2(ll node,ll parent,ll xo)
{
    if(mp.count(xo))
    {
        ck=1;
    }
    for(auto i:edj[node])
    {
        if(parent!=i.first&&i.first!=v)
        {

            dfs2(i.first,node,xo^i.second);
        }
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
        mp.clear();
        // mp[0]=1;
        ck=0;
        cin>>n>>u>>v;
        for(ll i=0; i<=n; i++)
        {
            edj[i].clear();
        }
        for(ll i=0; i<n-1; i++)
        {
            ll a,b,w;
            cin>>a>>b>>w;
            edj[a].PB({b,w});
            edj[b].PB({a,w});
        }
        dfs(v,-1,0);
        dfs2(u,-1,0);
        if(ck)
        {
            YES;
        }
        else
        {
            NO;
        }


    }
    return 0;
}