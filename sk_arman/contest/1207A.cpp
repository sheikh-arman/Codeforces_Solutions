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
vector<ll>V,V2,V3;
vector<ll> :: iterator it1,it2;
void CLEAR(){
    V.clear();
    V2.clear();
    V3.clear();
}
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        int b,bef,c,bcost,ccost,ans=0;
        sff(b,bef);
        sf(c);
        sff(bcost,ccost);
        if(bcost>ccost){
            if(b>=bef*2){
                ans+=bcost*bef;
                b-=(bef*2);
                ans+=ccost*min(b/2,c);
            }
            else{
                ans+=bcost*min(b/2,bef);
                //b-=(bef*2);
                //ans+=ccost*(b-(c*2))
            }

        }
        else{
                 if(b>=c*2){
                ans+=ccost*c;
                b-=(c*2);
                ans+=bcost*min(b/2,bef);
            }
            else{
                ans+=ccost*min(b/2,c);
                //b-=(bef*2);
                //ans+=ccost*(b-(c*2))
            }


        }

        printf("%d\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}