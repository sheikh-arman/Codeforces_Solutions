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
ll n,c,d;
ll ck(ll k)
{
    k+=1;
    ll mi=min(n,k);
    ll point=V[mi-1];
    ll sum=(d/k)*point;
    ll baki=d%k;
    mi=min(n,baki);
    if(mi-1>=0)sum+=V[mi-1];
    return (sum>=c);
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
        V.clear();
        cin>>n>>c>>d;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
        }
        VSTrev(V);
        for(ll i=1; i<n; i++)
        {
            V[i]+=V[i-1];
        }
        ll l=0,r=d+1;
        ll ans=-1;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            ll chk=ck(mid);
            if(chk)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(ans==-1)
        {
            cout<<"Impossible\n";
        }
        else if(ans>d)
        {
            cout<<"Infinity\n";
        }
        else
        {
            cout<<ans<<"\n";
        }
    }
    return 0;
}