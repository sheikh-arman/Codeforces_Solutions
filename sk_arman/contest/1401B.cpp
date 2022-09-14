/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Solution :
 */
#include<bits/stdc++.h>
#define nl cout<<"\n";
#define N 200001
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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus1 printf("-1\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define DST(v) sort(v.begin(),v.end(),greater<ll>())
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
vector<ll>V,V2,V3;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//    /freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,ar[5],ar2[5];
        for(ll i=0;i<3;i++){
            cin>>ar[i];
        }
        for(ll i=0;i<3;i++){
            cin>>ar2[i];
        }
        ll ans=2*min(ar[2],ar2[1]);

        ll tm=min(ar[2],ar2[1]);
        ar[2]-=tm;
        ar2[1]-=tm;

        tm=min(ar[0],ar2[2]);
        ar[0]-=tm;
        ar2[2]-=tm;

        tm=min(ar[2],ar2[2]);
        ar[2]-=tm;
        ar2[2]-=tm;

        tm=min(ar[1],ar2[1]);
        ar[1]-=tm;
        ar2[1]-=tm;

        tm=min(ar[1],ar2[0]);
        ar[1]-=tm;
        ar2[0]-=tm;

        tm=min(ar[1],ar2[2]);
        ans-=2*tm;
        cout<<ans<<"\n";




    }
///*****************************  ALHAMDULILLAH  *****************************/
}