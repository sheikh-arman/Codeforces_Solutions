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
int dx[]={0,0,1,1};
int dy[]={1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v[4010],v2,v3;
vector<int> :: iterator it1,it2;
int m[4010][4010];
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,ans=0,cnt=0,k,a,b,sum=9999999990,ck=0;
    sff(n,k);
    for(int i=0;i<k;i++){
        sff(a,b);
        v[b].pb(a);
        v[a].pb(b);
        m[a][b]=1;
        m[b][a]=1;
    }
    for(int i=1;i<=n;i++){
        int siz=v[i].size();
        if(siz>1){
            for(int j=0;j<siz-1;j++){
                for(int k=j+1;k<siz;k++){
                    if(m[v[i][j]][v[i][k]]==1){
                        ck=1;
                        int x=v[v[i][j]].size()-2;
                        int y=v[v[i][k]].size()-2;
                        sum=min(sum,x+y+siz-2);
                    }
                }
            }
        }
    }
    cout<<(ck?sum:-1)<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}