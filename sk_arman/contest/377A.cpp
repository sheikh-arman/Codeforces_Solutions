#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define mkp(i,j) make_pair(i,j)
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
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
map<mp,int>m;
int ck[510][510];
int cnt1=0;
char s[510][510];
void dfs(int x,int y,int limit){
        m[mkp(x,y)]++;
        if(limit==cnt1)return;
        for(int i=0;i<4;i++){
            if(m[mkp(x+dx[i],y+dy[i])]==0&&s[x+dx[i]][y+dy[i]]=='.'&&ck[x+dx[i]][y+dy[i]]==0&&limit!=cnt1){
                ck[x+dx[i]][y+dy[i]]=1;m[mkp(x+dx[i],y+dy[i])]++;cnt1++;

                dfs(x+dx[i],y+dy[i],limit);
            }
        }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,startx,starty,k,cnt=0,m1;
    sff(n,m1);
    sf(k);
    for(int i=0;i<n;i++){
        for(int j=0;j<m1;j++){
            cin>>s[i][j];
            if(s[i][j]=='.'){
                startx=i;starty=j;
                cnt++;
            }
        }
    }

    int lim=cnt-k-1;
    ck[startx][starty]=1;
    dfs(startx,starty,lim);
    for(int i=0;i<n;i++){
        for(int j=0;j<m1;j++){
            if(s[i][j]=='.'&&ck[i][j]==0){
                printf("X");
            }
            else
                printf("%c",s[i][j]);
        }
        printf("\n");
    }
///*****************************  ALHAMDULILLAH  *****************************/
}