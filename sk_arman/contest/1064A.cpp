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
double PI = 2 * acos(0.0);
ll SET(ll NUM,ll POS)
{
    return NUM | (1<<POS);
}
bool isOn(ll NUM,ll POS)
{
    return (bool)(NUM & (1<<POS));
}
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        vector<ll>V;
        for(ll i=0; i<3; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
        }
        VST(V);
        ll ans=0;
        if(V[0]+V[1]<=V[2]){
            ans=(V[2]-(V[0]+V[1]))+1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}