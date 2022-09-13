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
vector<int>v;
vector<double>v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,r,d,t,m,cnt=0,x,y,z;
    sff(n,r);
    for(int i=0;i<n;i++){
        int a;sf(a);v.pb(a);v2.pb(r);
        for(int j=0;j<i;j++){
                int x=v[i]-v[j];
            if(x<=2*r){
                v2[i]=max(v2[i],v2[j]+sqrt((4.0*r*r)-(x*x)));
            }
        }
    }
    for(int i=0;i<n;i++){
    printf("%.11lf ",v2[i]);
    }
    nl;
///*****************************  ALHAMDULILLAH  *****************************/
}