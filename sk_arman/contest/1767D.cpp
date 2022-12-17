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
string s;
ll n,num;
ll ck(ll val)
{
    ll l=val-1,h=num-val;
    ll cur=num;
    ll one=0,zero=0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='0')zero++;
        else one++;
    }
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='0')zero--;
        else one--;
        if(s[i]=='0')
        {
            if(pow(2,zero+1)>h+1)
            {
                return 0;
            }
            cur/=2;
            ll sum=(h+1)/2;
            h-=sum;
            ll baki=cur-sum;
            ll need=pow(2,zero);
            ll extra=(h+1)-need;
            if(extra<0)
            {
                return 0;
            }
            ll mi=min(baki,extra);
            h-=mi;
            l=cur-(1+h);
        }
        else
        {
            if(pow(2,one+1)>l+1)
            {
                return 0;
            }
            cur/=2;
            ll sum=(l+1)/2;
            l-=sum;

            ll baki=cur-sum;
            ll need=pow(2,one);
            ll extra=(l+1)-need;
            if(extra<0)
            {
                return 0;
            }
            ll mi=min(baki,extra);
            l-=mi;
            h=cur-(1+l);

        }
    }
    return 1;
}
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        cin>>n;

        cin>>s;
        ll l,r;
        num=pow(2,n);
        for(ll i=1; i<=num; i++)
        {
            if(ck(i)){
                l=i;break;
            }
        }
        for(ll i=num;i>=1;i--){
            if(ck(i)){
                r=i;break;
            }
        }
        for(ll i=l;i<=r;i++){
            cout<<i<<" ";
        }
        cout<<"\n";



    }
    return 0;
}