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
vector<long long >v,v2,v3;
vector<int> :: iterator it1,it2;
map<ll ,int>m;
int main()
{
    //freopen("input.txt","r",stdin);
    ll x=2;
    for(int i=2;i<=34;i++){
        v.pb(x);
        x*=2;
    }
    ll n,t,cnt=0;
    sfl(n);
    for(int i=0;i<n;i++){
        ll a;
        sfl(a);
        v2.pb(a);
        m[a]++;
    }
    for(int i=0;i<n;i++){
            int ck=1;
        for(int j=0;j<33&&ck;j++){
            ll temp=v[j]-v2[i];
            if(m[temp]){
                if(temp==v2[i]){
                    if(m[temp]>1)
                        ck=0;
                }
                else
                    ck=0;
            }
        }
    if(ck)
        cnt++;
    }
    printf("%d\n",cnt);
///*****************************  ALHAMDULILLAH  *****************************/
}