/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm : BFS
 */

#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<ll,ll>
#define sf1(n) scanf("%lld", &n)
#define sf2(n, m) scanf("%lld %lld",&n,&m)
#define sf3(n, m,k ) scanf("%lld %lld %lld",&n,&m,&k)
#define pfn(n) printf("%d\n",n)s
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define minus1 printf("-1\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define MP make_pair
#define ff first
#define ss second
#define tt third
#define mod 1000000007
#define T(n) printf("test %d\n",n)
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
//ll big_mod(ll base,ll power,ll Mod){if(power==0){return 1;}else if(power%2==1){ll p1=base%Mod;ll p2=(big_mod(base,power-1,Mod))%Mod;return (p1*p2)%Mod;}else if(power%2==0){ll p1=(big_mod(base,power/2,Mod))%mod;return (p1*p1)%Mod;}}

vector<ll>nod[200100];
bool color[200100];
ll cnt_node,cnt_edj=0;
map<PR,ll>MAP;
void bfs(ll node)
{
    queue<ll>q;
    q.push(node);
    color[node]=true;
    cnt_node=1;
    cnt_edj=0;
    while(!q.empty())
    {
        ll x;
        x=q.front();
        q.pop();
        ll siz=nod[x].size();
        for(ll i=0; i<siz; i++)
        {
            ll tmp=nod[x][i];
            if(MAP.count({x,tmp})==0&&MAP.count({tmp,x})==0){
                cnt_edj++;
                MAP[{x,tmp}]=1;
                MAP[{tmp,x}]=1;
               // printf("%lld t %lld\n",node,tmp);
            }
            if(color[tmp]==false)
            {
                color[tmp]=true;
                cnt_node++;
                q.push(tmp);
            }
        }
    }
}

void graph_input(ll edge)
{
    for(ll i=0; i<edge; i++)
    {
        ll a,b;
        scanf("%lld %lld",&a,&b);
        nod[a].push_back(b);
        nod[b].push_back(a);
    }
}
vector<ll>V,V2,V3;
int main()
{
    ///freopen("1input.txt","r",stdin);
    ///freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m,k;
        sf3(n,m,k);

        for(ll i=0; i<k; i++)
        {
            ll a;
            sf1(a);
            V.PB(a);
        }
        graph_input(m);
        ll ma=0,ans=0;
        for(ll i=0; i<k; i++)
        {
            if(color[V[i]]==false)
            {
                cnt_node=0;
                cnt_edj=0;
                bfs(V[i]);
                ma=max(ma,cnt_node);
                ll tm=(cnt_node*(cnt_node-1))/2;
                tm-=cnt_edj;
                ans+=tm;
                //printf("%lld %lld ttt\n",cnt_node,cnt_edj);
            }
        }
        //printf("%lld t\n",ans);
        for(ll i=1; i<=n; i++)
        {
            if(color[i]==false)
            {
                cnt_node=0;
                cnt_edj=0;
                bfs(i);
                ll tm=(cnt_node*(cnt_node-1))/2;
                tm-=cnt_edj;
                ll cn=cnt_node*ma;
                ans+=(cn+tm);
                ma+=cnt_node;
                //printf("%lld %lld %lld\n",i,ma,tm);
            }
        }
        printf("%lld\n",ans);
    }
////*****************************  ALHAMDULILLAH  *****************************
}