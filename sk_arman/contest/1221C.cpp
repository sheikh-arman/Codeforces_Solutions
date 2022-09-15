
#include<bits/stdc++.h>
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
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>V,V2,V3;
vector<ll> :: iterator it1,it2;
void CLEAR(){
    V.clear();
    V2.clear();
    V3.clear();
}
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        int c,m,x,ma=0,mma=0,cx=0;

        sff(c,m);sf(x);
        int mi=min(c,m);
        if(x>=mi){
            ma=mi;
            c-=ma;
            m-=ma;
            x-=ma;
            printf("%d\n",ma);
        }
        else{
            ma=x;
            c-=ma;
            m-=ma;
            x-=ma;
            int xx=(c+m)/3;
            int tm=min(c,min(m,xx));
            ma+=tm;
            printf("%d\n",ma);

        }


       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}