
/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
 */

#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<ll,ll>
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
#define ss second
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<PR>V;
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        ll n;
        ll ans=0,cal_ans=1;
        ll ma=pow(2,32)-1;
        sfl(n);
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s=="for"){
                ll a;
                sfl(a);
                V.PB({a,0});
            }
            else if(s=="end"){
                V[V.size()-1].ss*=V[V.size()-1].first;
                ll tm=V[V.size()-1].ss;
                V.pop_back();
                if(V.size()==0){
                    ans+=tm;
                }
                else{
                    V[V.size()-1].ss+=tm;
                    if(V[V.size()-1].ss>ma){
                        printf("OVERFLOW!!!\n");return 0;
                    }
                }
                if(ans>ma){
                  printf("OVERFLOW!!!\n");return 0;
               }
            }
            else{
                if(V.size()==0)
                     ans++;
                else{
                  // cnt++;
                    V[V.size()-1].ss++;
                }
            }
           // printf("%lld\n",ans);
        }
        if(ans>ma){
            printf("OVERFLOW!!!\n");
        }
        else
            printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}