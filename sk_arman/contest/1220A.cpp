

#include<bits/stdc++.h>
#define nl printf("\n");
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
#define ff first
#define ss second
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,cnt=0,cnt2=0,cc,mm;
        string s;
        sf(n);
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='n')
            {
                cnt++;
            }
            if(s[i]=='z')
                cnt2++;
        }
        for(int i=0; i<cnt; i++)
        {
            printf("1 ");
        }
        for(int i=0; i<cnt2 ;i++)
        {
            printf("0 ");
        }



        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}