/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
 */
#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<ll,ll>
#define sf1(n) scanf("%lld", &n)
#define sf2(n, m) scanf("%lld %lld",&n,&m)
#define sf3(n, m,k ) scanf("%lld %lld %lld",&n,&m,&k)
#define pfn(n) printf("%d\n",n)s
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define minus1 printf("-1\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define MP make_pair
#define ff first
#define ss second
#define tt third
#define mod 1000000007
#define T(n) printf("test %d\n",n)
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;


///policy begin
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        policy_set;
///policy end

vector<PR>V,V2,V3;

int main()
{
   // fast;
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    ll tcase=1;
    sf1(tcase);
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        V.clear();
        //policy_set s;
       // set<PR>::iterator it;
        ll n,ev=-1,od=-1,od2=-1,val=-1;
        sf1(n);
        for(ll i=0;i<n;i++){
            ll a;
            sf1(a);

            if(a%2==0){
                ev=i+1;
            }
            else if(a%2!=0){
                    V.PB({a,i+1});
            }
        }
        if(ev!=-1){
            printf("1\n%lld\n",ev);continue;
        }
        if(V.size()>1){
                ll cnt=0;
            printf("2\n");
            printf("%lld %lld\n",V[0].ss,V[1].ss);
        }
        else{
            minus1;
        }


    }
///*****************************  ALHAMDULILLAH  *****************************/
}