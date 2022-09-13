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
#define pi 3.1415926536
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int ck(double a,double b,double c){
    if(a+b>c&&a+c>b&&b+c>a)
        return 1;
    else
        return 0;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    ll x1,x2,x3,y1,y2,y3,slop1,slop2;
    double l1,l2,l3;
    sffl(x1,y1);
    sffl(x2,y2);
    sffl(x3,y3);
    l1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    l2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    slop1=(x1-x2)*(y2-y3);
    slop2=(y1-y2)*(x2-x3);
    if(l1==l2&&slop1!=slop2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}