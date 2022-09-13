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
#define pi 3.1415926536
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int gcd(int a,int b){
    if(a>b)
        swap(a,b);
    if(a==0){
            return b;
        }
    if(a==1){
            return 1;
        }
    if(b%a==0){
        return a;
    }
    return gcd(b%a,a);
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,m,o;
    sff(n,m);
    sf(o);
    while(1){
        int a=gcd(n,o);
         if(a>o){
                printf("1\n");return 0;
            }
        o-=a;

        int b=gcd(m,o);
        if(b>o){
            printf("0\n");return 0;
            }
        o-=b;
    }
///*****************************  ALHAMDULILLAH  *****************************/
}