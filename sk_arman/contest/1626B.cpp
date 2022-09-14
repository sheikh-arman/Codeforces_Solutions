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
        string s;
        cin>>s;
        n=s.size();
        ll pos=0,ma=-1,ck=0;
        for(ll i=0; i<n-1; i++)
        {
            ll tm1=s[i]-'0';
            ll tm2=s[i+1]-'0';
            if(tm1+tm2>9)
            {
                pos=i;
                ma=tm1+tm2;
                ck=1;
            }
        }
        if(ck)
        {
            for(ll i=0; i<n; i++)
            {
                if(i==pos)
                {
                    cout<<ma;
                    i++;
                    continue;
                }
                cout<<s[i];
            }
            cout<<"\n";
        }
        else
        {
            ll tm1=s[0]-'0';
            ll tm2=s[1]-'0';
            cout<<tm1+tm2;
            for(ll i=2; i<n; i++)
            {
                cout<<s[i];
            }
            cout<<"\n";
        }

    }
    return 0;
}