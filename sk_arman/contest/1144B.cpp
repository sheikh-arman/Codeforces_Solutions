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
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2,v3;
vector<ll> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
    //sf(tcase);
    while(tcase--)
    {
        ll n,ans,a,ans2,tmp,od=0,ev=0;
        sfl(n);
        for(int i=0;i<n;i++){
            sfl(a);
            if(a&1){
                od++;
                v.pb(a);
            }
            else{
                ev++;
                v2.pb(a);
            }
        }
        if(od>=ev){
            od=od-ev-1;
            if(od>0){
                    ans=0;
                vst(v);
                for(int i=0;i<od;i++){
                    ans+=v[i];
                }
                printf("%lld\n",ans);
            }
            else{
                printf("0\n");
            }
        }
        else{
            ev=ev-od-1;
            if(ev>0){
                ans=0;
                vst(v2);
                for(int i=0;i<ev;i++){
                    ans+=v2[i];
                }
                printf("%lld\n",ans);
            }
            else{
                printf("0\n");
            }
        }
       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}