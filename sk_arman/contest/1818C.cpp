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
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll>V,V2,V3;
        ll pre=-1;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            if(V.size()<2)
            {
                V.PB(a);
                V2.PB(i);
                V3.PB(i);
            }
            else
            {
                ll siz=V.size();
                if(V[siz-2]>=V[siz-1]&&V[siz-1]>=a)
                {
                    V[siz-1]=a;
                    V2[siz-1]=i;
                }
                else
                {
                    V.PB(a);
                    V2.PB(i);
                    V3.PB(i);
                }
            }
        }
        for(ll i=0; i<q; i++)
        {
            ll l,r;
            cin>>l>>r;
            ll siz=(r-l)+1;
            if(siz<3)
            {
                cout<<siz<<"\n";
                continue;
            }
            l--;
            r--;
            ll pos1=lower_bound(V2.begin(),V2.end(),l)-V2.begin();
            ll pos2=upper_bound(V3.begin(),V3.end(),r)-V3.begin();
            pos2--;
            ll ans=(pos2-pos1)+1;
            ans=max(0LL,ans);
            if(pos1<n)
            {
                if(V2[pos1]>l)ans++;
            }
            ans=max(2LL,ans);
            cout<<ans<<"\n";
        }
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}