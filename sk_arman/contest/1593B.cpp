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
        string s;
        cin>>s;
        ll n=s.size();
        ll ans=1111111110,zero=0,cnt=0;
        for(ll i=n-1; i>=0; i--)
        {
            cnt++;
            if(zero==0)
            {
                if(s[i]=='0')
                {
                    zero=1;
                }
            }
            else
            {
                if(s[i]=='0'||s[i]=='5')
                {
                    ans=cnt-2;
                    break;
                }
            }
        }
        ll five=0;
        cnt=0;
        for(ll i=n-1; i>=0; i--)
        {
            cnt++;
            if(five==0)
            {
                if(s[i]=='5')
                {
                    five=1;
                }
            }
            else
            {
                if(s[i]=='2'||s[i]=='7')
                {
                    ll val=cnt-2;
                    ans=min(ans,val);
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}