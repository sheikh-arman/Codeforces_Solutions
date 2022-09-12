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
int ar[200];
int main()
{
    fast;
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
    while(tcase--)
    {
        ll n,k,a,ans=0;
        sffl(n,k);
        for(int i=0;i<n;i++){
            sfl(a);
            ar[a%k]++;
        }
        ans+=ar[0]/2;
        ar[0]=0;
        for(int i=1;i<=(k/2)+1;i++){
            if(ar[i]){
                if(ar[k-i]&&i!=(k-i)){
                    ans+=min(ar[i],ar[k-i]);
                    ar[i]=ar[k-i]=0;
                }
                else if(ar[k-i]&&(i==k-i)){
                    ans+=ar[i]/2;
                    ar[i]=0;
                }
            }
        }
        printf("%lld\n",2*ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}