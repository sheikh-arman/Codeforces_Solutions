#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES printf("YES\n");
#define NO printf("NO\n");
#define nl printf("\n");
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
ll SET(ll NUM,ll POS)
{
    return NUM | (1<<POS);
}
bool isOn(ll NUM,ll POS)
{
    return (bool)(NUM & (1<<POS));
}

ll mxx=1e18;
int main()
{
    vector<ll>V;
    ll ans=2050;
//    for(ll i=1;; i++)
//    {
//        if(ans>mxx)break;
//        V.PB(ans);
//        ans*=10;
//    }
    for(ll i:V)
    {
        cout<<i<<" ";
    }
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        if(n%2050==0){
            n=n/2050;
            while(n){
                cnt+=(n%10);n/=10;
            }
        }
        else{
            cnt=-1;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}