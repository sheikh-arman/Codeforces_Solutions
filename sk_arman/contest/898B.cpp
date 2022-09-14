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
int main()
{
    ///freopen("input.txt","r",stdin);
    int t=1;
    while(t--)
    {
        int n,a,b,cnta=0,cntb=0,c;
        sf(n);sf(a);sf(b);
//        if(a>b)
//            swap(a,b);
        while(n>0){
            if(n%a!=0&&n%b!=0&&n%(a+b)!=0&&n>0){
                n-=a;cnta++;
            }
            if(n%a==0&&n>0){
                printf("YES\n%d %d\n",cnta+n/a,cntb);return 0;
            }
            if(n%b==0&&n>0){
                printf("YES\n%d %d\n",cnta,cntb+n/b);return 0;
            }
            if(n%(a+b)==0&&n>0){
                printf("YES\n%d %d\n",cnta+n/(a+b),cntb+n/(a+b));return 0;
            }
        }
        printf("NO\n");
    }
///*****************************  ALHAMDULILLAH  *****************************/
}