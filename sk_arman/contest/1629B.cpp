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
        ll l,r,k;
        cin>>l>>r>>k;
        if(l==r&&l!=1){
            cout<<"YES\n";continue;
        }
        ll x=r/2+(r%2!=0);
        ll y=(l-1)/2+((l-1)%2!=0);
        ll ase=x-y;
        //if(l==1)ase++;
        if(ase<=k)
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