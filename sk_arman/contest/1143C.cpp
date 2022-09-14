#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define MP pair<ll,ll>
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
#define YES printf("YES\n")
#define NO printf("NO\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>V[100010],V3;
int total_child[100010],not_respect[100010],paren;
bool color[100010],V2[100010];
void dfs(int node){
    color[node]=false;
    int len=V[node].size();
    for(int i=0;i<len;i++){
        int x=V[node][i];
        if(color[x]==true){
            color[x]=false;
            total_child[x]=V[x].size()-1;
            //printf("%d %d\n",x,total_child[x]);
            if(V2[x]==1){
               not_respect[node]++;
               }
        dfs(x);
        }
    }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        memset(color,true,sizeof(color));
        int n;
        set<int>s;
        sf(n);
        for(int i=1;i<=n;i++){
            int a,b;
            sff(a,b);
            if(a!=-1){
            V[a].PB(i);
            V[i].PB(a);
            V2[i]=b;
            }
            else{
                paren=i;
            }
            if(b==1){
                V3.PB(i);
            }
        }
        dfs(paren);
        VST(V3);
        int len=V3.size(),ck=1;
         for (int i=0; i<len; i++){
            int temp=V3[i];
           // printf("%d %d %d\n",temp,total_child[temp],not_respect[temp]);
            if(total_child[temp]==not_respect[temp]||total_child[temp]==0){
                printf("%d\n",temp);ck=0;
            }
            }
            if(ck==1){
                printf("-1\n");
            }


       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}