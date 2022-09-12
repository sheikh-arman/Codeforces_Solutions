#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define prln(n) printf("%d\n",n)
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
    //freopen("input.txt","r",stdin);
    long long int n,h,a,b,k,t,m;
    scanf("%lld%lld%lld%lld%lld",&n,&h,&a,&b,&k);
    while(k--){
           long long int a1,b1,a2,b2,x;
        sffl(a1,b1);
        sffl(a2,b2);
        long long int ans,ans1,ans2;
        ans=abs(a1-a2);
        if(a1!=a2){
                if(b1>=a&&b1<=b){
                    ans+=abs(b2-b1);
                }
                else if(b2>=a&&b2<=b){
                    ans+=abs(b2-b1);
                }
                else{
                    ans1=abs(a-b1)+abs(a-b2);
                ans2=abs(b-b1)+abs(b-b2);
                ans+=min(ans1,ans2);
                }
        }
        else
            ans+=abs(b1-b2);
        printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}