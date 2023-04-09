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
ll n,m;
ll ck(ll x1,ll y1){
    if((x1==1&&y1==1)||(x1==1&&y1==m)||(x1==n&&y1==1)||(x1==n&&y1==m)){
        return 1;
    }
    else return 0;
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
        
        cin>>n>>m;
        ll ans=4;
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(ck(x1,y1)||ck(x2,y2)){
            ans=2;
        }
        else if(x1==1||x2==1||y1==1||y2==1||x1==n||y1==m||x2==n||y2==m){
            ans=3;
        }
        cout<<ans<<"\n";
    }
    return 0;
 ///*****************************  ALHAMDULILLAH  *****************************/
}