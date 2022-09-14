
#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define pfn(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2;
int main()
{
    ll ans=0,ans2=0,md=0,n,sq;
    int k;
    sfl(n);
    sf(k);
    sq=sqrt(n)+1;
    for(ll i=1;i<=sq;i++){
        if(n%i==0&&n/i>=i){
            v.pb(i);
            if(n/i!=i)
                v2.pb(n/i);
        }
    }
    vst(v2);
    int l=v2.size();
    for(int i=0;i<l;i++)
        v.pb(v2[i]);
    md=v.size();
    if(md>=k)
            printf("%I64d\n",v[k-1]);
    else
        printf("-1\n");


///*****************************  ALHAMDULILLAH  *****************************/
}