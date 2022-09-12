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
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<pair<int,int> >v,v2,v3;
vector<int> :: iterator it1,it2;
bool color[52][52],ck=1;

void bfs(int s,int d)
{
    queue<pair<int,int> >q;
    q.push({s,d});
    while(!q.empty())
    {
        pair<int,int>x;
        x=q.front();
        q.pop();
        color[x.first][x.second]=1;
        for(int i=0; i<4; i++)
        {
            if(x.first+dx[i]>0&&x.second+dy[i]>0){
                if(color[x.first+dx[i]][x.second+dy[i]]==0)
                {
                    //printf("%d %d\n",x.first+dx[i],x.second+dy[i]);
                    color[x.first+dx[i]][x.second+dy[i]]=1;
                    q.push({x.first+dx[i],x.second+dy[i]});
                    if(ck)
                    {
                        v.push_back({x.first+dx[i],x.second+dy[i]});
                    }
                    else
                    {
                        v2.push_back({x.first+dx[i],x.second+dy[i]});
                    }
                }
            }
        }
    }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    while(tcase--)
    {
        memset(color,1,sizeof(color));
        int n,a,b,x1,y1,x2,y2;
        sf(n);
        sff(x1,y1);
        sff(x2,y2);
        string s;
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            for(int j=1; j<=n; j++)
            {
                color[i][j]=s[j-1]-48;
                //cout<<color[i][j]<<" ";
            }
        }
        //cout<<222;
        v.push_back({x1,y1});
        bfs(x1,y1);
        //cout<<33;
        ck=0;
        if(color[x2][y2]==1)
        {
            printf("0\n");
        }
        else
        {
            v2.push_back({x2,y2});
            bfs(x2,y2);
            // cout<<44;
            int ans=INT_MAX;
            int l1=v.size();
            int l2=v2.size();
           // printf("%d %d\n",l1,l2);
            for(int i=0; i<l1; i++)
            {
                for(int j=0; j<l2; j++)
                {
                    int tmp=((v[i].first-v2[j].first)*(v[i].first-v2[j].first))+((v[i].second-v2[j].second)*(v[i].second-v2[j].second));
                    ans=min(ans,tmp);
                    // printf("%d %d\n",tmp,ans);
                }
            }
            printf("%d\n",ans);
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}