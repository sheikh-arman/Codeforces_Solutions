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
#define PI 3.1415926536
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
#define N 200001
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
ll ar[200010];
int main()
{
    fast;
    //freopen("1input.txt","r",stdin);
//    freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<ll>V;
        ll n;
        cin>>n;
        set<ll>st;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            st.insert(a);
            mp[a]++;
            ar[i]=0;
        }
        for(ll i:st){
            V.PB(mp[i]);
            //cout<<mp[i]<<" ";
        }
        //cout<<"\n";
        VST(V);
        ar[n]=0;
        ll sum=0;
        ll siz=V.size();
        for(ll i=0;i<siz;i++){
            sum+=V[i];
            ar[i]=sum;
        }
        ar[siz]=sum;
        ll ans=999999999999;
        for(ll i=0;i<siz;i++){
            ll tm,val=V[i];
            ll cnt=(siz-i);
            cnt*=V[i];
            ll bade=0;
            ll total=0;
            if(i-1>=0){
                bade=ar[i-1];
                total=sum-ar[i-1];
            }
            else{
                total=sum;
            }
            total+=bade;
            total-=cnt;
            ans=min(ans,total);
           // cout<<V[i]<<" "<<total<<" "<<cnt<<"\n";
        }
        cout<<ans<<"\n";
    }
///*****************************  ALHAMDULILLAH  *****************************/
}