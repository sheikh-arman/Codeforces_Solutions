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
#define  N 200010
vector<ll>edj[N];
bitset<N>loop;
bitset<N>color;
ll clr[N];
void dfs(ll node)
{
    clr[node]=2;
    for(ll i:edj[node])
    {
        if(clr[i]==1)
        {
            loop[i]=1;
            clr[i]=2;
            dfs(i);
        }
    }
}
void dfs_loop(ll node,ll parent)
{
    clr[node]=1;
    for(ll i:edj[node])
    {
        if(clr[i]==0)
        {
            dfs_loop(i,node);
        }
        else if(clr[i]==1 && parent!=i)
        {
            loop[i]=1;
            loop[node]=1;
            clr[i]=2;
            dfs(node);
            return;
        }
    }
    clr[node]=2;
}
ll point;
ll bfs1(ll source,ll dis,ll st)
{
    queue<pair<ll,ll>>q;
    q.push({source,0});
    while(!q.empty())
    {
        ll node=q.front().first;
        ll cost=q.front().second;
        if(st==1)
        {
            if(loop[node]==1)
            {
                point=node;
                return cost;
            }
        }
        else
        {
            if(node==dis)
            {
                return cost;
            }
        }

        q.pop();
        color[node]=1;
        for(ll i:edj[node])
        {
            if(color[i]==false)
            {
                color[i]=1;
                q.push({i,cost+1});
            }
        }
    }
}
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    //fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m,v;
        cin>>n>>m>>v;
        for(ll i=0; i<=n; i++)
        {

            edj[i].clear();
            color[i]=false;
            clr[i]=0;
            loop[i]=0;
        }
        for(ll i=0; i<n; i++)
        {
            ll u,v;
            cin>>u>>v;
            edj[u].PB(v);
            edj[v].PB(u);
        }
        dfs_loop(1,-1);
        ll dis1=bfs1(v,-1,1);
        for(ll i=0;i<=n;i++){
            color[i]=0;
        }
        ll dis2=bfs1(m,point,2);
//        for(ll i=1;i<=n;i++){
//            if(loop[i]==1){
//                cout<<i<<" ";
//            }
//
//        }
//        cout<<"\n";
//        cout<<dis1<<" "<<dis2<<" t\n";
        cout<<((dis1<dis2)?"YES\n":"NO\n");
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}