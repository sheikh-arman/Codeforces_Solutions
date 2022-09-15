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
ll age[200],pore[200],ar[200];
int main()
{
    fflush(stdout);
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    //fast;
    ll tcase=1;
    // cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,last,first;
        cin>>n;
        for(ll i=n; i>=1; i--)
        {
            cout<<"? ";
            for(ll j=1; j<=n; j++)
            {
                if(j==i)
                {
                    cout<<"1 ";
                }
                else
                {
                    cout<<"2 ";
                }
            }
            cout<<"\n";
            ll val;
            cin>>val;
            if(val==0)
            {
                age[i]=-1;
                first=i;
            }
            else
            {
                if(val!=i)
                {
                    age[i]=val;
                    pore[val]=i;
                }
            }
            cout<<"? ";
            for(ll j=1; j<=n; j++)
            {
                if(j==i)
                {
                    cout<<"2 ";
                }
                else
                {
                    cout<<"1 ";
                }
            }
            cout<<"\n";
            cin>>val;
            if(val==0)
            {
                pore[i]=-1;
                last=i;
            }
            else
            {
                if(val!=i)
                {
                    pore[i]=val;
                    age[val]=i;
                }
            }
        }
        ar[last]=n;
        ar[first]=1;
        ll val=n-1;
        while(val>1)
        {
            last=age[last];
            ar[last]=val--;
        }
        cout<<"! ";
        for(ll i=1; i<=n; i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}