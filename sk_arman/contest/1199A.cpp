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
vector<ll>V,V2,V3;
vector<ll> :: iterator it1,it2;
void CLEAR()
{
    V.clear();
    V2.clear();
    V3.clear();
}
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,x,y,left=0,right=0;
        sf(n);
        sff(x,y);
        for(int i=0; i<n; i++)
        {
            int a;
            sf(a);
            V.PB(a);
        }
        for(int i=0; i<n; i++)
        {
            int cntx=0,cnty=0;
            for(int j=i-1; j>i-x-1&&j>=0; j--)
            {
                if(V[j]<V[i])
                {
                    cntx=1;
                    break;
                }
            }
            for(int j=i+1; j<i+y+1&&j<n; j++)
            {
                if(V[j]<V[i])
                {
                    cnty=1;
                    break;
                }
            }
            if(cntx==0&&cnty==0){
                printf("%d\n",i+1);return 0;
            }
        }



        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}