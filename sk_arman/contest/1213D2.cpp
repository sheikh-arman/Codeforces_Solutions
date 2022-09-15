
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
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>V[200010];
int main()
{
    //freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,k,mi=INT_MAX,ma=0,c;
        sff(n,k);
        for(int i=0; i<n; i++)
        {
            int a;
            sf(a);
            ma=max(ma,a);
            int cnt=0;
            while(a>0)
            {
                V[a].PB(cnt);
                cnt++;
                a/=2;
            }
        }
        for(int i=1; i<=ma; i++)
        {
            VST(V[i]);
            int l=V[i].size();
            //printf("%d\n",l);
            if(l>=k)
            {
                int ans=0;
                for(int j=0; j<k; j++)
                {
                    ans+=V[i][j];
                   // printf("%d ",V[i][j]);
                }
                //printf("\n");
                mi=min(mi,ans);
            }
        }

        printf("%d\n",mi);

        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}