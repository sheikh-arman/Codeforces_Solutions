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
        string s;
        cin>>s;
        n=s.size();
        ll ck=0,zero=0,one=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                zero=1;
            }
            if(s[i]=='1')
            {
                one=1;
                if(i>0)
                {
                    if(s[i-1]=='0')
                    {
                        ck++;
                    }
                }
            }
        }
        if(s[n-1]=='0')ck++;
        if(zero==0)
        {
            cout<<"0\n";
        }
        else
        {
            if(one==0)
            {
                cout<<"1\n";
            }
            else
            {
                if(ck>1)
                {
                    cout<<"2\n";
                }
                else
                {
                    cout<<"1\n";
                }
            }
        }
    }
    return 0;
}