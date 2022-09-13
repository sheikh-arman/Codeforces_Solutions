/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
#define nl cout<<"\n";
#define PR pair<ll,ll>
#define sf1(n) cin>>n
#define sf2(n, m) cin>>n>>m
#define sf3(n, m,k ) cin>>n>>m>>k
#define pfn(n) printf("%d\n",n)s
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define minus1 printf("-1\n");
#define PB push_back
#define VST(v) sort(v.begin(),v.end())
#define VSTr(v) sort(v.begin(),v.end(),greater<long long int>())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
#define MP make_pair
#define ff first
#define ss second
#define tt third
#define mod 1000000007
#define T(n) printf("test %d\n",n)
# define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
double PI = 2 * acos(0.0);
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
ll SET(ll NUM,ll POS)
{
    return NUM | (1<<POS);
}
bool isOn(ll NUM,ll POS)
{
    return (bool)(NUM & (1<<POS));
}
int main()
{
    fast;
//    freopen("1input.txt","r",stdin);
//    freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<pair<ll,char>>V;
        ll n;
        string s;
        cin>>s;
        n=s.size();
        ll a=0,b=0,c=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='A')a++;
            if(s[i]=='B')b++;
            if(s[i]=='C')c++;
        }
        V.PB({a,'A'});
        V.PB({b,'B'});
        V.PB({c,'C'});
        VST(V);
        stack<ll>stk;
        for(ll i=0; i<n; i++)
        {
            ll ck=(s[i]==V[2].ss);
            if(stk.empty())
            {
                stk.push(ck);
            }
            else
            {
                if(ck==0)
                {
                    if(stk.top()==1)
                    {
                        stk.pop();
                    }
                    else
                    {
                        stk.push(ck);
                    }
                }
                else
                {
                    stk.push(ck);
                }
            }
        }
        if(stk.empty())
        {
            YES;
        }
        else
        {
            while(!stk.empty())stk.pop();
            for(ll i=0; i<n; i++)
            {
                ll ck=(s[i]==V[2].ss);
                if(stk.empty())
                {
                    stk.push(ck);
                }
                else
                {
                    if(ck==1)
                    {
                        if(stk.top()==0)
                        {
                            stk.pop();
                        }
                        else
                        {
                            stk.push(ck);
                        }
                    }
                    else
                    {
                        stk.push(ck);
                    }
                }
            }
            if(stk.empty()){
                YES;
            }
            else
            NO;
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}