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
    ll r,x,y,x2,y2,n1,n2,ans;
    scanf("%lld%lld%lld%lld%lld",&r,&x,&y,&x2,&y2);
    n1=abs(x-x2)*abs(x-x2)+abs(y-y2)*abs(y-y2);
    n2=sqrt(n1);
    ans=n2/(2*r);
    if(n2%(2*r)!=0||n2*n2!=n1){
        ans+=1;
    }
    printf("%lld\n",ans);
///*****************************  ALHAMDULILLAH  *****************************/
}