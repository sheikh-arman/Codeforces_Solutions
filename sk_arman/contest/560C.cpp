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
    int a,b,c,d,e,f,ans=0,temp=0;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    temp=a*2+1;
    ans+=temp;
    int y=min(b,f);
    for(int i=1;i<y;i++){
        temp+=2;
        ans+=temp;
    }
    temp++;
    ans+=temp*abs(max(b,f)-y);
    temp=d*2+1;
    ans+=temp;
    int x=min(e,c);
    for(int i=x-1;i>0;i--){
            temp+=2;
            ans+=temp;
    }
    printf("%d\n",ans);
///*****************************  ALHAMDULILLAH  *****************************/
}
//2 4 5 3 3 6