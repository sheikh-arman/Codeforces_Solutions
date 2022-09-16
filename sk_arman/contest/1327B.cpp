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
ll color1[200000],color2[200000];
int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    sf1(tcase);
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,dat=-1,jam=-1;
        sf1(n);

        for(ll i=0; i<=n; i++)
        {
            color1[i]=0;
            color2[i]=0;
        }
        for(ll i=0; i<n; i++)
        {
            ll a,ck=0;
            sf1(a);
            for(ll j=0; j<a; j++)
            {
                ll x;
                sf1(x);
                if(color1[x]==0&&ck==0)
                {
                    color2[i]=1;
                    color1[x]=1;
                    ck=1;
                }
            }
        }
        for(ll i=0; i<n; i++)
        {
            if(color2[i]==0)
            {
                dat=i+1;
                break;
            }
        }
        for(ll i=1; i<=n; i++)
        {
            if(color1[i]==0)
            {
                jam=i;
                break;
            }
        }
        if(dat==-1)
        {
            printf("OPTIMAL\n");
        }
        else
        {
            printf("IMPROVE\n%lld %lld\n",dat,jam);
        }


    }
///*****************************  ALHAMDULILLAH  *****************************/
}