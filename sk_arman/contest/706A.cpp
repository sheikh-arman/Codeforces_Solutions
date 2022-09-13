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
    int n,t,m,a1,a2;
    double mans=1243134756.0;
    sff(a1,a2);
    sf(n);
    for(int i=0;i<n;i++){
        int b1,b2,vel;
        scanf("%d%d%d",&b1,&b2,&vel);
        double a=(abs(a1-b1)*abs(a1-b1))+(abs(a2-b2)*abs(a2-b2));
        double ans=sqrt(a)/(double)vel;
        if(ans<mans){
            mans=ans;
        }
    }
    printf("%.20lf\n",mans);
///*****************************  ALHAMDULILLAH  *****************************/
}