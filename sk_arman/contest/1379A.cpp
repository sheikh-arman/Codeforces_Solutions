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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
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
#define T(n) printf("test %d\n",n)
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>V,V2,V3;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string s2="abacaba";
        ll ck=0;
        for(ll i=0; s[i]!='\0'; i++)
        {
            ll cnt=0;
            for(ll j=0; j<7; j++)
            {
                if(s[i+j]!=s2[j])
                {
                    break;
                }
                cnt++;
            }
            if(cnt>=7)ck++;
        }
        if(ck>1)
        {
            cout<<"No\n";
            continue;
        }
        if(ck==1)
        {
            for(ll i=0; s[i]!='\0'; i++)
            {
                if(s[i]=='?')s[i]='d';
            }
            cout<<"Yes\n";
            cout<<s<<"\n";
        }
        else
        {
            string result,tm;
            tm=s;
            ll siz=s.size();
            for(ll i=0; i<n; i++)
            {
                ll cnt=0;
                for(ll j=0; j<7; j++)
                {
                    if(s[i+j]=='?'&&ck==0)
                    {
                        s[i+j]=s2[j];
                        cnt++;
                        continue;
                    }
                    else if(s[i+j]!=s2[j])
                    {
                        break;
                    }
                    cnt++;
                }
                if(cnt>=7)ck++;
                if(ck==1)
                {
                    ll xx=0;
                    for(ll k=max(0LL,i-7); k<=min(n-1,i+14); k++)
                    {
                        ll cnt2=0;
                        for(ll j=0; j<7; j++)
                        {
                            if(s[k+j]!=s2[j])
                            {
                                break;
                            }
                            cnt2++;
                        }
                        if(cnt2>=7)xx++;
                    }
                    if(xx>1)
                    {
                        ck=0;
                        s=tm;
                    }
                    else break;
                }
                else{
                    s=tm;
                }
            }
            if(ck==1)
            {
                cout<<"Yes\n";
                for(ll i=0; s[i]!='\0'; i++)
                {
                    if(s[i]=='?')s[i]='d';
                }
                cout<<s<<"\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}
/*
15
abac??acabacab?
13
abaca??bacaba
13
abacab?bacaba

*/