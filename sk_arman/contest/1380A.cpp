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
ll ar[1011],ar2[1010];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//    /freopen("1input.txt","r",stdin);
//    /freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<ll>V;
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.PB(a);
        }
        ll mi=LONG_MAX,ind=0;
        for(ll i=0;i<n;i++){
            if(V[i]<mi){
                mi=V[i];ind=i;
            }
            ar[i]=ind;
        }
        mi=LONG_MAX,ind=n-1;
        for(ll i=n-1;i>=0;i--){
            if(V[i]<mi){
                mi=V[i];ind=i;
            }
            ar2[i]=ind;
        }
        ll pos1=0,pos2=0,pos3=0;
        for(ll i=1;i<n-1;i++){
            if(V[ar[i]]<V[i]&&V[ar2[i]]<V[i]){
                pos1=ar[i];
                pos2=i;
                pos3=ar2[i];break;
            }
        }
        if(pos1!=pos2){
            YES;
            cout<<pos1+1<<" "<<pos2+1<<" "<<pos3+1<<"\n";
        }
        else{
            NO;
        }

    }
///*****************************  ALHAMDULILLAH  *****************************/
}