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
double PI = 2 * acos(0.0);
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        if(n%2!=0){
            NO;continue;
        }
        n/=2;
        ll sq=sqrt(n);
        if(sq*sq==n)
        {
            YES;
        }
        else
        {
            if(n%2!=0){
                NO;continue;
            }
            n/=2;
            ll sq2=sqrt(n);
            if(sq2*sq2==n)
            {
                YES;
            }
            else
                NO;
        }
    }
    return 0;
}