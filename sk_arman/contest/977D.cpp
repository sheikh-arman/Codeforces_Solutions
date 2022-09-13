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
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
map<ll,ll>v,m,color;
vector<ll>v2,v3;
int cnt=0;
void dfs(ll n){
    if(v[n]){
        cnt++;
        v3.pb(v[n]);
        dfs(v[n]);
    }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    ll a,n;
    sfl(n);
    for(int i=0;i<n;i++){
            sfl(a);m[a]=1;v2.pb(a);
    }
    for(int i=0;i<n;i++){
            if(v2[i]%3==0&&m[v2[i]/3]==1){
                v[v2[i]]=v2[i]/3;
            }
            if(m[v2[i]*2]==1){
                v[v2[i]]=v2[i]*2;
            }
    }
    for(int i=0;i<n;i++){
            cnt=1;
            v3.pb(v2[i]);
            dfs(v2[i]);
            if(cnt==n){
            for(int j=0;j<n;j++){
                printf("%lld ",v3[j]);
            }
            printf("\n");
            return 0;
        }
        v3.clear();
    }
///*****************************  ALHAMDULILLAH  *****************************/
}