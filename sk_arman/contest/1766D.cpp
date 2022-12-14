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
#define N 4000
bitset<N+10>pri;
vector<ll>prime;
void seive()
{
    prime.push_back(2);
    for(ll i=3; i<N; i+=2)
    {
        if(pri[i]==0)
        {
            prime.push_back(i);
            for(ll j=i*i; j<N; j+=2*i)
            {
                pri[j]=1;
            }
        }
    }
}
vector<ll>V;
void factorization(ll n)
{
    for(ll i:prime)
    {
        if(n%i==0)
        {
            V.PB(i);
            while(n%i==0)
                n/=i;
        }
        if(i*i>n)break;
    }
    if(n>1)
    {
        V.PB(n);
    }
}
int main()
{
    seive();
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll a,b;
        cin>>a>>b;
        ll gc=__gcd(a,b);
        if(gc>1)
        {
            cout<<"0\n";
        }
        else
        {
            ll dif=b-a;
            V.clear();
            factorization(dif);
            ll ck=10000000000;
            VST(V);
            for(ll i:V)
            {
            
                ll tm_a=a/i,tm_b=b/i;
                tm_a=((tm_a+1)*i);
                ll xx=tm_a-a;
                ll gc=__gcd(xx+a,xx+b);
                if(gc>1)
                {
                    ck=min(ck,xx);
                    
                }
            }
            if(ck>=10000000000)ck=-1;
            cout<<ck<<"\n";
        }
    }
    return 0;
}