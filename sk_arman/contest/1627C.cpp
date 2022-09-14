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
vector<ll>V[100100];
vector<pair<ll,ll>>edg;
map<pair<ll,ll>,ll>mp;
ll ar[100100];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        edg.clear();
        mp.clear();
        ll n;
        cin>>n;
        for(ll i=0; i<=n; i++)
        {
            V[i].clear();
            ar[i]=0;
        }
        for(ll i=0; i<n-1; i++)
        {
            ll u,v;
            cin>>u>>v;
            V[u].PB(v);
            V[v].PB(u);
            edg.PB({u,v});
        }
        ll ck=0,start;
        for(ll i=1; i<=n; i++)
        {
            if((ll)V[i].size()>2)
            {
                ck=1;
                break;
            }
            if((ll)V[i].size()==1)
            {
                start=i;
            }
        }
        if(ck)
        {
            cout<<"-1\n";continue;
        }
        else
        {
            ar[start]=1;
            ll node=V[start][0];
            ll tog=0;
            while(ar[node]==0)
            {
                if(tog==0)
                {
                    mp[ {start,node}]=2;
                    mp[ {node,start}]=2;tog^=1;
                }
                else
                {
                    mp[ {start,node}]=3;
                    mp[ {node,start}]=3;tog^=1;
                }
                ar[node]=1;
                for(ll i:V[node]){
                    if(ar[i]==0){
                        start=node;
                        node=i;break;
                    }
                }
            }
        }
        for(ll i=0;i<n-1;i++){
            cout<<mp[{edg[i].first,edg[i].second}]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}