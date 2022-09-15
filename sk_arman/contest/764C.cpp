/*
    Sk arman Hossain
    University of Barisal

    Problem name :  Timofey and a tree
    Algorithm : Implementation
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
#define ff first
#define ss second
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<PR>V;
int color[200010];
int occurence[200010];
int main()
{
    //freopen("1input.txt","r",stdin);
    int tcase=1;
    //sf(tcase);
    for(int test=1; test<=tcase; test++)
    {
        int n,e,ma=0,nod=1,cnt=0;
        sf(n);
        e=n-1;
        for(int i=0; i<e; i++)
        {
            int a,b;
            sff(a,b);
            V.PB({a,b});
        }
        for(int i=1; i<=n; i++)
        {
            int a;
            sf(a);
            color[i]=a;
        }
        for(int i=0; i<e; i++)
        {
            if(color[V[i].ff]!=color[V[i].ss]){
                cnt++;
                occurence[V[i].ff]++;
                occurence[V[i].ss]++;
                if(ma<occurence[V[i].ff]){
                    ma=max(ma,occurence[V[i].ff]);
                    nod=V[i].ff;
                }
                 if(ma<occurence[V[i].ss]){
                    ma=max(ma,occurence[V[i].ss]);
                    nod=V[i].ss;
                }
            }
        }
        if(ma==cnt)
        {
            printf("YES\n%d\n",nod);
        }
        else
        {
            printf("NO\n");
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}