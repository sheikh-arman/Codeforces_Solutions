#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define mkp(i,j) make_pair(i,j)
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
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v[1100],v2,v3;
vector<int> :: iterator it1,it2;
int color[1100];
void dfs(int n){
    color[n]++;
    int siz=v[n].size();
    for(int i=0;i<siz;i++){
            int x=v[n][i];
        if(color[n]!=2)
            dfs(x);
    }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n;
    sf(n);
    for(int i=1;i<=n;i++){
        int a;sf(a);v[i].pb(a);
    }
    for(int i=1;i<=n;i++){
           dfs(i);
           for(int i=1;i<=n;i++){
            if(color[i]==2){
                v2.pb(i);break;
            }
           }
           memset(color,0,sizeof(color));
    }
    for(int i=0;i<n;i++){
            printf("%d ",v2[i]);

    }


///*****************************  ALHAMDULILLAH  *****************************/
}