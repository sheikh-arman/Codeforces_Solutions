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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(ll l, ll r)
{
    return uniform_int_distribution<ll>(l, r) (rng);
}
vector<ll>edj[100010];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        cin>>n>>m;
        for(ll i=0; i<=n; i++)
        {
            edj[i].clear();
        }
        vector< pair<ll,ll> >V;
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            ll cnt=0;
            for(ll j=0; j<m; j++)
            {
                ll a;
                cin>>a;
                if(a==1)cnt++;
                edj[i].PB(a);
            }
            V.PB({cnt,i});
            sum+=cnt;
        }
        if(sum%n)
        {
            cout<<"-1\n";
            continue;
        }
        VST(V);
        reverse(V.begin(),V.end());
        vector< pair<  pair<ll,ll>, ll>  >ans;
        ll left=0,right=n-1,di=sum/n;
        while(left<right)
        {
            while(V[left].first>di)
            {
                ll u=V[left].second;
                ll v=V[right].second;
                for(ll i=0; i<m&&V[left].first>di; i++)
                {
                    if(V[right].first<di)
                    {
                        if(edj[u][i]==1&&edj[v][i]==0)
                        {
                            swap(edj[u][i],edj[v][i]);
                            V[left].first--;
                            V[right].first++;
                            ans.PB({{u,v},i});
                        }
                    }
                    else
                    {
                        right--;
                        break;
                    }
                }
            }
            left++;
        }
        ll siz=ans.size();
        cout<<siz<<"\n";
        for(ll i=0; i<siz; i++)
        {
            cout<<ans[i].first.first+1<<" "<<ans[i].first.second+1<<" "<<ans[i].second+1<<"\n";
        }
    }
    return 0;
}