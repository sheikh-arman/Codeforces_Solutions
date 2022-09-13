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
bool mf(int a,int b){
    return (a>b);
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,r,d,t,m,cnt=0,x,y,z,sum=0;
    sf(n);
    for(int i=0;i<12;i++){
        sf(m);v.pb(m);
    }
    sort(v.begin(),v.end(),mf);
    if(n==0){
        cout<<0<<endl;return 0;
    }
    for(int i=0;i<12;i++){
            sum+=v[i];
        if(sum>=n){
            printf("%d\n",i+1);return 0;
        }
    }
    cout<<-1<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}