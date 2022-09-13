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
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,r,d,t,m,cnt=0,x,y,z,x1,y1,k,sum=0;
    double ans=0;
    sff(n,k);
    fori(n){
        int a;sf(a);v.pb(a);v2.pb(a);
    }
    vst(v2);
    for(int i=0;i<n;i++){
        if(sum+v2[i]<=k){
         sum+=v2[i];cnt++;
        }
    }
    printf("%d\n",cnt);
    for(int i=0;i<cnt;i++){
        for(int j=0;j<n;j++){
            if(v2[i]==v[j]){
                printf("%d ",j+1);
                v[j]=-1;break;
            }
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}