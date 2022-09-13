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
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ///while(1){
    ll n,ans=0,sum=0,a,cnt2=0,cnt5=0;
    sfl(n);
    for(int i=0; i<n; i++)
    {
        sfl(a);
        if(a==25){
            cnt2++;
        }
        else if(a==50&&cnt2>0)
        {
            cnt5++;cnt2--;
        }
        else if(a==100&&(cnt2>2||(cnt5>0&&cnt2>0)))
        {
            if(cnt5>0){
                    cnt5--;cnt2--;
                }
            else
                cnt2-=3;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    printf("YES");
///*****************************  ALHAMDULILLAH  *****************************/
}