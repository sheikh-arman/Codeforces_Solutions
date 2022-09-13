#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
ll mod=1e9+7;
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,k;
        cin>>n>>k;
        ll ans=n;
//        for(ll i=1; i<=n; i++)
//        {
//            ans*=i;
//            ans%=mod;
//        }
        ll res=1;
        ll val=pow(2,k)-1;
        while(val>0)
        {
            if(val%2!=0)
            {

            }
            res*=ans;
            res%=mod;
            val/=2;
        }
        cout<<res<<"\n";
    }
    return 0;
}