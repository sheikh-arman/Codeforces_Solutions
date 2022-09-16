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
ll ar[100010];
map<ll,ll>mp;
vector<ll>V;
void rec(ll i,ll j)
{
    if(i>=j)
    {
        mp[ar[i]-ar[i-1]]=1;
        return;
    }
    ll tm=(V[j-1]+V[i-1])/2;
    ll pos=upper_bound(V.begin()+i-1,V.begin()+j,tm)-V.begin();
    //cout<<i<<" "<<j<<" "<<pos<<" t\n";
    //pos--;pos++;
    mp[ar[pos]-ar[i-1]]=1;
    mp[ar[j]-ar[pos]]=1;
    if(tm!=V[j-1]){
      rec(i,pos);
        rec(pos+1,j);
    }

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("1input.txt","r",stdin);
//    freopen("1output.txt","w",stdout);
    ll tcase=100;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        V.clear();
        mp.clear();
        ll n,m;
        cin>>n>>m;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            ar[i]=0;
        }
        ar[n]=0;
        VST(V);
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            sum+=V[i];
            ar[i+1]=sum;
        }
        mp[sum]=1;
//        for(ll i=0;i<n;i++){
//            cout<<V[i]<<" "<<ar[i+1]<<"\n";
//        }
        rec(1,n);
        for(ll i=0; i<m; i++)
        {
            ll a;
            cin>>a;
            if(mp.count(a))
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }

    }
///*****************************  ALHAMDULILLAH  *****************************/
}