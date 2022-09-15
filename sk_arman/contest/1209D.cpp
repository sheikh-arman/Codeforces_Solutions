
/*
    Sk arman Hossain
    University of Barisal

    Problem name :  1209D. Cow and Snacks
    Algorithm : DFS
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
#define  ff first
#define ss second
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
bool color[200010];
vector<int>edge[200010];
int cnt;
void dfs(int node)
{
    cnt++;
    color[node]=true;
    int l=edge[node].size();
    for(int i=0; i<l; i++)
    {
        int tmp=edge[node][i];
        if(color[tmp]==false)
        {
            color[tmp]=true;
            dfs(tmp);
        }
    }
}
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,e,ans=0;
        sf(n);
        sf(e);
        for(int i=1; i<=n; i++)
        {
            color[i]=false;
        }
        for(int i=0; i<e; i++)
        {
            int a,b;
            sff(a,b);
            edge[a].PB(b);
            edge[b].PB(a);
        }
        for(int i=1; i<=n; i++)
        {
            cnt=0;
            if(color[i]==false)
            {
                dfs(i);
                ans+=(cnt-1);
            }
        }
        printf("%d\n",e-ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}