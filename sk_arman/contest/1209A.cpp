
/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
 */

#include<bits/stdc++.h>
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
#define VST(v) sort(v.begin(),v.end())
#define fori(i,n) for(;i<n;i++)

typedef long long int ll;
using namespace std;
vector<int>V;
bool color[1000];
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1;test<=tcase;test++)
    {

        int n,cnt=0,cc,ll,kk;;
        sf(n);
        for(int i=0;i<n;i++){
            int a;
            sf(a);
            V.PB(a);
        }
        VST(V);
        for(int i=0;i<n;i++){
            if(color[V[i]]==0){
                cnt++;
                for(int j=V[i];j<=110;j+=V[i]){
                    color[j]=1;
                }
            }
        }

        printf("%d\n",cnt);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}