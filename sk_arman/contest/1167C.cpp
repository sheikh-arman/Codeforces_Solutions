
/*
    Sk arman Hossain
    University of Barisal

    Problem name :Disjoint set union(dsu)
    Algorithm :Disjoint set union(dsu)
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
vector<int>V;
deque<int>V2;
int rep[500010];
int cnt[500010];
void initial(int n)
{
    for(int i=1; i<=n; i++)
    {
        rep[i]=i;
    }
}
int find_representative(int node)
{
    if(rep[node]==node)
    {
        return node;
    }
    else
    {
        rep[node]=find_representative(rep[node]);
        return rep[node];
    }
}
void joint_node(int nodex,int nodey)
{
    int u=find_representative(nodex);
    int v=find_representative(nodey);
    if(u!=v)
    {
        rep[u]=v;
    }
}
int main()
{
    //freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,e,ans=0,m;
        sff(n,m);
        initial(n);
        for(int i=0; i<m; i++)
        {
            int a;
            sf(a);
            for(int j=0;j<a;j++){
                int k;
                sf(k);
                V.PB(k);
            }
            for(int j=1;j<a;j++){
                joint_node(V[j-1],V[j]);
            }
            V.clear();
        }
        for(int i=1;i<=n;i++){
                rep[i]=find_representative(i);
               cnt[rep[i]]++;
            //printf("%d %d\n",l,cnt[l]);

        }
        for(int i=1; i<=n; i++)
        {
            printf("%d ",cnt[rep[i]]);
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}