#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
ll ar[200010];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        vector<ll>V;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.PB(a);
        }
        string s;
        cin>>s;
        vector<pair<ll,ll>>zero,one;
        for(ll i=0;i<n;i++){
            if(s[i]=='0'){
                zero.PB({V[i],i});
            }
            else{
                one.PB({V[i],i});
            }
        }
        VST(one);
        VST(zero);
        ll cnt=zero.size();
        ll cnt2=n-cnt;
        while(cnt--){
            ar[zero[cnt].second+1]=cnt+1;
        }
        ll val=n;
        while(cnt2--){
            ar[one[cnt2].second+1]=val;
            val--;
        }

        for(ll i=1;i<=n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}