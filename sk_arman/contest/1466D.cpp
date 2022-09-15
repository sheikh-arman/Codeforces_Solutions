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
ll ar[200010];
vector<ll>edj[200010];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    // freopen("1input.txt","r",stdin);
//    freopen("1output.txt","w",stdout);
    ll tcase=100;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,sum=0;
        cin>>n;
        for(ll i=1; i<=n; i++)
        {
            ll a;
            cin>>a;
            ar[i]=a;
            edj[i].clear();
            sum+=a;
        }
        for(ll i=0; i<n-1; i++)
        {
            ll a,b;
            cin>>a>>b;
            edj[a].PB(b);
            edj[b].PB(a);
        }
        vector<ll>V;
        for(ll i=0; i<n; i++)
        {
            ll siz=edj[i+1].size();
            if(siz>1)
            {
                for(ll j=1; j<siz; j++)
                    V.PB(ar[i+1]);
            }
        }
        VST(V);
        reverse(V.begin(),V.end());
        cout<<sum<<" ";
        ll siz=V.size();
        for(ll i=0; i<siz; i++)
        {
            sum+=V[i];
            V[i]=sum;
        }
        for(ll i=siz; i<n-2; i++)
        {
            V.PB(sum);
        }
        for(ll i=0; i<n-2; i++)
        {
            cout<<V[i]<<" ";
        }
        cout<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
}