
/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
 */

#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<int,int>
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
#define MP make_pair
#define first ff
#define second ss
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
int main()
{
    int n,l,r,ans=0,mi=1,ma=1;
    sf(n);
    sff(l,r);
    l--;
    for(int i=1; i<=l; i++)
    {
        mi*=2;
        ans+=mi;
    }
    mi=ans;
    mi+=n-l;
    r--;
    ans=0;
    for(int i=1; i<=r; i++)
    {
        ma*=2;
        ans+=ma;
    }
    int c=ma;
    ma=ans;
    ma+=((n-r-1)*c)+1;
    printf("%d %d\n",mi,ma);
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}