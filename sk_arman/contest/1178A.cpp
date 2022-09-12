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
//void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
int dx[]={0,0,1,1};
int dy[]={1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;


int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase;
    ///while(1){
    int n,ans=0,cnt=1,a,b,sum=0,sum2=0;
    sf(n);
    sf(a);
    sum=a;
    sum2=a;
    for(int i=0;i<n-1;i++){
        sf(b);
        v.pb(b);
        sum+=b;
        if(b*2<=a){
            sum2+=b;cnt++;
        }
    }
    if(sum2*2<=sum){
        printf("0\n");
    }
    else if(a*2>sum){
        printf("1\n1\n");
    }
    else {
        printf("%d\n1 ",cnt);
        for(int i=1;i<n;i++){
            if(v[i-1]*2<=a){
                printf("%d ",i+1);
            }
        }
    }

    //printf("%d",ans);
///*****************************  ALHAMDULILLAH  *****************************/
}