
/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
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
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        ll n,m,ans=0,x,y,z;
        sffl(n,m);
        ll tem=n/m;
        ll tm=tem/10;
        ll tm_ans=0;
        for(ll i=m;i<=(m*10);i+=m){
            tm_ans+=(i%10);
        }
        ans=tm*tm_ans;
        for(ll i=(tm*10*m)+m;i<=n;i+=m){
            ans+=(i%10);
        }
        printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}