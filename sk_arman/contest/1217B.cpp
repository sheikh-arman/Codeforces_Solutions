

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
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,m,ma=-1,x,y,mxa=0;
        sff(n,m);
        for(int i=0; i<n; i++)
        {
            int a,b;
            sff(a,b);
            mxa=max(mxa,a);
            ma=max(ma,(a-b));
            if(a-b==ma)
            {
                x=a;
                y=b;
            }
        }
        if(ma<1&&mxa<m)
        {
            printf("-1\n");
        }
        else
        {
            if(mxa>=m)
            {
                printf("1\n");
            }
            else
            {
                int dif=m-mxa;
                int ans=(dif/ma)+(dif%ma!=0)+1;
                int ans2=(m/ma)+(m%ma>y);
                ans=min(ans,ans2);
                // if(n>x)ans+=1;
                printf("%d\n",ans);
            }
        }

        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}