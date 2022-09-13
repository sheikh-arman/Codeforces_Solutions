#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define prn(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    //freopen("input.txt","r",stdin);
    ///while(1){
    int n,t,w,b,ans=0;
    sf(n);
    sff(w,b);
    for(int i=0; i<n; i++)
    {
        int a;
        sf(a);
        v.pb(a);
    }
    for(int i=0; i<n/2; i++)
    {
        if(v[i]!=2&&v[n-i-1]!=2&&v[i]!=v[n-i-1])
        {
            cout<<-1<<endl;return 0;
        }
        if(v[i]==2&&v[n-i-1]==0)
        {
            ans+=w;
        }
        else if(v[i]==2&&v[n-i-1]==1)
        {
            ans+=b;
        }
        else if(v[i]==2&&v[n-i-1]==2)
        {
            ans+=2*min(w,b);
        }
        if(v[n-i-1]==2&&v[i]!=2)
        {
            if(v[i]==0&&v[n-i-1]==2)
            {
                ans+=w;
            }
            else if(v[i]==1&&v[n-i-1]==2)
            {
                ans+=b;
            }
        }

    }
    if(n&1)
    {
        if(v[n/2]==2)
        {
            ans+=min(w,b);
        }
    }
    printf("%d\n",ans);
///*****************************  ALHAMDULILLAH  *****************************/
}