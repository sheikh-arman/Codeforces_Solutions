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
double PI = 2 * acos(0.0);
int dx[] = {0,0,1,-1,2,2,-2,-2,1,-1,1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1,2,2,-2,-2};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
ll SET(ll NUM,ll POS) {
    return NUM | (1<<POS);
}
bool isOn(ll NUM,ll POS) {
    return (bool)(NUM & (1<<POS));
}
ll pos[300010];
int main()
{
    fast;
    //freopen("1input.txt","r",stdin);
//    freopen("1output.txt","w",stdout);
    ll tcase=1;
    //sf1(tcase);
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<ll>V;
        ll n;
        cin>>n;
        V.PB(0);
        for(ll i=1;i<=n;i++){
            ll a;
            cin>>a;
            V.PB(a);
            pos[a]=i;
            //cout<<a<<" ";
        }//nl;
        vector<PR>ans;
        for(ll i=1;i<=n;i++){
            if(V[i]!=i){
                ll po=pos[i];
                if(abs(po-i)>=n/2){
                    ans.PB({i,po});
                    swap(V[i],V[po]);
                    swap(pos[V[i]],pos[V[po]]);
                }
                else{
                    if(i<n/2&&po<=n/2){
                        ans.PB({po,n});
                        swap(V[n],V[po]);
                        swap(pos[V[n]],pos[V[po]]);
                        ans.PB({i,n});
                        swap(V[n],V[i]);
                        swap(pos[V[n]],pos[V[i]]);
                    }
                    else if(i>n/2){
                        ans.PB({1,po});
                        swap(V[1],V[po]);
                        swap(pos[V[1]],pos[V[po]]);
                        ans.PB({1,i});
                        swap(V[1],V[i]);
                        swap(pos[V[1]],pos[V[i]]);
                        ans.PB({1,po});
                        swap(V[1],V[po]);
                        swap(pos[V[1]],pos[V[po]]);
                    }
                    else{
                        ans.PB({1,po});
                        swap(V[1],V[po]);
                        swap(pos[V[1]],pos[V[po]]);
                        ans.PB({1,n});
                        swap(V[1],V[n]);
                        swap(pos[V[1]],pos[V[n]]);
                        ans.PB({i,n});
                        swap(V[n],V[i]);
                        swap(pos[V[n]],pos[V[i]]);
                        ans.PB({1,po});
                        swap(V[1],V[po]);
                        swap(pos[V[1]],pos[V[po]]);
                    }
                }
            }
        }
        cout<<ans.size()<<"\n";
        for(auto i:ans){
            cout<<i.ff<<" "<<i.ss<<"\n";
        }

    }
///*****************************  ALHAMDULILLAH  *****************************/
}