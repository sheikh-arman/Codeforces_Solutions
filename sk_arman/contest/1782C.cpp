/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
    Date:
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

#define sf(n) scanf("%lld",&n);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define nl cout<<"\n";
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
#define T(n) printf("test : %d\n",n);
ll dx[]= {1,-1,0,0,1,-1,-1,1};
ll dy[]= {0,0,1,-1,1,1,-1,-1};
ll knx[]= {2,2,1,-1,-2,-2,1,-1};
ll kny[]= {1,-1,2,2,1,-1,-2,-2};

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(ll l, ll r)
{
    return uniform_int_distribution<ll>(l, r) (rng);
}
vector<ll>edj[30],V;
vector<pair<ll,ll>>V2;
ll ar[30];
ll n;
string s;
ll chk(ll val){
    vector<ll>V3;
    V3=V;
    ll slot=n/val;
    ll sum=0;
    for(ll i=0;i<26-val;i++){
        sum+=V[i];
    }
    ll cost=sum,ans=0;
    //cout<<val<<" "<<cost<<" xx\n";
    for(ll i=26-val;i<(ll)V.size();i++){
        if(sum){
            ll need=slot-V[i];
            ll mi=min(need,sum);
            sum-=mi;
            V[i]+=mi;
        }
        ans+=abs(slot-V[i]);
    }
    cost+=ans/2;
    V=V3;
    return cost;
}
string print(ll val){
    ll slot=n/val;
    vector<ll>dq;
    for(ll i=0;i<26-val;i++){
        for(ll j:edj[V2[i].second]){
            dq.push_back(j);
        }
        edj[V2[i].second].clear();
    }
    for(ll i=26-val;i<(ll)V.size();i++){
        while(V[i]>slot){
            V[i]--;
            dq.PB(edj[V2[i].second][edj[V2[i].second].size()-1]);
            edj[V2[i].second].pop_back();
        }
    }
    for(ll i=26-val;i<(ll)V.size();i++){
        while((ll)dq.size()>0&&V[i]<slot){
            edj[V2[i].second].PB(dq[dq.size()-1]);
            dq.pop_back();
            V[i]++;
        }
    }
    string ss;
    for(ll i=0;i<n;i++)ss+='a';
    for(ll i=0;i<26;i++){
        for(ll j:edj[i]){
            ss[j]=(char)(i+'a');
        }
    }
    return ss;
}
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        V.clear();
        V2.clear();
        for(ll i=0;i<26;i++){
            edj[i].clear();
            ar[i]=0;
        }
        cin>>n;
        cin>>s;
        for(ll i=0;i<n;i++){
            ar[s[i]-'a']++;
            edj[s[i]-'a'].PB(i);
        }
        for(ll i=0;i<26;i++){
            V.PB(ar[i]);
            V2.PB({ar[i],i});
        }
        sort(V2.begin(),V2.end());
        sort(V.begin(),V.end());
        ll ans=1,cost=n+1;
        for(ll i=1;i<=26;i++){
            if(n%i==0){
                ll ck=chk(i);
                if(ck<cost){
                    ans=i;
                    cost=ck;
                }
            }
        }
        cout<<cost<<"\n";
        s=print(ans);
        cout<<s<<"\n";
    }
    return 0;
}