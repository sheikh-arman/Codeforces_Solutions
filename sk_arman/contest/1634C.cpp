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
ll mat[510][510];
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
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<k; j++)
            {
                mat[i][j]=0;
            }
        }
        deque<ll>V_odd,V_even;
        for(ll i=1; i<=n*k; i++)
        {
            if(i%2==0)
            {
                V_even.PB(i);
            }
            else
            {
                V_odd.PB(i);
            }
        }
        ll ck=1;
        for(ll i=0; i<n&&ck; i++)
        {
            for(ll j=0; j<k; j++)
            {
                if(i%2==0)
                {
                    if(V_odd.size()>0)
                    {
                        mat[i][j]=V_odd[0];
                        V_odd.pop_front();
                    }
                    else
                    {
                        ck=0;
                        break;
                    }
                }
                else
                {
                    if(V_even.size()>0)
                    {
                        mat[i][j]=V_even[0];
                        V_even.pop_front();
                    }
                    else
                    {
                        ck=0;
                        break;
                    }
                }
            }
        }
        if(ck){
            YES;
            for(ll i=0;i<n;i++){
                for(ll j=0;j<k;j++){
                    cout<<mat[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
        else{
            NO;
        }
    }
    return 0;
}