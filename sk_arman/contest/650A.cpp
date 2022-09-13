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
vector<int>vx,vy,v3;
vector<int> :: iterator it1,it2;
int main()
{
    map<ll,ll>mx,my;
    map<pair<ll,ll>,ll>mxy;
    ///freopen("input.txt","r",stdin);
    ///while(1){
    ll n,r,d,t,m,cnt=0,x,y,z,ans=0,Max=-1;
    cin>>n;
    for(ll i=0;i<n;i++){
        int a,b;
        sff(a,b);
        vx.pb(a);
        vy.pb(b);
        mx[a]++;my[b]++;
        mxy[make_pair(a,b)]++;
        //cout<<mxy[make_pair(a,b)]<<endl;
    }
    for(ll i=0;i<n;i++){
       ans+=(mx[vx[i]]+my[vy[i]]-mxy[make_pair(vx[i],vy[i])]-1);
        if(mx[vx[i]]>0)
        mx[vx[i]]--;
        if(my[vy[i]]>0)
        my[vy[i]]--;
        if(mxy[mp(vx[i],vy[i])]>0)
        mxy[mp(vx[i],vy[i])]--;
    }
    cout<<ans<<endl;
///*****************************  ALHAMDULILLAH  *****************************/
}