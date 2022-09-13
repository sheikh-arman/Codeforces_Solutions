#include<bits/stdc++.h>
using namespace std;
#define PB push_back
typedef long long int ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1000000007
#define  MOD2  1928476349
#define MAX 200010
ll mem[MAX+100][12];
int main()
{
    for(ll i=0; i<10; i++)mem[0][i]=1;
    for(ll i=1; i<MAX; i++)
    {
        for(ll j=0; j<10; j++)
        {
            if(j==9)
            {
                mem[i][j]=mem[i-1][0];
                mem[i][j]%=MOD1;
                mem[i][j]+=mem[i-1][1];
            }
            else
            {
                mem[i][j]=mem[i-1][j+1];
            }
            mem[i][j]%=MOD1;
        }
    }
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        cin>>n>>m;
        ll ans=0;
        while(n)
        {
            ll val=n%10;
            n/=10;
            ans+=mem[m][val];
            ans%=MOD1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}