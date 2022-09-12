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
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2,v3;
vector<ll> :: iterator it1,it2;
int ar[60];
int main()
{
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
    //sf(tcase);
    while(tcase--)
    {
        int n,ans=0,h,m,b,a,ans2,tmp;
        sf(n);sff(h,m);
        for(int i=1;i<=n;i++)
            ar[i]=h;
        for(int i=0;i<m;i++){
            sff(a,b);sf(h);
            for(int i=a;i<=b;i++){
                if(ar[i]>h)
                    ar[i]=h;
            }
        }
        for(int i=1;i<=n;i++){
            ans+=(ar[i]*ar[i]);
           // printf("%d\n",ar[i]);
        }

        printf("%d\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}