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
    // freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        cin>>n>>m;
        deque<ll>V1,V2,ans;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V1.PB(a);
        }
        for(ll i=0; i<m; i++)
        {
            ll a;
            cin>>a;
            V2.PB(a);
        }
        VST(V2);
        reverse(V2.begin(),V2.end());
        while(V2.size()&&V1.size())
        {
            if(V1[0]<=V2[0])
            {
                ans.PB(V2[0]);
                V2.pop_front();
            }
            else
            {
                ans.PB(V1[0]);
                V1.pop_front();
            }
        }
        while(V2.size())
        {
            ans.PB(V2[0]);
            V2.pop_front();
        }
        while(V1.size())
        {
            ans.PB(V1[0]);
            V1.pop_front();
        }
        for(ll i:ans)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}