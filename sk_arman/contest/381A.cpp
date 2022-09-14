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
    int n,si=0,di=0,ck=1;
    sf(n);
    fori(n){
     int a;sf(a);v.pb(a);
    }
    for(int i=0,j=n-1;;){

        if(v[i]>v[j]&&ck){
            si+=v[i];i++;ck=0;
        }
        else if(v[i]<v[j]&&ck){
            si+=v[j];j--;ck=0;
        }
        else if(v[i]>v[j]&&!ck){
            di+=v[i];i++;ck=1;
        }
        else if(v[i]<v[j]&&!ck){
            di+=v[j];j--;ck=1;
        }if(i==j){
            if(ck)
                si+=v[i];
            else
                di+=v[i];
                break;
            }
    }
    printf("%d %d\n",si,di);
///*****************************  ALHAMDULILLAH  *****************************/
}