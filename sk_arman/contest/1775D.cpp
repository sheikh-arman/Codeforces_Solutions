/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
    Date:
 */

#include<bits/stdc++.h>
using namespace std;
typedef int ll;

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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(ll l, ll r)
{
    return uniform_int_distribution<ll>(l, r) (rng);
}
vector<ll>V;
bitset<550>color;
void seive()
{
    for(ll i=2; i<=550; i++)
    {
        if(color[i]==0)
        {
            V.PB(i);
            for(ll j=i+i; j<=550; j+=i)
            {
                color[j]=1;
            }
        }
    }
}
vector<ll>edj[300010];
vector<ll>fact[300010];
void factorize(ll pos,ll n)
{
    for(ll i:V)
    {
        if(n%i==0)
        {
            edj[pos].PB(i);
            fact[i].PB(pos);
            while(n%i==0)n/=i;
        }
        if(i*i>n)break;
    }
    if(n>1)
    {
        edj[pos].PB(n);
        fact[n].PB(pos);
    }
}
ll label[300010];
ll parent[300010];
ll bfs(ll source, ll dist)
{
    bitset<300010>color;
    for(ll i=0; i<=300000; i++)
    {
        label[i]=-1;
        parent[i]=-1;
        color[i]=0;
    }
    label[source]=0;
    queue<ll>q;
    q.push(source);
    while(!q.empty())
    {
        ll node=q.front();
        if(node==dist)break;
        q.pop();
        for(ll i:edj[node])
        {
            if(color[i]==1)continue;
            color[i]=1;
            for(ll j:fact[i])
            {
                if(label[j]==-1&&node!=j)
                {
                    label[j]=label[node]+1;
                    parent[j]=node;
                    q.push(j);
                }
            }
        }
    }
    return label[dist];
}
void print(ll n)
{
    if(parent[n]==-1)
    {
        return;
    }
    print(parent[n]);
    cout<<n<<" ";
}
int main()
{
    seive();
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,sum=0;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            factorize(i+1,a);
        }
        ll x,y;
        cin>>x>>y;
        ll ans=bfs(x,y);
        if(ans==-1)
        {
            cout<<ans<<"\n";
        }
        else
        {
            cout<<label[y]+1<<"\n";
            cout<<x<<" ";
            print(y);
            cout<<"\n";
        }
    }
    return 0;
}