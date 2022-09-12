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
vector<ll>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    while(tcase--){
        ll n,ans=0,cnt=0,a,k,s=0,zz,xx;
        ll aa,bb;
        sffl(n,k);
        for(int i=0; i<n; i++)
        {
            sfl(a);
            v.pb(a);s+=a;
        }
        if(s<k){
            printf("-1\n");return 0;}
        vst(v);
        for(int i=1;i<n;i++){
            k-=v[i]-v[0];
        }
        if(k>0){
            ll l=k/n;
            if(k%n!=0){
                l++;
            }
            v[0]-=l;
        }
        printf("%lld\n",v[0]);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}