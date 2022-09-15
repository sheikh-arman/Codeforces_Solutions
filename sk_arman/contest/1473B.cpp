/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
 */
#include<bits/stdc++.h>
#define nl cout<<"\n";
#define N 200001
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
#define T(n) printf("test %d\n",n)
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("1input.txt","r",stdin);
//    freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        string s,t;
        cin>>s>>t;
        if(s.size()>t.size())
        {
            swap(s,t);
        }
        ll len_s=s.size();
        ll len_t=t.size();
        string tm_s=s,tm_t=t;
        string gcd,ans;
        for(ll i=0; i<len_s; i++)
        {
            gcd+=s[i];
            ll cnt_s=0,cnt_t=0,k=0,ck=1;
            for(ll j=0; j<len_s; j++)
            {
                if(s[j]!=gcd[k])
                {
                    ck=0;
                    break;
                }
                k++;
                if(k>i)
                {
                    k=0;
                    cnt_s++;
                }
            }
            if(k!=0)ck=0;
            if(ck)
            {
                k=0;
                for(ll j=0; j<len_t; j++)
                {
                    if(t[j]!=gcd[k])
                    {
                        ck=0;
                        break;
                    }
                    k++;
                    if(k>i)
                    {
                        k=0;
                        cnt_t++;
                    }
                }
                if(k!=0)ck=0;
                if(ck)
                {
                    if(cnt_s>cnt_t)swap(cnt_s,cnt_t);
                    ll gc=__gcd(cnt_s,cnt_t);
                    gc=(cnt_s/gc)*(cnt_t/gc)*gc;
                    string tm_ans;
                    for(ll j=0; j<gc; j++)
                    {
                        tm_ans+=gcd;
                    }
                    if((ll)tm_ans.size()>(ll)ans.size())
                    {
                        ans=tm_ans;
                    }
                }
            }
        }
        if((ll)ans.size()>0)
        {
            cout<<ans<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }

    }
///*****************************  ALHAMDULILLAH  *****************************/
}