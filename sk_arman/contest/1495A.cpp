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
    cout<<setprecision(15);
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        vector<ll>diamond,mine;
        for(ll i=0; i<2*n; i++)
        {
            ll a,b;
            cin>>a>>b;
            a=abs(a);
            b=abs(b);
            if(a==0)
            {
                mine.PB(b);
            }
            else
            {
                diamond.PB(a);
            }
        }
        VST(diamond);
        VST(mine);double ans=0;
        for(ll i=0;i<n;i++){
            double tm=(diamond[i]*diamond[i])+(mine[i]*mine[i]);
            tm=sqrt(tm);
            ans+=tm;
        }
        cout<<ans<<"\n";
    }
    return 0;
}