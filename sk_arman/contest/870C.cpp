#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
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
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;

int isprime(int n){
    for(int i=4;i*i<=n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    int n,m,ans=0,cnt=0;
    sf(n);
    while(n--)
    {
        sf(m);
        if(m&1)
        {
            if(m==9){
            printf("1\n");continue;
            }
            if(m>9)
                m-=9;
            if(m%4==0){
                printf("%d\n",m/4+1);continue;
            }
            else if((m-6)%4==0&&m>3){
                printf("%d\n",(m-6)/4+2);continue;
            }
            else{
                if(isprime(m)||m==1||m==2||m==3){
                    printf("-1\n");
                }
                else{
                    printf("1\n");
                }
                continue;
            }
        }
        else
        {
            if(m%4==0&&m>3)
            {
                printf("%d\n",m/4);
                continue;
            }
            else if((m-6)%4==0&&m>3)
            {
                printf("%d\n",(m-6)/4+1);
                continue;
            }
            else{
                if(isprime(m)||m==1||m==2||m==3){
                    printf("-1\n");
                }
                else{
                    printf("1\n");
                }
                continue;
            }
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}