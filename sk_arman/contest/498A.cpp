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
    ll n,r,d,t,m,cnt=0,x,y,z,x1,y1,k,a,b,c,x2,y2;
    sffl(x1,y1);
    sffl(x2,y2);
    sfl(n);
    for(int i=0;i<n;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        x=x1*a+y1*b+c;
        y=x2*a+y2*b+c;
        if((x>0&&y<0)||(x<0&&y>0))
            cnt++;
    }
    printf("%lld\n",cnt);
///*****************************  ALHAMDULILLAH  *****************************/
}