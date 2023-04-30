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
bitset<10000001>color;
vector<ll>prime;
void seive()
{
    prime.PB(2);
    ll rng=10000010;
    for(ll i=3; i<=rng; i+=2)
    {
        if(color[i]==0)
        {
            prime.PB(i);
            for(ll j=i*i; j<=rng; j+=i+i)
            {
                color[j]=1;
            }
        }
    }
}
set<ll>st;
map<ll,ll>mp;
void fact(ll n)
{
    for(ll i:prime)
    {
        if(i*i>n)break;
        if(n%i==0)
        {
            st.insert(i);
            ll cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            mp[i]+=cnt;
        }
    }
    if(n>1){st.insert(n);mp[n]+=1;}
}
int main()
{
    seive();
//    for(ll i=0;i<10;i++){
//        cout<<prime[i]<<" x\n";
//    }
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        st.clear();
        mp.clear();
        ll n;
        cin>>n;
        for(ll i=1; i<=n; i++)
        {
            ll a;
            cin>>a;
            fact(a);
        }
        ll ans=0,cnt=0;
        for(ll i:st)
        {
            ans+=mp[i]/2;
            cnt+=mp[i]%2;
        }
        ans+=cnt/3;
        cout<<ans<<"\n";
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}