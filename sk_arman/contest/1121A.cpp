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
vector<int>v,v2[1000],v3;

int main()
{
    ///freopen("input.txt","r",stdin);
    int t=1;
    //scanf("%d",&t);
    while(t--){
           int n,m,k,a,cnt=0;
           scanf("%d%d%d",&n,&m,&k);
           for(int i=0;i<n;i++){
             cin>>a;
             v.push_back(a);
           }
           for(int i=0;i<n;i++){
             cin>>a;
             v3.push_back(a);
             v2[a].push_back(v[i]);
           }
           for(int i=0;i<k;i++){
            cin>>a;
            int tmp=v3[a-1];
           // cout<<tmp<<endl;
            sort(v2[tmp].begin(),v2[tmp].end());
            reverse(v2[tmp].begin(),v2[tmp].end());
            if(v2[tmp][0]>v[a-1]){
                cnt++;

            }
           }
           cout<<cnt<<endl;
    }

///*****************************  ALHAMDULILLAH  *****************************/
}