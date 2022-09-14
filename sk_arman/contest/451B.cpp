
/*
    Sk arman Hossain
    University of Barisal

    Problem name :
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
#define DST(v) sort(v.begin(),v.end(),greater<ll>())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
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
vector<ll>V,V2;
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
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.PB(a);
            V2.PB(a);
        }
        ll fast=-1,last=-1;
        VST(V);
        for(ll i=0;i<n;i++){
            if(V[i]!=V2[i]){
                fast=i;break;
            }
        }
        for(ll i=0;i<n;i++){
            if(V[i]!=V2[i]){
               last=i;
            }
        }
        if(fast==-1){
            cout<<"yes 1 1\n";
        }
        else{
            ll pos1=fast,pos2=last,ck=1;
            for(ll i=pos1;i<=pos2;i++){
                if(V2[i]!=V[last--]){
                    ck=0;break;
                }
            }
            if(ck){
                cout<<"yes\n";
                cout<<pos1+1<<" "<<pos2+1<<"\n";
            }
            else{
                cout<<"no\n";
            }
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}