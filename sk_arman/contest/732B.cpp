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
    int n,k,sum=0,x,y;
    sff(n,k);
    fori(n){
      int a;sf(a);v.pb(a);
    }
    for(int i=1;i<n-1;i++){
        if(k<=v[i]+v[i-1])
            x=0;
        else
            x=k-(v[i]+v[i-1]);
        if(k<=v[i]+v[i+1])
            y=0;
        else
            y=k-(v[i]+v[i+1]);
        v[i]+=min(x,y);
        sum+=min(x,y);
        v[i-1]+=(x-min(x,y));
        sum+=(x-min(x,y));
        //printf("%d ",v[i-1]);
    }
    if(k<=v[n-1]+v[n-2])
            y=0;
    else
        y=k-(v[n-1]+v[n-2]);
        sum+=y;v[n-1]+=y;
    printf("%d\n",sum);
    for(int i=0;i<n;i++){
        printf("%d ",v[i]);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}