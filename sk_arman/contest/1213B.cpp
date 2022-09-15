
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

typedef unsigned long long int ull;
using namespace std;
vector<int>V,V2,V3;
void CLEAR(){
    V.clear();
}
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        V.clear();
        int n,ma=0;
        sf(n);
        for(int i=0;i<n;i++){
            int a;
            sf(a);
            V.PB(a);
        }
        int cnt=0;
        int mi=V[n-1];
        for(int i=n-2;i>=0;i--){
            if(V[i]>mi){
                cnt++;
            }
            mi=min(mi,V[i]);
        }
        printf("%d\n",cnt);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}