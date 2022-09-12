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
    int tcase=1;
    while(tcase--)
    {
        int n,m,a,b,w1,h1,w2,h2,ans=0,cnt=1,ck=0,cka=0,ckb=0,mx=0,dr=0;
        sf(n);
        for(int i=0; i<n; i++)
        {
            sff(a,b);
            if((a||b)&&ck!=1)
            {
                ck=1;
                cka=a;
                ckb=b;
                mx=max(a,b);
                cnt+=min(a,b);
                if(a==b)
                {
                    dr=1;
                    mx=a;
                }
            }
            if(ck==1&&(cka<a||ckb<b))
            {
                int mi=min(a,b);

                if(mi>=mx)
                {

                    int dif=mi-mx;
                    cnt=cnt+dif;

                    cnt+=1;

                }
                if(dr==1)
                {
                    cnt-=1;
                }

                if(a!=b)
                    dr=0;
                if(a==b)
                    dr=1;
                cka=a;
                ckb=b;
                mx=max(a,b);

            }
        }
        cout<<cnt<<endl;


    }
///*****************************  ALHAMDULILLAH  *****************************/
}