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
int main()
{
     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//    /freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,cnt=0;
        cin>>n;
        string s1,s2;
        vector<ll>V;
        cin>>s1>>s2;
        ll l=0,r=n-1,pos=n-1;
        for(ll i=n-1; i>=0; i--)
        {
            if(cnt%2==0)
            {
                if(s1[r]!=s2[i])
                {
                    if(s1[l]==s2[i])
                    {
                        V.PB(1);
                        V.PB(i+1);
                        cnt++;
                        l++;
                    }
                    else
                    {
                        V.PB(i+1);
                        cnt++;
                        l++;
                    }
                }
                else{
                    r--;
                }
            }
            else
            {
                if(s1[l]==s2[i])
                {
                    if(s1[r]!=s2[i])
                    {
                        V.PB(1);
                        V.PB(i+1);
                        cnt++;
                        r--;
                    }
                    else
                    {
                        V.PB(i+1);
                        cnt++;
                        r--;
                    }
                }
                else {
                        l++;
                }
            }
        }
        ll siz=V.size();
        cout<<siz;
        for(ll i=0; i<siz; i++)
        {
            cout<<" "<<V[i];
        }
        cout<<"\n";

    }
///*****************************  ALHAMDULILLAH  *****************************/
}