
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
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
deque<ll>V,V2,V3;
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,ck=0,sum=0;
        sf(n);
        V.clear();
        for(int i=0; i<n; i++)
        {
            int a;
            sf(a);
            if(a<=2048)
                V.PB(a);
        }
        if(V.size()==0){
            NO;continue;
        }
        VST(V);
        while(V[V.size()-1]!=2048){
            if(V.size()>1){
                if(V[0]==V[1]){
                    V.PB(2*V[0]);
                    V.pop_front();
                    V.pop_front();
                }
                else{
                    V.pop_front();
                }
                VST(V);
            }
            else{
                break;
            }
            if(V.size()<=1)
                break;
        }
        if(V[V.size()-1]==2048)
        {
            YES;
        }
        else
        {
            NO;
        }

        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}