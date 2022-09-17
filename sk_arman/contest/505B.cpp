
/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm : Floyed Warshall
 */

#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<int,int>
#define sf1(n) scanf("%d", &n)
#define sf2(n, m) scanf("%d %d",&n,&m)
#define sf3(n, m,k ) scanf("%d %d %d",&n,&m,&k)
#define sfl1(n) scanf("%lld", &n)
#define sfl2(n, m) scanf("%lld %lld",&n,&m)
#define sfl3(n, m,k ) scanf("%lld %lld %lld",&n,&m,&k)
#define pfn(n) printf("%d\n",n)
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES printf("YES\n")
#define NO printf("NO\n")
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
#define mem(ar,a) memset(ar,a,sizeof(ar))
#define mod 1000000007
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
//#include<tuple>
typedef unsigned long long int ull;
using namespace std;
class PAIR
{
public:
    ll first;
    ll second;
    ll third;
};


/*
int rep[200010];
void initial(int n){
    for(int i=1;i<=n;i++){
        rep[i]=i;
    }
}
int find_representative(int node){
    if(rep[node]==node){
        return node;
    }
    else{
        rep[node]=find_representative(rep[node]);
        return rep[node];
    }
}
void joint_node(int nodex,int nodey){
    int u=find_representative(nodex);
    int v=find_representative(nodey);
    if(u!=v){
        rep[u]=v;
    }
}
*/
int mi;
bitset<102>bit[102][102];
bitset<102>ans;
vector<int>V,V2,V3;
vector<int>nod[110];
int label[200100]= {-1};
//void dfs(int node,int dis,bitset<102>an)
//{
//    //cout<<node<<" n\n";
//    if(dis==node)
//    {
//        ans|=an;
//        return;
//    }
//        label[node]=1;
//        bitset<102>an2;
//        for(int i=0; i<nod[node].size(); i++)
//        {
//            int x=nod[node][i];
//            an2=an&bit[node][x];
//            if(label[x]==-1)
//            {
//                label[x]=1;
//                if(dis!=x&&an2.any())
//                {
//                    dfs(x,dis,an2);
//                }
//                else if(dis==x)
//                {
//                    ans|=an2;
//                }
//            }
//        }
//    }
bool ck[102][102];
void graph_input(int edge)
{
    for(int i=0; i<edge; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
//        if(ck[a][b]==0&&ck[b][a]==0)
//        {
//            nod[a].push_back(b);
//            nod[b].push_back(a);
//            ck[a][b]=ck[b][a]=1;
//        }
        bit[a][b].set(c);
        bit[b][a].set(c);
    }
}

int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,e;
        sf2(n,e);
        //mem(label,-1);
        graph_input(e);
        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    bit[i][j]|=bit[i][k] & bit[k][j];
                }
            }
        }
        int q;
        sf1(q);
        for(int i=0; i<q; i++)
        {
            int a,b;
            sf2(a,b);
            printf("%d\n",bit[a][b].count());
        }




        // printf("%d\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}