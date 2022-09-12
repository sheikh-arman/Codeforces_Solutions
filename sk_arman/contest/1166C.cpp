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
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
deque<ll>v,v2,v3;
deque<ll> :: iterator lo;
int main()
{
    ll tcase=1;
    ///sf(tcase);
    while(tcase--)
    {
        ll n,ans=0,a,ans2,tmp;
        sfl(n);
        for(int i=0;i<n;i++){
            sfl(a);
            a=abs(a);
            v.pb(a);
        }
        vst(v);
        for(int i=0;i<n-1;i++){
                lo=upper_bound(v.begin(),v.end(),v[0]*2);
            ll low=lo-v.begin()-1;
                ans+=low;
                v.pop_front();
        }

        printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}