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
ll ar[5000][5000];
int main()
{
    ll cnt=1;
    for(ll i=1;;i++){
        ll sum=0;
        for(ll j=1;j<=i;j++){
            sum+=(cnt*cnt);
            ar[i][j]=sum;
            cnt++;
        }
        if(cnt>1000000)break;
    }
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    //fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        ll l,r,ind;
        ll sum=0;
        for(ll i=1;;i++){
            sum+=i;
            if(sum>=n){
                ind=i;break;
            }
        }
        l=n-((ind*(ind-1))/2);
        r=l;
        ll ans=0;
        //cout<<ind<<" "<<l<<" x\n";
        while(ind>=1){
            l=max(l,1LL);
            r=min(r,ind);
            ans+=ar[ind][r]-ar[ind][l-1];
            l--;
            ind--;
        }
        cout<<ans<<"\n";
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}