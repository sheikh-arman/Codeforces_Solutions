#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define prn(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,r,d,t,m,cnt=0,x,y,z,x1,y1,k;
    double ans=0;
    sff(n,k);
    sff(x,y);
    for(int i=0;i<n-1;i++){
        sff(x1,y1);
        ans+=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
        x=x1;y=y1;
    }
    ans=ans/50.0;
    ans*=k;
    printf("%.9lf\n",ans);
///*****************************  ALHAMDULILLAH  *****************************/
}