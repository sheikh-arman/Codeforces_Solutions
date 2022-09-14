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
string s[55];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m,r,c,ck=0;
        cin>>n>>m>>r>>c;
        r--;
        c--;
        for(ll i=0; i<n; i++)
        {
            cin>>s[i];
            for(ll j=0; j<m; j++)
            {
                if(s[i][j]=='B')ck=1;
            }
        }
        if(s[r][c]=='B')
        {
            cout<<"0\n";
            continue;
        }
        if(!ck)
        {
            cout<<"-1\n";
            continue;
        }

        ll ck2=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i][c]=='B')ck2=1;
        }
        for(ll i=0; i<m; i++)
        {
            if(s[r][i]=='B')ck2=1;
        }
        if(ck2)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"2\n";
        }
    }
    return 0;
}