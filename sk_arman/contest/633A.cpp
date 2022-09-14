

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
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2;
int main()
{
    int a,b,c,mi,ma;
    cin>>a>>b>>c;
    mi=min(a,b);
    ma=max(a,b);
    if(c%a==0||c%b==0||c%a+b==0){
        printf("Yes\n");return 0;
    }
    while(c>mi){
        c-=mi;
        if(c%ma==0||c%a+b==0){
            printf("Yes\n");return 0;
        }
    }
    printf("No\n");return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}