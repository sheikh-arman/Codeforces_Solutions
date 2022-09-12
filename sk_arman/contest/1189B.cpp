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
deque<ll>ans;
vector<ll>v;
int main()
{
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
   // sf(tcase);
    while(tcase--)
    {
        ll n,ck=0;
        sfl(n);
        for(int i=0;i<n;i++){
            ll a;
            sfl(a);
            v.pb(a);
        }
        vst(v);
        ans.pb(v[0]);
        for(int i=1;i<n;i++){
            if(i&1){
                ans.pb(v[i]);
            }
            else{
                ans.push_front(v[i]);
            }
        }
        for(int i=1;i<n-1;i++){
            if(v[i]>=v[i-1]+v[i+1]){
                    ck=1;
                break;
            }
        }
        if(ck==1){
            printf("NO\n");
        }
        else if(ans[0]>=ans[1]+ans[n-1]){
            printf("NO\n");
        }
        else if(ans[n-1]>=ans[0]+ans[n-2]){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            for(int i=0;i<n;i++){
                printf("%lld ",ans[i]);
            }
        }

       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}