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
//    /freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,mo=1000000000000000,a,l,r,m;
        cin>>l>>r>>m;
        for(ll i=l; i<=r; i++)
        {
            ll tm=m/i;
            ll x=m-(tm*i);
            ll y=((tm+1)*i)-m;
            if(x<mo)
            {
                a=i;
                n=tm;
                mo=x;
            }
            if(y<mo)
            {
                a=i;
                n=tm+1;
                mo=y;
            }
        }
        ll b,c;
        if(n==0){
            n=1;
            a=l;
        }
        if(a*n>=m)
        {
            ll dif=(a*n)-m;
            cout<<a<<" "<<l<<" "<<l+dif<<"\n";
        }
        else
        {
            ll dif=m-(a*n);
            cout<<a<<" "<<l+dif<<" "<<l<<"\n";
        }


    }
///*****************************  ALHAMDULILLAH  *****************************/
}