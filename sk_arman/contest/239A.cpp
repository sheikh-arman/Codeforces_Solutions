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
int dx[]={0,0,1,1};
int dy[]={1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;


int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,r,d,t,cnt=0,x,y,z,x1,y1,k,ck=1;
    sff(y,k);
    sf(n);
    int temp=k-(y%k);
    for(int i=temp;i<=(n-y);i+=k){
        printf("%d ",i);ck=0;
    }
    if(ck)
        printf("-1\n");
///*****************************  ALHAMDULILLAH  *****************************/
}