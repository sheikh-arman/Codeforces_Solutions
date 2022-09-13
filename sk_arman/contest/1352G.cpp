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
typedef  int ll;
using namespace std;

///policy begin
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        policy_set;
///policy end
//ll big_mod(ll base,ll power,ll Mod){if(power==0){return 1;}else if(power%2==1){ll p1=base%Mod;ll p2=(big_mod(base,power-1,Mod))%Mod;return (p1*p2)%Mod;}else if(power%2==0){ll p1=(big_mod(base,power/2,Mod))%mod;return (p1*p1)%Mod;}}
class PAIR
{
public:
    ll first;
    ll second;
    ll third;
};
deque<ll>V;
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
        V.clear();
       ll n;
       cin>>n;
       if(n<=3){
        cout<<"-1\n";continue;
       }
       if(n==4){
        cout<<"3 1 4 2\n";continue;
       }
       for(ll i=1;i<=n;i+=2){
          cout<<i<<" ";
       }
       V.clear();
       for(ll i=2;i<=n;i+=2){
           V.PB(i);
       }
       ll siz=V.size();
       if(n%2==0){
        swap(V[siz-1],V[siz-3]);
       swap(V[siz-2],V[siz-3]);
       }
       else{
        swap(V[siz-1],V[siz-2]);
       }

       for(ll i=siz-1;i>=0;i--)
        cout<<V[i]<<" ";
       nl;





    }
///*****************************  ALHAMDULILLAH  *****************************/
}