#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES printf("YES\n");
#define NO printf("NO\n");
#define nl printf("\n");
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
ll SET(ll NUM,ll POS)
{
    return NUM | (1<<POS);
}
bool isOn(ll NUM,ll POS)
{
    return (bool)(NUM & (1<<POS));
}
ll mat[510][510];
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                mat[i][j]=0;
            }
        }
        for(ll i=0; i<n; i++)
        {
            cin>>mat[i][i];
        }
        for(ll i=0; i<n; i++)
        {
            ll val=1;
            ll x=i,y=i;
            while(val<mat[i][i])
            {
                if(y-1>=0)
                {
                    if(mat[x][y-1]==0)
                    {

                        y--;
                        mat[x][y]=mat[i][i];

                    }
                    else
                    {
                        x++;
                        mat[x][y]=mat[i][i];

                    }
                }
                else
                {
                    x++;
                    mat[x][y]=mat[i][i];

                }
                val++;
            }
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<=i; j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}