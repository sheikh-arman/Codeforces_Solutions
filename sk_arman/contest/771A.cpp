
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
vector<int>V,edge[150010];
map<PR,bool>m;
bool color[150010];
int n,e;
int bfs(int node)
{
    queue<int>q;
    q.push(node);
    color[node]=true;
    while(!q.empty())
    {
        int tmp=q.front();
        q.pop();
        int l=edge[tmp].size();
        for(int i=0; i<l; i++)
        {
            int x=edge[tmp][i];
            if(color[x]==false)
            {
                for(int j=0; j<l; j++)
                {
                    if(x!=edge[tmp][j])
                    {
                        PR tm;
                        tm= {x,edge[tmp][j]};
                        if(m[tm]!=1)
                        {
                            return -1;
                        }
                    }
                }
                color[x]=true;
                q.push(x);
            }

        }
    }
    return 1;
}
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        memset(color,false,sizeof(color));
        sff(n,e);
        for(int i=0; i<e; i++)
        {
            int a,b;
            sff(a,b);
            edge[a].PB(b);
            edge[b].PB(a);
            m[{a,b}]=1;
            m[{b,a}]=1;
        }
        for(int i=1;i<=n;i++){
            if(color[i]==false){
                    int ck=bfs(i);
                    if(ck==-1){
                        printf("NO\n");return 0;
                    }
            }
        }
        YES;


        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}