#include<bits/stdc++.h>
#define nl printf("\n");
//#define N 200001
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
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]={0,0,1,1};
int dy[]={1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int color[10010];
int ckValid[10010];
int parent[100];
int dis[100];
int node,edge,cnt;
vector<int>nod[10010];
void dfs(int starting,int clr){
    if(clr!=v[starting-1]){
        cnt++;clr=v[starting-1];
    }
    int siz=nod[starting].size();
    for(int i=0;i<siz;i++){
        int x=nod[starting][i];
        dfs(x,clr);
    }
}
int main (){
    //fast;
    cin>>node;
    int n1,n2,a;
    for(int i=2;i<=node;i++){
        cin>>n1;
        nod[n1].pb(i);
    }
    for(int i=0;i<node;i++){
            sf(a);
            v.pb(a);
    }
    dfs(1,-1);
    cout<<cnt<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}