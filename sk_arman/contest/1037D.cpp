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
vector<int>v[2000010],v2,v3;
vector<int> :: iterator it1,it2;
int visit[2000010];
int parent[2000010];
int ck[2000010];
queue<int>q;
void dfs(int n){
    visit[n]=1;
    int siz=v[n].size();
    for(int i=0;i<siz;i++){
        int x=v[n][i];
        if(visit[x]!=1){
            parent[x]=n;visit[x]=1;
            dfs(x);

        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //while(1){
    int n,ans=0,cnt=0,a,b,x,par;
    sf(n);
    for(int i=1;i<n;i++){
        sff(a,b);
        v[a].pb(b);
        v[b].pb(a);
    }
    dfs(1);
    sf(x);
    if(x!=1){cout<<"No"<<endl;return 0;
    }
    par=1;
    q.push(1);
    for(int i=1;i<n;i++){
        sf(x);
        if(parent[x]!=par){
            q.pop();
        }
        while(v[q.front()].size()==1&&q.front()!=1){
            q.pop();
        }
        if(parent[x]!=q.front()){
            cout<<"No"<<endl;return 0;
        }
        q.push(x);
        par=parent[x];
    }
    cout<<"Yes"<<endl;return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}
/*
special test
7
1 5
1 2
2 3
2 4
3 7
3 6
1 5 2 4 3 7 6
result: Yes
*/