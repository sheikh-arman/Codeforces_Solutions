/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
    Date:
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

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
ll dx[]= {1,-1,0,0,1,-1,-1,1};
ll dy[]= {0,0,1,-1,1,1,-1,-1};
ll knx[]= {2,2,1,-1,-2,-2,1,-1};
ll kny[]= {1,-1,2,2,1,-1,-2,-2};

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(ll l, ll r)
{
    return uniform_int_distribution<ll>(l, r) (rng);
}

int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        ll left=1,right=n*n;
        vector<ll>V;
        ll ck=1;
        ll x=n*n;
        while(x--)
        {
            if(ck)
            {
                V.PB(left++);
            }
            else
            {
                V.PB(right--);
            }
            ck=1-ck;
        }
        ll cnt=0;
        ck=0;
        for(ll i=0; i<n; i++)
        {
            vector<ll>V2;
            for(ll j=0; j<n; j++)
            {
                V2.PB(V[cnt++]);
            }
            if(ck){
                reverse(V2.begin(),V2.end());
            }
            ck=1-ck;
            for(ll j=0;j<n;j++){
                cout<<V2[j]<<" ";
            }
            cout<<"\n";
        }




    }
    return 0;
}