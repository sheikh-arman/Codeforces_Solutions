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
        ll n,sum=0;
        cin>>n;
        vector<ll>V1,V2;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            sum+=a;
            V1.PB(sum);
        }
        sum=0;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            sum+=a;
            V2.PB(sum);
        }
        ll ans=LONG_MAX;
        for(ll i=0;i<n;i++){
            ll tm;
            if(i==0){
                tm=V1[n-1]-V1[0];
            }
            else if(i==n-1){
                tm=V2[n-2];
            }
            else{
                tm=max(V2[i-1],V1[n-1]-V1[i]);
            }
            ans=min(ans,tm);

        }

        cout<<ans<<"\n";
    }
    return 0;
}