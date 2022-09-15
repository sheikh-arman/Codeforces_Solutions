
/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
 */

#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<int,int>
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
#define MP make_pair
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<PR>cost;
vector<int>frind[100010];
bool visit[100010];
void dfs(int node){
    visit[node]=true;
        int l=frind[node].size();
        for(int i=0;i<l;i++){
            if(visit[frind[node][i]]==false){
                visit[frind[node][i]]=true;
                dfs(frind[node][i]);
            }
        }
}

int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        memset(visit,false,sizeof(false));
        int n,m;
        ll ans=0;
        sff(n,m);
        for(int i=0; i<n; i++)
        {
            int a;
            sf(a);
            cost.PB({a,i+1});
        }
        for(int i=0;i<m;i++){
            int a,b;
            sff(a,b);
            frind[a].PB(b);
            frind[b].PB(a);
        }
        VST(cost);
        for(int i=0;i<n;i++){
            if(visit[cost[i].second]==false){
                ans+=cost[i].first;
                dfs(cost[i].second);
            }
        }
        printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}