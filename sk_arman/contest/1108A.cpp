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
typedef unsigned long long int ull;
using namespace std;

int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    sf(tcase);
    while(tcase--)
    {
        int x1,y1,x2,y2;
        sff(x1,y1);sff(x2,y2);
        printf("%d ",x1);
        if(x1==x2){
             printf("%d\n",y2);
        }
        else{
            printf("%d\n",x2);
        }
    }
}