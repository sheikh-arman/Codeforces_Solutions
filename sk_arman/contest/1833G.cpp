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
vector<pair <ll,ll> >edj[200010];
vector<ll>V;
ll cnt_node[200010],ck;
void dfs(ll node)
{
    cnt_node[node]+=1;
    ll cnt=1;
    for(auto i:edj[node])
    {
        ll child=i.first;
        if(cnt_node[child]==0)
        {
            dfs(child);
            cnt_node[node]+=cnt_node[child];
            if(cnt_node[child]%3==0)
            {
                V.PB(i.second);
            }
            cnt+=cnt_node[child];
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
        V.clear();
        ll n;
        cin>>n;
        for(ll i=0; i<=n; i++)
        {
            edj[i].clear();
            cnt_node[i]=0;
        }
        for(ll i=0; i<n-1; i++)
        {
            ll u,v;
            cin>>u>>v;
            edj[u].PB({v,i+1});
            edj[v].PB({u,i+1});
        }
        dfs(1);
        if(V.size()==(n/3)-1&&n%3==0)
        {
            cout<<V.size()<<"\n";
            for(ll i:V)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}