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
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
deque<char>v,v2,v3;
vector<ll> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
    ///sf(tcase);
    while(tcase--)
    {
        ll n,k,ans,a=-1,b,ans2,tmp;
        sfl(k);
        if(k<25)
        {
            printf("-1\n");
            return 0;
        }
        for(int i=5; i*i<=k; i++)
        {
            if(k%i==0)
            {
                a=i;
                b=k/i;
                break;
            }
        }
        if(a==-1)
        {
            printf("-1\n");
            return 0;
        }
        for(int i=1; i<=a; i++)
        {
            if(i%5==1)
            {
                v.pb('a');
            }
            else if(i%5==2)
            {
                v.pb('e');
            }
            else if(i%5==3)
            {
                v.pb('i');
            }
            else if(i%5==4)
            {
                v.pb('o');
            }
            else
            {
                v.pb('u');

            }
        }
        for(int j=0; j<b; j++)
        {
            for(int i=0; i<a; i++)
            {
                printf("%c",v[i]);
            }
            v.pb(v[0]);
            v.pop_front();
        }


        // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}