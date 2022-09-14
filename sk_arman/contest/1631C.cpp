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
        ll n,k;
        cin>>n>>k;
        vector<ll>V;
        vector<ll>V2;
        for(ll i=0; i<n/2; i++)
        {
            V.PB(i);
            V2.PB((n-i)-1);
        }
        if(k<n-1)
        {
            if(k<n/2)
            {
                swap(V[0],V[k]);
            }
            else
            {
                ll tm=(n-k)-1;
                swap(V[0],V2[tm]);
            }
            for(ll i=0; i<n/2; i++)
            {
                cout<<V[i]<<" "<<V2[i]<<"\n";
            }
        }
        else
        {
            if(n==4)
            {
                cout<<"-1\n";
            }
            else
            {
                swap(V[0],V2[1]);
                swap(V2[1],V[3]);
                for(ll i=0; i<n/2; i++)
                {
                    cout<<V[i]<<" "<<V2[i]<<"\n";
                }
            }
        }


        // cout<<"Case "<<test<<": "<<V[n]<<"\n";
    }
    return 0;
}