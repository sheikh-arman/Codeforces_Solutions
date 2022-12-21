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
ll ar[4][4];
ll ck()
{
    if((ar[1][1]<ar[1][2])&&(ar[1][1]<ar[2][1])&&(ar[1][2]<ar[2][2])&&(ar[2][1]<ar[2][2]))
    {
        return 1;
    }
    else return 0;
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
        for(ll i=1; i<=2; i++)
        {
            for(ll j=1; j<=2; j++)
            {
                cin>>ar[i][j];
            }
        }
        ll chk=0;
        for(ll i=0; i<4; i++)
        {
            chk|=ck();
            swap(ar[1][1],ar[1][2]);
            swap(ar[1][1],ar[2][2]);
            swap(ar[1][1],ar[2][1]);
        }

        if(chk)
        {
            YES;
        }
        else
        {
            NO;
        }
    }
    return 0;
}