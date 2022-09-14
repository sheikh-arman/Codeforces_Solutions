/*
    Sk arman Hossain
    University of Barisal

    Problem name :510B
    Algorithm :bfs
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
vector<ll>V,V2,V3;
vector<ll> :: iterator it1,it2;
string s[55];
int label[55][55],n,m;
void CLEAR()
{
    V.clear();
    V2.clear();
    V3.clear();
}
bool dfs(int x,int y,char ch){
        for(int i=0;i<4;i++){
            int tmpx=x+dx[i];
            int tmpy=y+dy[i];
            if(tmpx>=0&&tmpx<n&&tmpy>=0&&tmpy<m){//printf("%d %d %c %c\n",tmpx,tmpy,ch,s[tmpx][tmpy]);
                if(label[tmpx][tmpy]<0&&s[tmpx][tmpy]==ch){
                    label[tmpx][tmpy]=label[x][y]+1;
                  //  printf("%d %d %c %c\n",tmpx,tmpy,ch,s[tmpx][tmpy]);
                  dfs(tmpx,tmpy,ch);
                }
                if(label[tmpx][tmpy]!=-1&&s[tmpx][tmpy]==ch){
                       if(abs(label[tmpx][tmpy]-label[x][y])>1){
                        return 1;
                       }
                }
            }
        }
    return 0;
}
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {

        //int n,m;
        sff(n,m);
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                memset(label,-1,sizeof(label));
                label[i][j]=0;
                    int ck=dfs(i,j,s[i][j]);
                    if(ck==1){
                        printf("Yes\n");return 0;
                    }

            }
        }
         printf("No\n");
    }
///*****************************  ALHAMDULILLAH  *****************************/
}