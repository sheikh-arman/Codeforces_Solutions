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
map<string,ll>mp;
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        mp.clear();
        ll n;
        cin>>n;
        ll ck=0;
        vector<string>V;
        for(ll i=0; i<n; i++)
        {
            string tm;
            cin>>tm;
            if((ll)tm.size()==1)
            {
                ck=1;
            }
            else if((ll)tm.size()==2)
            {
                if(tm[0]==tm[1])
                    ck=1;
            }
            else if((ll)tm.size()==3)
            {
                if(tm[0]==tm[2])
                    ck=1;
            }
            V.PB(tm);
            mp[tm]=1;
            string s=tm;
            reverse(s.begin(),s.end());
            if(mp[s]==1)
            {
                ck=1;
                // cout<<" test\n";
            }
            s.clear();
            ll siz=tm.size();
            for(ll j=siz-1; j>=1; j--)
            {
                s+=tm[j];
            }
            if(mp[s]==1)
            {
                ck=1;
                //cout<<s<<" tt\n";
            }
        }
        if(ck)
        {
            cout<<"YES\n";
            continue;
        }
        mp.clear();
        for(ll i=n-1; i>=0; i--)
        {
            string tm=V[i];
            mp[tm]=1;
            string s=tm;
            reverse(s.begin(),s.end());
            if(mp[s]==1)
            {
                ck=1;
            }
            s.clear();
            ll siz=tm.size();
            for(ll j=siz-2; j>=0; j--)
            {
                s+=tm[j];
            }
            if(mp[s]==1)
            {
                ck=1;
            }
        }
        if(ck)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    return 0;
}