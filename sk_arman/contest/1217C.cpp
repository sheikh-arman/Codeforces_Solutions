
/*
    Sk arman Hossain
    University of Barisal

    Problem name : 1217C
    Algorithm :bitmask
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
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define MP make_pair
#define first ff
#define second ss
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>V,V2,V3;
vector<ll> :: iterator it1,it2;
void CLEAR()
{
    V.clear();
    V2.clear();
    V3.clear();
}
int main()
{
    ///freopen("1input.txt","r",stdin);
    int tcase=1;
    sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        string s;
        cin>>s;
        int len=s.size(),last_position=0,ans=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='1')
            {
                int bitmask=0;
                for(int j=i; j<len&&(j-i+1)<=18; j++)
                {
                    bitmask=(s[j]-'0')+(bitmask<<1);
                    if(bitmask<=(j-last_position+1)||(bitmask==(j-i+1)))
                    {
                        ans++;
                    }
                }
                last_position=i+1;
            }
        }

         printf("%d\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}