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
ll ck(ll mid,vector<ll>V,ll ma)
{
    ll ans=0;
    for(ll i=0; i<mid; i++)
    {
        ans+=V[i];
    }
    if(ans<=ma)return 1;
    ll left=0;
    ans-=V[left];
    for(ll i=mid; i<V.size(); i++)
    {
        ans+=V[i];
        if(ans<=ma)return 1;
        ans-=V[++left];
    }
    return 0;
}
ll sol(vector<ll>V,ll ma)
{
    ll left=0,right=V.size(),ans=0;
    while(left<=right)
    {
        ll mid=(left+right)/2;
        if(ck(mid,V,ma))
        {
            ans=mid;
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return ans;
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
        ll n,k,ans=0;
        cin>>n>>k;
        vector<ll>V,V2;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            if(a<=k)ans=1;
        }
        ll pre=-1;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            if(pre!=-1)
            {
                if(pre%a==0)
                {
                    if(V2.size()==0)
                    {
                        V2.PB(V[i-1]);
                    }
                    V2.PB(V[i]);
                }
                else
                {
                    if(V2.size())
                        ans=max(ans,sol(V2,k));
                    V2.clear();
                }
            }
            pre=a;
        }
        if(V2.size())
        {
            ans=max(ans,sol(V2,k));
        }
        cout<<ans<<"\n";
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}