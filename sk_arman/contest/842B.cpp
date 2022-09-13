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
    int n,r,d,t,m,cnt=0,x,y,z;
    sff(r,d);
    sf(n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&x,&y,&z);
        x=abs(x);y=abs(y);
        double len=sqrt(x*x+y*y*1.0);
        int l=x*x+y*y;
        if(len-z>=(r-d)&&len+z<=r){
            cnt++;//cout<<x<<" "<<y<<endl;
        }


    }
    printf("%d\n",cnt);
///*****************************  ALHAMDULILLAH  *****************************/
}