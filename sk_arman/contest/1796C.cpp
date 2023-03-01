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
   // cout<<"hjg\n";
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll l,r;
        ll mod=998244353;
        cin>>l>>r;
        ll ans=0;
        ll tm_l=l;
        while(tm_l<=r){
            tm_l*=2;
            ans++;
        }
        ll res=0;
        if(ans>2){
            ll left=l,right=r;
            ll re=l;
            while(left<=right){
                ll mid=(left+right)/2;
                ll tm=mid;
                ll cnt=0;
                while(tm<=r){
                    tm*=2;
                    cnt++;
                }
                //cout<<mid<<" "<<cnt<<" x\n";
                if(cnt==ans){
                    re=mid;
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
            res=(re-l)+1;
            left=l;
            right=re;
            ll an=0;
            while(left<=right){
                ll mid=(left+right)/2;
                ll val=pow(2,ans-1)*mid;
                ll val2=pow(2,ans-2)*mid;
                ll baki=r-val;
                //cout<<mid<<" "<<baki<<" \n";
                if(baki>=val2){
                    an=(mid-l)+1;
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
            res+=(an*(ans-1));
            res%=mod;
        }
        else if(ans==2){
            ll cnt=2;
            while(1){
                ll left=l,right=r;
                ll re=-1;
                while(left<=right){
                    ll mid=(left+right)/2;
                    if(mid*cnt<=r){
                        re=mid;
                        left=mid+1;
                    }
                    else{
                        right=mid-1;
                    }
                }
                if(re==-1){
                    break;
                }
                cnt++;
                res+=(re-l)+1;
                //cout<<res<<" x\n";
                res%=mod;
            }
        }
        else{
            res=(r-l)+1;
        }
        cout<<ans<<" "<<res<<"\n";
    }
    return 0;
}