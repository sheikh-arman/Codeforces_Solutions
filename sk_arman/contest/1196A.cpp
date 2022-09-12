#include<bits/stdc++.h>
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
int main()
{
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
    sfl(tcase);
    while(tcase--)
    {
        ll ans=0,a,ans2,tmp,n;
        for(int i=0;i<3;i++){
            sfl(n);
            //v.pb(n);
            ans+=n;
        }
        ans/=2;



        printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}