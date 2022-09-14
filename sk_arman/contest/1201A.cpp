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
vector<string>V,V2,V3;
vector<ll> :: iterator it1,it2;
void CLEAR(){
    V.clear();
    V2.clear();
    V3.clear();
}
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1;test<=tcase;test++)
    {
        int n,m,sum=0,ar[10];
        sff(n,m);
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            V.PB(s);
        }
        for(int i=0;i<m;i++){
                memset(ar,0,sizeof(ar));
            int a,ma=0;
            sf(a);
            for(int j=0;j<n;j++){
                if(V[j][i]=='A'){
                    ar['A'-'A']++;
                }
                else if(V[j][i]=='B'){
                    ar['B'-'A']++;
                }
                else if(V[j][i]=='C'){
                    ar['C'-'A']++;
                }
                else if(V[j][i]=='D'){
                    ar['D'-'A']++;
                }
                else{
                    ar['E'-'A']++;
                }
            }
            for(int j=0;j<5;j++){
                ma=max(ma,ar[j]);
            }
            sum+=(ma*a);
        }
        printf("%d\n",sum);


       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}