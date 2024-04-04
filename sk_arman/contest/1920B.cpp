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
ll su(ll l,ll r){
    l=max(l,0LL);
    if(r<0)return 0;
    ll n=V.size();
    ll ans=V[r];
    if(l>0)ans-=V[l-1];
    return ans;
}
int main()
{
   // freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,al,bo;
        cin>>n>>al>>bo;
        V.clear();
        ll sum=0;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.PB(a);
            sum+=a;
        }
        VST(V);
//for(ll i:V)cout<<i<<" ";cout<<"\n";
        for(ll i=1;i<n;i++)V[i]+=V[i-1];

        ll seg1=su((n-bo),n-1);
        ll seg2=sum-seg1;
        ll ans=seg2-seg1;
       // cout<<ans<<"\n";
        for(ll i=n-1;i>0&&al>0;i--){
            sum=V[i-1];
            n--;
            seg1=su((n-bo),n-1);
           // cout<<sum<<" "<<seg1<<" ";
            seg2=sum-seg1;
            ans=max(ans,seg2-seg1);
           // cout<<seg2<<" "<<seg2-seg1<<" i\n";
            al--;
        }
        if(al){
            ans=max(ans,0LL);
        }
        cout<<ans<<"\n";

    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}