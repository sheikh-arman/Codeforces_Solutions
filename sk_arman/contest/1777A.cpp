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
ll ck(ll a,ll b){
    if(a>b)return 100000000;
    ll tm_a=a,tm_b=b;
    ll ans=0;
    ll lg=log2(b);
    ll cnt=1;
    while(b){
        if(b%2==0&&a%2==1){
            ans+=cnt;
        }
        cnt*=2;
        b/=2;
        a/=2;
    }
    tm_a+=ans;
    if(tm_a!=tm_b){
        if((tm_a|tm_b)==tm_b){
            ans++;
        }
        else{
            ans=10000000000;
        }
    }
    //cout<<tm_a<<" "<<tm_b<<" "<<ans<<"\n";
    return ans;
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
        ll n;
        cin>>n;
        vector<ll>V;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.PB(a);
        }
        ll ans=0;
        stack<ll>stk;
        for(ll i=0;i<n;i++){
            if(stk.empty()){
                stk.push(V[i]%2);
            }
            else{
                if(stk.top()==V[i]%2){
                    ans++;
                }
                else{
                    stk.push(V[i]%2);
                }
            }
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}