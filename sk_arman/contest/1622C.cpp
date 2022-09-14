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

int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,k,sum=0;
        cin>>n>>k;
        vector<ll>V;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.PB(a);
            sum+=a;
        }
        if(sum<=k){
            cout<<"0\n";continue;
        }
        VST(V);
        ll ans=99999999999999999;
        ans=min(ans,sum-k);
        ll sum_new=0;
        for(ll i=n-1;i>0;i--){
            sum_new+=V[i]-V[0];
            ll cnt=n-i;
            ll tm_sum=sum-sum_new;
            ll dif=tm_sum-k;
            if(dif<=0){
                ans=min(ans,cnt);
                continue;
            }
            ll di=dif/(cnt+1);
            if(dif%(cnt+1)!=0)di++;
            cnt+=di;
            ans=min(ans,cnt);
        }
        cout<<ans<<"\n";
    }
    return 0;
}