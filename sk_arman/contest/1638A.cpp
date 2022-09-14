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
        ll n;
        cin>>n;
        vector<ll>V;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
        }
        for(ll i=0; i<n; i++)
        {
            if(V[i]==i+1)
            {
                cout<<i+1<<" ";
            }
            else
            {
                ll pos=n;
                for(ll j=i+1; j<n; j++)
                {
                    if(V[j]==i+1)
                    {
                        pos=j;
                        break;
                    }
                }
                for(ll j=pos; j>=i; j--)
                {
                    cout<<V[j]<<" ";
                }
                for(int j=pos+1; j<n; j++)
                {
                    cout<<V[j]<<" ";
                }
                break;
            }
        }
        cout<<"\n";

    }
    return 0;
}