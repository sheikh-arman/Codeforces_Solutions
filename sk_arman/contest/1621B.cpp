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
        ll mi,ma,cost,mi_pos=0,ma_pos=0,ma_cost=0,mi_cost=0;
        cin>>mi>>ma>>cost;
        cout<<cost<<"\n";
        mi_cost=ma_cost=cost;
        ll special_mi=mi,special_ma=ma,special_cost=cost;
        for(ll i=1; i<n; i++)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            if(a<=mi&&b>=ma)
            {
                if(a==special_mi&&b==special_ma)
                {
                    special_cost=min(special_cost,c);
                }
                else
                {
                    special_cost=c;
                    special_mi=a;
                    special_ma=b;
                }
            }
            if(a==mi)
            {
                if(mi_cost>=c)
                {
                    mi_cost=c;
                    mi_pos=i;
                }
            }
            if(a<mi)
            {
                mi_pos=i;
                mi_cost=c;
                mi=a;
            }
            if(b==ma)
            {
                if(ma_cost>=c)
                {
                    ma_cost=c;
                    ma_pos=i;
                }
            }
            if(b>ma)
            {
                ma_pos=i;
                ma_cost=c;
                ma=b;
            }
            if(ma_pos==mi_pos)
            {
                if(special_mi==mi&&special_ma==ma)
                {
                    cout<<(ll)min(special_cost,mi_cost)<<"\n";
                }
                else
                cout<<mi_cost<<"\n";
            }
            else
            {
                if(special_mi==mi&&special_ma==ma)
                {
                    cout<<(ll)min(special_cost,mi_cost+ma_cost)<<"\n";
                }
                else
                    cout<<mi_cost+ma_cost<<"\n";
            }
        }

    }
    return 0;
}