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
ll rep[200010];
ll Find(ll node){
    return (rep[node]==node?node:rep[node]=Find(rep[node]));
}
ll ar[200010];
ll sum(ll n){
    ll ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
vector<ll>V[200010];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,q;
        cin>>n>>q;
        rep[n+1]=n+1;
        for(ll i=1;i<=n;i++){
            V[i].clear();
            ll val;
            cin>>val;
            rep[i]=i;
            ar[i]=0;
            while(val>9){
                V[i].PB(val);
                val=sum(val);
            }
            V[i].PB(val);
        }
        for(ll i=0;i<q;i++){
            ll type;
            cin>>type;
            if(type==1){
                ll l,r;
                cin>>l>>r;
                while(l<=r){
                    //cout<<" x\n";
                    l=Find(l);
                    if(l>r)break;
                    ll val=V[l][ar[l]];
                    if(val>9){
                        ar[l]++;
                        l++;
                    }
                    else{
                        rep[l]=Find(l+1);
                        l=Find(l);
                    }
                }
            }
            else{
                ll l;
                cin>>l;
                cout<<V[l][ar[l]]<<"\n";
            }
        }
    }
    return 0;
}