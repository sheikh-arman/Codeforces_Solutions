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
#define ff first
#define ss second
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>V,V2,V3;
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n;
        ll sum=0,ma=0;
        sf(n);
        for(int i=0; i<n; i++)
        {
            ll a;
            sfl(a);
            V.PB(a);
            ma=max(a,ma);
            sum+=a;
        }
        for(int i=0;i<n;i++){
            if(V[i]!=ma){
                V2.PB(ma-V[i]);
            }
        }
        if(V2.size()==0){
            printf("0 0\n");return 0;
        }
        else if(V2.size()==1){
            printf("1 %lld\n",V2[0]);return 0;
        }
        int l=V2.size();
        ll gc=V2[0];
        for(int i=1;i<l;i++){
            gc=__gcd(gc,V2[i]);
        }
        ll dif=(n*ma);
        dif-=sum;
        dif/=gc;
        printf("%lld %lld\n",dif,gc);
 
 
 
        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}