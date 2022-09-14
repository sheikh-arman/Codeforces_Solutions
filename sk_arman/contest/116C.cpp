
/*
    Sk arman Hossain
    University of Barisal

    Problem name :116C
    Algorithm :BFS
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
vector<int>V,V2[20000],V3;
vector<ll> :: iterator it1,it2;
void CLEAR(){
    V.clear();
   // V2.clear();
}
int label[20010];
int bfs(int start){
    int ma=0;
    label[start]=0;
    queue<int>q;
    q.push(start);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        int l=V2[x].size();
        for(int i=0;i<l;i++){
            int tmp=V2[x][i];
            if(label[tmp]<0){
                label[tmp]=label[x]+1;
                ma=max(ma,label[tmp]);
                q.push(tmp);
            }
        }
    }
    return ma;
}
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        int n;
        memset(label,-1,sizeof(label));
        sf(n);
        for(int i=1;i<=n;i++){
            int a;
            sf(a);
            if(a==-1)
                V.PB(i);
            else
                V2[a].PB(i);
        }
        int l=V.size(),ma=0,x;
        for(int i=0;i<l;i++){
            if(label[V[i]]<0){
                x=bfs(V[i]);
                //printf("%d\n",x);
                ma=max(x,ma);
            }
        }

        printf("%d\n",ma+1);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}