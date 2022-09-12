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
vector<ll>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    while(tcase--)
    {
        ll n,ans=0,cnt=0,a,k=0,m,sum=0,tmp=0;
        sffl(n,m);
        for(int i=0; i<n; i++)
        {
            sfl(a);
            sum+=a;v.pb(a);
            if(k<a)
                k=a;
        }
        vst(v);
        for(int i=n-1;i>0;i--){
            if(k>v[i-1]){
                ans+=(abs(k)-v[i-1]);k=v[i-1];
            }
            else {
                ans+=1;k--;
            }
        }
        if(k>0)
        ans+=k;
        else ans+=1;
        ans=sum-ans;
        printf("%lld\n",ans);
        v.clear();
    }
///*****************************  ALHAMDULILLAH  *****************************/
}