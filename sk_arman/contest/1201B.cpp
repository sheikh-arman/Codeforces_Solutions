#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define MP pair<ll,ll>
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
#define YES printf("YES\n")
#define NO printf("NO\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>V2,V3;
ll set1[100010];
bool isSubsetSum( int n, ll sum)
{
   // Base Cases
   if (sum == 0)
     return true;
   if (n == 0 && sum != 0)
     return false;

   // If last element is greater than sum, then ignore it
   if (set1[n-1] > sum)
     return isSubsetSum( n-1, sum);
     return isSubsetSum( n-1, sum) || isSubsetSum( n-1, sum-set1[n-1]);
}
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        ll n,n2,ck=0;
        ll sum1=0,sum2=0,sum=0;
        sfl(n);
        for(int i=0;i<n;i++){
            ll a;
            sfl(a);
            set1[i]=a;
            sum+=a;
        }
        if(sum%2!=0){
            NO;return 0;
        }
        sum/=2;
        sort(set1,set1+n);
        if(set1[n-1]<=sum){
            YES;
        }
        else
            NO;


       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}