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
ll ar[3][200010];
string s[3];
ll n,cnt;
ll sol(ll x,ll y)
{
    for(ll i=0; i<2; i++)
    {
        for(ll j=0; j<n; j++)
        {
            ar[i][j]=1;
        }
    }
    ar[x][y]=0;
    ll cn=1;
    while(cn<cnt)
    {
        ll ck=0;
        if(ar[1-x][y]&&s[1-x][y]=='B')
        {
            cn++;
            x=1-x;
            ar[x][y]=0;
            continue;
        }
        else if(y+1<n)
        {
            if(ar[x][y+1]&&s[x][y+1]=='B')
            {
                y++;
                cn++;
                ar[x][y]=0;
                continue;
            }
        }
        break;
    }
    return (cn==cnt);
}
int main()
{
   // freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        cnt=0;
        cin>>n;
        for(ll i=0; i<2; i++)
        {
            cin>>s[i];
            for(ll j=0; j<n; j++)
            {
                if(s[i][j]=='B')
                {
                    cnt++;
                }
            }
        }
        ll ck=0;
        if(s[0][0]=='B')
        {
            ck|=sol(0,0);
        }
        if(!ck&&s[1][0]=='B')
        {
            ck|=sol(1,0);
        }
        if(ck)
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