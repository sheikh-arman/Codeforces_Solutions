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
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int prime_ck[4001],n;
void seive()
{
    prime_ck[0]=prime_ck[1]=1;
    for(int i=4; i<=n; i+=2)
    {
        prime_ck[i]=1;
    }
    for(int i=3; i<=n; i+=2)
    {
        if(prime_ck[i]==0)
        {
            for(int j=i+i+i; j<=n; j+=2*i)
            {
                prime_ck[j]=1;
            }
        }
    }
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    sf(n);
    seive();
    int sq,cnt,ans=0;
    for(int j=6; j<=n; j++)
    {
        cnt=0;
        sq=sqrt(j);
        for(int i=2; i<=sq; i++)
        {
            if(j%i==0&&(j/i)!=i)
            {
                if(prime_ck[i]==0)cnt++;
                if(prime_ck[j/i]==0)cnt++;
          //printf("%d %d\n",i,j/i);
            }
        }
        if(cnt==2)
            ans++;
    }
    printf("%d\n",ans);
///*****************************  ALHAMDULILLAH  *****************************/
}