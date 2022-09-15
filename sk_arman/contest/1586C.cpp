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
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        cin>>n>>m;
        string s[n+2];
        for(ll i=0; i<n; i++)
        {
            cin>>s[i];
        }
        ll ar[n+2][m+2];
        for(ll i=0; i<m; i++)
        {
            ar[0][i]=0;
        }
        for(ll i=0; i<n; i++)
        {
            ar[i][0]=0;
        }
        for(ll i=1; i<n; i++)
        {
            for(ll j=1; j<m; j++)
            {
                if(s[i-1][j]=='X'&&s[i][j-1]=='X')
                {
                    ar[i][j]=1;
                }
                else
                {
                    ar[i][j]=0;
                }
            }
        }
        ll V[m+5],V_cum[m+5],ans=0;
        for(ll i=0; i<=m; i++)V[i]=0;
        for(ll i=0; i<m; i++)
        {
            ll cnt=0;
            for(ll j=0; j<n; j++)
            {
                if(ar[j][i]==1)
                {
                    cnt++;
                }
            }
            V[i]=cnt;
        }
        V[m]=0;
        for(ll i=m-1; i>=0; i--)
        {
            ans+=V[i];
            V_cum[i]=V_cum[i+1]+V[i];
           // cout<<V_cum[i]<<" x\n";
        }
        ll q;
        cin>>q;
        for(ll i=0; i<q; i++)
        {
            ll a,b;
            cin>>a>>b;
            a--;
            b--;
            ll ck=V_cum[a]-V_cum[b+1];
            ll one=V[a];
            //cout<<ck<<" "<<one<<" x\n";
            if(ck>one)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
    }
    return 0;
}