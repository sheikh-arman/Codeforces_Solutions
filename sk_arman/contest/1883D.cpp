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
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,siz=0;
        cin>>n;
        set<pair<ll,ll>>st1,st2;
        map<pair<ll,ll>,ll>mp;
        for(ll i=0; i<n; i++)
        {
            char ch;
            cin>>ch;
            if(ch=='+')
            {
                ll l,r;
                cin>>l>>r;
                st1.insert({r,l});
                st2.insert({l,r});
                mp[ {l,r}]++;
                siz++;
                if(siz==1)
                {
                    NO;
                    continue;
                }
                auto pos=st1.begin();
                auto pos2=st2.lower_bound({pos->first+1,0});
                if(pos2==st2.end())
                {
                    NO;
                    continue;
                }
                else
                {
                    while(mp[ {pos->second,pos->first}]==0)
                    {
                        st1.erase(pos);
                        pos=st1.begin();
                    }
                    pos2=st2.lower_bound({pos->first+1,0});
                    while(pos2!=st2.end()&&mp[ {pos2->first,pos2->second}]==0)
                    {
                        st2.erase(pos2);
                        pos2=st2.lower_bound({pos->first+1,0});
                    }
                    if(pos2!=st2.end())
                    {
                        YES;
                    }
                    else
                    {
                        NO;
                    }
                }
            }
            else
            {
                ll l,r;
                cin>>l>>r;
                mp[ {l,r}]--;
                siz--;
                if(siz<2)
                {
                    NO;
                    continue;
                }
                auto pos=st1.begin();
                auto pos2=st2.lower_bound({pos->first+1,0});
                if(pos2==st2.end())
                {
                    NO;
                    continue;
                }
                else
                {
                    while(mp[ {pos->second,pos->first}]==0)
                    {
                        st1.erase(pos);
                        pos=st1.begin();
                    }
                    pos2=st2.lower_bound({pos->first+1,0});
                    while(pos2!=st2.end()&&mp[ {pos2->first,pos2->second}]==0)
                    {

                        st2.erase(pos2);
                        pos2=st2.lower_bound({pos->first+1,0});
                    }
                    if(pos2!=st2.end())
                    {
                        YES;
                    }
                    else
                    {
                        NO;
                    }
                }

            }

        }

    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}