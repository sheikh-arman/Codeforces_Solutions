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
        set<ll>st_odd,st_ev;
        vector<ll>V;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            if(a%2==0)st_ev.insert(a);
            else st_odd.insert(a);
        }
        ll ck=1;
        for(ll i=0; i<n; i++)
        {
            ll cnt=0,cc=0;
            if(V[i]%2!=0)
            {
                for(ll j:st_odd)
                {
                    if(cnt>2)break;
                    if(V[i]>j)
                    {
                        cc=1;
                    }
                    cnt++;
                }
                if(cc==0)
                {
                    ck=0;
                    break;
                }
            }
        }
        if(ck)
        {
            YES;
        }
        else
        {
            ck=1;
            for(ll i=0; i<n; i++)
            {
                ll cnt=0,cc=0;
                if(V[i]%2==0)
                {
                    for(ll j:st_odd)
                    {
                        if(cnt>2)break;
                        if(V[i]>j)
                        {
                            cc=1;break;
                        }
                        cnt++;
                    }
                    if(cc==0)
                    {
                        ck=0;
                        break;
                    }
                }
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
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}