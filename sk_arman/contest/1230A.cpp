#include<bits/stdc++.h>
#define PR pair<int,int>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define PB push_back
#define VST(v) sort(v.begin(),v.end())
typedef long long int ll;
using namespace std;
vector<ll>V;
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        for(int i=0;i<4;i++){
            ll a;
            sfl(a);
            V.PB(a);

         }
         VST(V);
         ll ans1=V[3];
         ll ans2=V[2];
         if(ans2+V[0]+V[1]==ans1||ans2+V[1]==ans1+V[0]){
            YES;
         }
         else{
            NO;
         }
       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}