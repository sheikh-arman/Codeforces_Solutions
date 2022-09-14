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
        vector<ll>V,V2;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
        }
        if(n==3)
        {
            if(V[1]%2==0)
            {
                cout<<V[1]/2<<"\n";
            }
            else
            {
                cout<<"-1\n";
            }
        }
        else
        {
            ll ans=0;
            for(ll i=1; i<n-1; i++)V2.PB(V[i]);
            V=V2;
            VST(V);
            reverse(V.begin(),V.end());
            ll cnt=0;
            for(ll i=0; i<n-2; i++)
            {
                ans+=(V[i]/2);
                if(V[i]%2!=0)
                {
                    ans++;
                }
                if(V[i]>1)cnt++;
            }
            if(cnt==0)ans=-1;
            cout<<ans<<"\n";
        }

    }
    return 0;
}