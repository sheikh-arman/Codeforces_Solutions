/*
    Sk arman Hossain
    University of Barisal

    Problem name :
    Algorithm :
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
ll n,need,cnt1,cnt2;
string s,s2;
void dp(ll pos,ll val){
    if(pos>=n){
            if(val==need){
                cnt1++;
            }
            cnt2++;
            //cout<<val<<" x\n";
        return;
    }
    if(s[pos]=='+'){
        dp(pos+1,val+1);
    }
    else if(s[pos]=='-'){
        dp(pos+1,val-1);
    }
    else{
        dp(pos+1,val+1);
        dp(pos+1,val-1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//    /freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        need=cnt1=cnt2=0;
        cin>>s2>>s;
        n=s.size();
        for(ll i=0;i<n;i++){
            if(s2[i]=='+')need++;
            else need--;
        }
        dp(0,0);
        double ans=(double)cnt1/cnt2;
        cout<<fixed<<setprecision(10)<<ans<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
}