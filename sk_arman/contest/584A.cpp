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
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,t;
    sff(n,t);
    if(n==1&&t==10){
        printf("-1\n");return 0;
    }
    int a=t%10;
    if(a)
        cout<<a;
    else
        cout<<1;
    for(int i=1;i<n;i++)
        printf("%d",a);

///*****************************  ALHAMDULILLAH  *****************************/
}