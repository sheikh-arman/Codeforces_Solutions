/*
    Sk arman Hossain
    University of Barisal

    Problem :
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
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define minus1 printf("-1\n");
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
ll chache[300010][6][3],k,z,n;
vector<ll>V;
ll dp(ll i,ll cnt,ll ck)
{
    ll tm=2*(z-cnt);
    tm=i+tm;
    if(tm>=k||i>=n)
    {
        return 0;
    }
    if(chache[i][cnt][ck]!=-1)
    {
        return chache[i][cnt][ck];
    }
    ll ans=0;
    if(ck==0&&i>0&&cnt>0)
    {
        ans=V[i-1]+dp(i-1,cnt-1,1);
    }
    if(i<n)
        ans=max(ans,V[i+1]+dp(i+1,cnt,0));
    return chache[i][cnt][ck]=ans;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        V.clear();
        cin>>n>>k>>z;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
        }
        for(ll i=0; i<=n; i++)
        {
            for(ll j=0; j<=z; j++)
            {
                for(ll x=0; x<2; x++)
                {
                    chache[i][j][x]=-1;
                }
            }
        }
        ll ans=dp(0,z,0);
        ans+=V[0];
        cout<<ans<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
}