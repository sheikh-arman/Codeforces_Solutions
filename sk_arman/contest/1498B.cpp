#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll frequency[1000010];
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        set<ll>st;
        vector<ll>V;
        ll n,w;
        cin>>n>>w;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            st.insert(a);
            frequency[a]++;
        }
        vector<ll>slot;
        ll tm_w=w;
        ll cnt=0;
        while(tm_w)
        {
            if(tm_w%2!=0)
            {
                ll val=pow(2,cnt);
                slot.PB(val);
            }
            cnt++;
            tm_w/=2;
        }
		for(ll i:st){
			V.PB(i);
		}
        ll siz=slot.size();
        ll ans=0;
        reverse(slot.begin(),slot.end());
        reverse(V.begin(),V.end());
        while(1)
        {
            ll ck=0,extra=0;
            for(ll i=0; i<siz; i++)
            {
                extra+=slot[i];
                for(ll j:V)
                {
                	ll freq=frequency[j];
                    if(j<=extra&&freq>0)
                    {
						ll koto_bar=extra/j;
						ll mi=min(koto_bar,freq);
                        extra-=mi*j;
                        frequency[j]-=mi;
                        ck=1;
                    }
                }
            }
            if(ck==1)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<"\n";
        for(ll i:V){
			frequency[i]=0;
        }
    }
    return 0;
}