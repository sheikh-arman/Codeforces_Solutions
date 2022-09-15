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
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

bool ar[10000];
int ans[10000];
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,cnt1=0,ma;
        sf(n);
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            ar[i+1]=s[i]-'0';
            if(ar[i+1]==1)
                cnt1++;
        }
        ma=cnt1;
        for(int i=1; i<=n; i++)
        {
            int a,b;
            sff(a,b);
            //int cnt=0;
            if(ar[i]==1)
            {
                for(int k=0; k<=b; k++)
                {
                    ans[k]++;
                    ma=max(ma,ans[k]);
                }
                for(int j=b+a+1; j<=1000; j+=a+a)
                {
                    for(int k=j; k<j+a&&k<=1000; k++)
                    {
                        ans[k]++;
                        ma=max(ma,ans[k]);
                    }

                }
            }
            else
            {
                for(int j=b+1; j<=1000; j+=a+a)
                {
                    for(int k=j; k<j+a&&k<=1000; k++)
                    {
                        ans[k]++;
                        ma=max(ma,ans[k]);
                    }
                }
            }
        }
        printf("%d\n",ma);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}