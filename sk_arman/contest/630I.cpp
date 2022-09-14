/**      BU_Excalibur      **/
/** University of Barishal **/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binpow(ll base, ll power)
{
    // If mod is prime, power=power%(mod-1);
    ll result=1;
    while(power>0){
        if(power&1)result=(result*base);
        base=(base*base);
        power>>=1;
    }
    return result;
}
ll bigMul(ll a, ll b, ll mod)
{
    if(a==0)return 0;
    ll ans=(2*bigMul(a/2,b,mod))%mod;
    if(a&1)ans=(ans+(b%mod))%mod;
    return ans;
}

int main()
{
    /***************************************/
    // Site Name        : Codeforces
    // Problem No/ID    : 630I
    /***************************************/
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    ll space=(2*n)-2;
    space-=(n-1);
    ll ans=0;
    if(space-2>0){
       ans=binpow(4,space-2);
        ans=ans*3*3;
        ans*=space-2;
    }
    ans+=2*binpow(4,space-1)*3;
    cout<<ans<<"\n";
    return 0;
}