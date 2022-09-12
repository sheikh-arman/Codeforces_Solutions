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
class graph{
public:
    ll edg1,edg2;
};
vector<graph>v2,v3;
vector<ll> :: iterator it1,it2;
vector<int>v[200014];
int visit[200012];
int label[200012];
void dfs(int node){
    visit[node]=1;
    for(int i=0;i<v[node].size();i++){
        int x=v[node][i];
        if(visit[x]==0){
            label[x]=label[node]+1;
            visit[x]=1;
            dfs(x);
        }
    }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
   // sf(tcase);
    while(tcase--)
    {
        string s;
        ll node,edge,ans,a,ans2,tmp,ck=0,b;
        sffl(node,edge);
        for(int i=0;i<edge;i++){
                sffl(a,b);
                v[a].pb(b);
                v[b].pb(a);
                v2.push_back({a,b});
        }
        dfs(1);
        for(int i=0;i<edge;i++){
                int x1=v2[i].edg1;
                int x2=v2[i].edg2;
                //cout<<x1<<" "<<x2<<" "<<label[x1]<<" "<<label[x2]<<endl;
                //printf("%d %d %d %d\n",x1,x2,label[x1],label[x2]);
                if((label[x1]&1)==(label[x2]&1)){
                     //   printf("%d %d %d %d\n",x1,x2,label[x1],label[x2]);
                    printf("NO\n");return 0;
                }
                else{
                    if(label[x1]&1){
                        s+='0';
                    }
                    else{
                        s+='1';
                    }
                }
        }
        printf("YES\n");
        cout<<s<<endl;
       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}