#include<bits/stdc++.h>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2,v3;
using namespace std;
int main()
{
            ll n,m,a,b,k;
            sfl(n);sffl(m,k);
            for(int i=0;i<n;i++){
                sfl(a);
                v.pb(a);
            }
            vst(v);
            ll tmp=m/(k+1),an,ans;

            ans=v[n-2]*tmp;
            m-=tmp;
            ans+=m*v[n-1];
            printf("%lld\n",ans);
///*****************************  ALHAMDULILLAH  *****************************/
}