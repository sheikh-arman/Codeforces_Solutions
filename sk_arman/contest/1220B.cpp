
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
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
deque<ll>V;
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        int n;
        sf(n);
        ll ar[n+2][n+2];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ll a;
                sfl(a);
                ar[i][j]=a;
                if(i==0&&j>0)
                    V.PB(a);

            }
        }
        ll gc=V[0];
        for(int i=1;i<n-1;i++){
            gc=__gcd(gc,V[i]);
        }
        //cout<<gc;
        ll sq=sqrt(gc+1);
        for(int i=1;i<=sq;i++){
            if(gc%i==0){
                ll tmp=gc/i;
                ll div2=V[0]/i;
                ll divn2=V[n-2]/i;
                if(ar[1][n-1]==div2*divn2){
                    gc=i;break;
                }
                if(tmp!=i){
                    div2=V[0]/tmp;
                    divn2=V[n-2]/tmp;
                    if(ar[1][n-1]==div2*divn2)
                    {
                        gc=tmp;
                    }
                }
            }
        }
        cout<<gc;
        for(int i=0;i<n-1;i++){
            printf(" %lld",V[i]/gc);
        }

       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}