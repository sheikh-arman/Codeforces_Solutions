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
int dx[]={0,0,1,1};
int dy[]={1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int ckp(ll n){
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    ll n,ans=0,cnt=0,a;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld",&a);
        long long int b=sqrt(a);
        if(a!=1&&(a==4 || a%2!=0&&ckp(b))&&b*b==a){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
///*****************************  ALHAMDULILLAH  *****************************/
}