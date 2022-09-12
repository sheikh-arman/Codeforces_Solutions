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
using namespace std;
vector<int>v;
vector<int> :: iterator it1,it2;
bool rev(int a,int b){
    return (a>b);
}
int main()
{
    int n,a,b,c,d,ans=-111,anspos,tsum,sum;
    sf(n);
    scanf("%d%d%d%d",&a,&b,&c,&d);
    tsum=a+b+c+d;
    v.pb(tsum);
    for(int i=2;i<=n;i++){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=a+b+c+d;
    v.pb(sum);
    }
    sort(v.begin(),v.end(),rev);
    it1=find(v.begin(),v.end(),tsum);
    it2=v.begin();
    cout<<it1-it2+1<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}