/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
#define PR pair<ll,ll>
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define minus1 printf("-1\n");
#define PB push_back
#define PI 3.1415926536
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define T(n) printf("test %d\n",n)
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
using namespace std;
vector<ll>edj[100010];
bitset<100010>color1,color2,color3;
ll long_dis,long_dis_node;
ll dis[100010];
void dfs(ll node){
    color1[node]=true;
    for(ll i:edj[node]){
        if(color1[i]==false){
            color1[i]=true;
            dis[i]=dis[node]+1;
            if(dis[i]>long_dis){
                long_dis=dis[i];
                long_dis_node=i;
            }
            dfs(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll tcase=1;
    cin>>tcase;
    ///tetssssst
    for(ll test=1; test<=tcase; test++)
    {
        long_dis=0;
        ll n,a,b,wa,wb;
        ll zz,cc,ff;
        cin>>n>>a>>b>>wa>>wb;
        for(ll i=0;i<=n;i++){
            color1[i]=false;
            edj[i].clear();
            dis[i]=0;
        }
        for(ll i=0;i<n-1;i++){
            ll u,v;
            cin>>u>>v;
            edj[u].PB(v);
            edj[v].PB(u);
        }
        dfs(a);
        ll disb=dis[b];
        for(ll i=0;i<=n;i++){
            color1[i]=false;
            dis[i]=0;
        }
        long_dis=0;
        dfs(long_dis_node);
        wb=min(long_dis,wb);
        if((wa*2)>=wb||(disb<=wa)){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}