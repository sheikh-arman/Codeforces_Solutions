/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
#define nl cout<<"\n";
#define PR pair<ll,ll>
#define sf1(n) cin>>n
#define sf2(n, m) cin>>n>>m
#define sf3(n, m,k ) cin>>n>>m>>k
#define pfn(n) printf("%d\n",n)s
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define minus1 printf("-1\n");
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define VSTr(v) sort(v.begin(),v.end(),greater<long long int>())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
#define MP make_pair
#define ff first
#define ss second
#define tt third
#define mod 1000000007
#define T(n) printf("test %d\n",n)
# define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define N 200001
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
int main()
{
    fast;
//    freopen("1input.txt","r",stdin);
//    freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<PR>V;
        ll A,B,n,sum_a=0,sum_x=0;
        cin>>A>>B>>n;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            sum_a+=a;
            V.PB({a,0});
        }
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            sum_x+=a;
            V[i].ss=a;
        }
        VST(V);
        for(ll i=0;i<n-1;i++){
            ll x=V[i].ss/A+(V[i].ss%A!=0);
            B-=(x*V[i].ff);
        }
        ll x=V[n-1].ss/A+(V[n-1].ss%A!=0);
        x-=1;
        B-=(x*V[n-1].ff);
        if(B>0){
            YES;
        }
        else{
            NO;
        }




    }
///*****************************  ALHAMDULILLAH  *****************************/
}