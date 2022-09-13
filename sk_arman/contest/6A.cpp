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
int ck(int a,int b,int c){
    if(a+b>c&&a+c>b&&b+c>a)
        return 1;
    else
        return 0;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,t,m;

    for(int i=0;i<4;i++){
        int a;
        sf(a);
        v.pb(a);
    }
    sort(v.begin(),v.end());
    if(ck(v[0],v[1],v[2])||ck(v[1],v[2],v[3]))
        cout<<"TRIANGLE"<<endl;
    else if(v[0]+v[1]==v[2]||v[1]+v[2]==v[3])
        cout<<"SEGMENT"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}