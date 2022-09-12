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
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long int ll;
using namespace std;
vector<ll>v,v2,v3;
vector<ll> :: iterator it1,it2;
int main()
{
     ll tcase=1;
    while(tcase--)
    {
        ll n,a,b,m,k,cnt=0,cnt2=0,ans=0,ans2=0,ck=0,ck2=0;
        sfl(n);

        for(int i=0;i<n;i++){
            sfl(a);
            v.pb(a);
            if(a==1){
                    if(ck2==1)
                    {
                        cnt=0;ck2=0;
                    }
                cnt++;cnt2=0;ck=1;
            }
            else if(a==2){
                cnt2++;
                ans=max(ans,min(cnt,cnt2));
                ck2=1;
            }
        }
        cnt=0;cnt2=0;ck=0;
        for(int i=0;i<n;i++){
            if(v[i]==2){
                    if(ck2==1)
                    {
                        cnt=0;ck2=0;
                    }
                cnt++;cnt2=0;ck=1;
            }
            else if(v[i]==1){
                cnt2++;
                ans2=max(ans2,min(cnt,cnt2));
                ck2=1;
            }
        }
        ans=max(ans,ans2);
        printf("%lld\n",2*ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}