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
    int n,t,blue=0,red;
    sf(n);
    for(int i=0;i<n;i++){
        int a;
        sf(a);v.pb(a);
    }
    sort(v.begin(),v.end());
    if(n&1){
    for(int i=1;i<n;i+=2){
        blue+=(v[i]*v[i])-(v[i-1]*v[i-1]);
    }
    }
    else{
            blue+=v[0]*v[0];
        for(int i=2;i<n;i+=2){
        blue+=(v[i]*v[i])-(v[i-1]*v[i-1]);
    }
    }
    red=(v[n-1]*v[n-1])-blue;
    double ans=red*3.1415926536;
    printf("%.10f\n",ans);
///*****************************  ALHAMDULILLAH  *****************************/
}