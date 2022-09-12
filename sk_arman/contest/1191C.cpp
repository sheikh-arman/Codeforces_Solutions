#include<bits/stdc++.h>
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
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
using namespace std;
deque<ll>v,v2,v3;
vector<ll> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
    while(tcase--)
    {
        ll n,m,k,a,cnt=0,ans=0,cnt2=0,x=0;
        sffl(n,m);
        sfl(k);
        ll k1=k;
        for(int i=0; i<m; i++)
        {
            sfl(a);
            v.pb(a);
        }
        while(v.size()>0)
        {
            int ck=0;
            if(v[0]-cnt2>k)
                {
                    k=(((v[0]-cnt2)/k1)+((v[0]-cnt2)%k1!=0))*k1;
                }
            while(v[0]-cnt2<=k)
            {
                cnt++;
                ck=1;
                v.pop_front();
                if(v.size()==0)
                    break;
            }
            cnt2=cnt;
            if(ck==1)
            {
                ans++;
            }
            if(cnt==m)
            {
                printf("%lld\n",ans);
                return 0;
            }
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}