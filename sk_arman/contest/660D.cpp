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
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        vector< pair<ll,ll> >V;
        vector< pair<double,double> >ans;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            ll a,b;
            cin>>a>>b;
            V.PB({a,b});
        }
        for(ll i=0; i<n-1; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                double midx=(V[i].first+V[j].first)/2.0;
                double midy=(V[i].second+V[j].second)/2.0;
                ans.PB({midx,midy});
            }
        }
        VST(ans);
        ll siz=ans.size();
        ll res=0;
        for(ll i=0; i<siz; i++)
        {
            ll left=i+1,cnt=1;
            while(left<siz)
            {
                if(ans[i].first!=ans[left].first||ans[i].second!=ans[left].second)
                {
                    break;
                }
                cnt++;
                left++;
            }
            i=left-1;
            res+=(cnt*(cnt-1))/2;
        }
        cout<<res<<"\n";
    }
    return 0;
}