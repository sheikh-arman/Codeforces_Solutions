

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
#define sf1(n) scanf("%lld", &n)
#define sf2(n, m) scanf("%lld %lld",&n,&m)
#define sf3(n, m,k ) scanf("%lld %lld %lld",&n,&m,&k)
#define pfn(n) printf("%d\n",n)
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define minus1 printf("-1\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define MP make_pair
#define ff first
#define ss second
#define tt third
#define mod 1000000007
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
//ll big_mod(ll base,ll power,ll Mod){if(power==0){return 1;}else if(power%2==1){ll p1=base%Mod;ll p2=(big_mod(base,power-1,Mod))%Mod;return (p1*p2)%Mod;}else if(power%2==0){ll p1=(big_mod(base,power/2,Mod))%mod;return (p1*p1)%Mod;}}
class PAIR
{
public:
    ll firs;
    ll secon;
    ll thir;
};
bool cmp(PAIR a,PAIR b)
{
    if(a.firs!=b.firs)
        return a.firs<b.firs;
    if(b.secon!=a.secon)
    {
        return a.secon<b.secon;
    }
    else
    {
        return a.thir<b.thir;
    }
}

vector<PR>V[200000];
vector<ll>ans,V2;
ll ar[200000];
//emplace_back()
int main()
{
    ///freopen("1input.txt","r",stdin);
    ///freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        sf1(n);
        ll a,b,c;
        for(ll i=0; i<n-2; i++)
        {
            sf3(a,b,c);
            V[a].PB({b,c});
            // V[a].PB({c,i});
            V[b].PB({a,c});
            //V[b].PB({c,i});
            V[c].PB({a,b});
            //V[c].PB({b,i});
            ar[a]++;
            ar[b]++;
            ar[c]++;
        }
        ll fir;
        for(ll i=1; i<=n; i++)
        {
            if(ar[i]==1)
            {
                fir=i;
                break;
            }
        }
        ans.PB(fir);
        ar[fir]=0;
        ll sec,id;
        if(ar[V[fir][0].first]==2)
        {
            sec=V[fir][0].first;
            ans.PB(sec);
            ans.PB(V[fir][0].second);
            sec=V[fir][0].second;
            ar[V[fir][0].first]=0;
            ar[V[fir][0].second]=0;
        }
        else if(ar[V[fir][0].second]==2)
        {
            sec=V[fir][0].second;
            ans.PB(sec);
            ans.PB(V[fir][0].first);
            sec=V[fir][0].first;
            ar[V[fir][0].first]=0;
            ar[V[fir][0].second]=0;
        }
        ll cnt=3;
        while(cnt<n)
        {
            ll siz=V[sec].size();
            ll ck=1;
            for(ll i=0; i<siz&&ck; i++)
            {
                if(ar[V[sec][i].first])
                {
                    if(ar[V[sec][i].second]==0)
                    {
                        ans.PB(V[sec][i].first);
                        ar[V[sec][i].first]=0;
                        sec=V[sec][i].first;
                        ck=0;
                        break;
                    }
                }
                else{
                    if(ar[V[sec][i].second])
                    {
                        ans.PB(V[sec][i].second);
                        ar[V[sec][i].second]=0;
                        sec=V[sec][i].second;
                        ck=0;
                        break;
                    }
                }
            }
            cnt++;
            //printf("%lld t\n",cnt);
        }
        for(ll i=0; i<n; i++)
        {
            printf("%lld ",ans[i]);
        }
        nl;



        //printf("%lld\n");
        // printf("%d\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}