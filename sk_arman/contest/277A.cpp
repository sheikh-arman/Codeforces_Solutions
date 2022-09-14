
/*
    Sk arman Hossain
    University of Barisal

    Problem name :277A
    Algorithm :dfs
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
vector<int>V[110],edge[110];
bool v[110][110];
bool color[110];
void dfs(int start){
    color[start]=true;
    int l=edge[start].size();
    for(int i=0;i<l;i++){
        if(color[edge[start][i]]==false){
            color[edge[start][i]]=true;
            dfs(edge[start][i]);
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
        memset(color,false,sizeof(color));
        memset(v,false,sizeof(v));
        int n,m,ans=0,ck=0;
        sff(n,m);
        for(int i=1;i<=n;i++){
            int k;sf(k);
            if(k>0){
                    ck=1;
            }
            for(int j=0;j<k;j++){
                int a;sf(a);
                v[i][a]=true;
                V[i].PB(a);
            }
        }
        for(int i=1;i<=n;i++){
                int l=V[i].size();
            for(int j=i+1;j<=n;j++){

                for(int x=0;x<l;x++){
                    if(v[j][V[i][x]]==true){
                        edge[i].PB(j);
                        edge[j].PB(i);
                    }
                }
            }
        }

        for(int i=1;i<=n;i++){
                if(color[i]==false){
                    ans++;
                    dfs(i);
                }
        }

        printf("%d\n",ans-ck);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}