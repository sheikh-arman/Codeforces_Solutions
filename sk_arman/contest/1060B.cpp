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
ll digit(ll c){
    ll d=0;
    while(c){
        d++;c/=10;
    }
    return d;
}
ll sum(ll a){
    ll n=0;
    while(a){
        n+=a%10;
        a/=10;
    }
    return n;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ll ans=0,cnt=0,a,b,n,Max=-1;
    sfl(n);
    if(digit(n)<3){
        a=n-(n%10);
        if(a)a--;
        b=n-a;
        ans=sum(a)+sum(b);
    }
    else{
            a=9;
        for(int j=2;j<digit(n);j++){
            a=a*10+9;
        }
        b=n-a;
        ans=sum(a)+sum(b);
    }
    cout<<ans<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}