
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
    //fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        vector<ll>even,odd;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            if(a%2==0)
            {
                even.PB(a);
            }
            else
            {
                odd.PB(a);
            }
        }
        ll ck=1;
        ll siz=even.size();
        for(ll i=1; i<siz; i++)
        {
            if(even[i]<even[i-1])
            {
                ck=0;
                break;
            }
        }
        siz=odd.size();
        for(ll i=1; i<siz; i++)
        {
            if(odd[i]<odd[i-1])
            {
                ck=0;
                break;
            }
        }
        if(ck)
        {
            YES;
        }
        else
        {
            NO;
        }
    }
    return 0;
}