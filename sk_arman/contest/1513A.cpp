#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
int main()
{
   // freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,k;
        cin>>n>>k;
        ll mx=n/2;
        if(n%2==0)mx--;
        if(k<=mx)
        {
            vector<ll>V;
            for(ll i=1; i<=n; i++)
            {
                V.PB(i);
            }
            cout<<V[0]<<" ";
            ll siz=V.size();
            for(ll i=1; i<siz; i++)
            {
                if(k>0)
                {
                    siz=V.size();
                    cout<<V[siz-1]<<" ";
                    V.pop_back();
                    k--;
                    cout<<V[i]<<" ";

                }
                else
                {
                    cout<<V[i]<<" ";
                }
                siz=V.size();
            }
            cout<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}