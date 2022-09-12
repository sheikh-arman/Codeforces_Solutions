#include<bits/stdc++.h>
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb push_back
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
vector<ll>v,v2,v3;
vector<ll> :: iterator it1,it2;
int main()
{

        ll n,m,a,b,ans=0,k1,k2,k3,ck1=0,ck2=0,ck3=0,m1=0,m2=0,m3=0;
        sfl(n);
        for(int i=0;i<n;i++){
            sfl(a);
            v.pb(a);
        }
        for(int i=0;i<n;i++){
            if(v[i]==1&&!ck1){
                ck3++;
                if(ck3>m1)m1=ck3;
            }
            else {
                ck1=1;
            }
            if(v[i]==1){
                ck2++;if(ck2>m2)m2=ck2;
            }
            else ck2=0;
        }
        ck3=ck1=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]==1&&!ck1){
                ck3++;
                if(ck3>m3)m3=ck3;
            }
            else {
                ck1=1;
            }
        }
        ans=max(m2,m1+m3);
        printf("%lld\n",ans);


///*****************************  ALHAMDULILLAH  *****************************/
}