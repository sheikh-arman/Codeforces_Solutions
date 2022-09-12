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
//void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
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
    int tcase;
    int n,ans=0,cnt=0,n2,ck,k;
    sf(n);
    n2=n;
    for(int i=n;; i++)
    {
        ck=0;
        for(int j=2; (j*j)<=i; j++)
        {
            if(i%j==0)
            {
                ck=1;
                break;
            }
        }
        if(ck==0)
        {
            printf("%d\n",i);
            printf("1 %d\n",n);
            for(k=0; k<n-1; k++)
            {
                printf("%d %d\n",k+1,k+2);
            }
            i=i-k-1;
            for(int l=2; l<n2; l+=2)
            {
                for(int k=l; i>0; k++)
                {
                    printf("%d %d\n",k,n);
                    i--;
                    n--;
                }
            }
            return 0;
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}