

/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
 */

#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<ll,ll>
#define sf1(n) scanf("%lld", &n)
#define sf2(n, m) scanf("%lld %lld",&n,&m)
#define sf3(n, m,k ) scanf("%lld %lld %lld",&n,&m,&k)
#define pfn(n) printf("%d\n",n)
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
/*
vector<int>nod[200100],V3;
int label[200100]={-1};
void dfs(int node){
    label[node]=1;
    for(int i=0;i<nod[node].size();i++){
        int x=nod[node][i];
        if(label[x]==-1){
            label[x]=label[node]+1;
            dfs(x);
        }
    }
}
*/
/*
vector<int>nod[200100],v3;
int label[200100]={-1};
void bfs(int node){
    memset(label,-1,sizeof(label));
    queue<int>q;
    q.push(node);
    while(!q.empty()){
        int x;
        x=q.front();
        q.pop();
        int siz=nod[x].size();
        for(int i=0;i<siz;i++){
            int tmp=nod[x][i];
            if(label[tmp]==-1){
                label[x]=label[node]+1;
                q.push(tmp);
            }
        }
    }
}

void graph_input(int edge){
    for(int i=0;i<edge;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        nod[a].push_back(b);
        nod[b].push_back(a);
    }
}*/
//
//bool cmp(ll a,ll b){
//    return a<b;
//}
//
vector<ll>V,V2,V3;
//emplace_back()
int main()
{
    ///freopen("1input.txt","r",stdin);
    ///freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    for(ll test=1; test<=tcase; test++)
    {

        ll n;
        sf1(n);
        for(ll j=0; j<n; j++)
        {
            ll ar[30]= {0};
            string s,s2;
            set<char>se;
            set<char>::iterator it;
            cin>>s;
            ll left=0,right=left+1,l=s.size();
            while(left<l&&right<l){
                if(s[left]==s[right]){
                    left+=2;
                    right=left+1;
                }
                else{
                    se.insert(s[left]);
                    left+=1;right+=1;
                }
            }
            if(left<l)
                se.insert(s[left]);;
            for(it=se.begin();it!=se.end();it++){
                cout<<*it;
            }

            cout<<endl;

            //printf("%lld\n");
        } // printf("%d\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}