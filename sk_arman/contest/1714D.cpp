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
ll ar[110];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        string s;
        cin>>s;
        vector<string>pat;
        ll n=s.size();
        for(ll i=0; i<=n; i++)ar[i]=0;
        ll k;
        cin>>k;
        for(ll i=0; i<k; i++)
        {
            string s2;
            cin>>s2;
            pat.PB(s2);
        }
        vector<pair<ll,ll>>ans;
        ll ck2=1;
        ll ma=0,ind=0,pos=0;
        for(ll i=0; i<n; i++)
        {

            for(ll j=0; j<k; j++)
            {
                ll siz=pat[j].size();
                if(siz+i>n)
                {
                    continue;
                }
                ll ck=1;
                ll cnt=0;
                for(ll x=0; x<siz; x++)
                {
                    if(s[i+x]!=pat[j][x])
                    {
                        ck=0;
                        break;
                    }
                    if(ar[i+x]==0)
                    {
                        cnt++;
                    }
                }
                if(ck)
                {
                    if(ma<=cnt)
                    {
                        ma=cnt;
                        ind=j;
                        pos=i;
                    }
                }
            }
            if(ar[i]==0)
            {
                if(ma>0)
                {
                    ans.PB({ind+1,pos+1});
                    for(ll x=i; x<(i+ma); x++)
                    {
                        ar[x]=1;
                    }
                    ma=0;
                }
                else
                {
                    ck2=0;
                    break;
                }
            }
        }
        ll siz=ans.size();
        for(ll i=0;i<n;i++){
            if(ar[i]==0)ck2=0;
        }
        if(ck2)
        {

            cout<<siz<<"\n";
            for(ll i=0; i<siz; i++)
            {
                cout<<ans[i].first<<" "<<ans[i].second<<"\n";
            }
        }
        else
        {
            cout<<"-1\n";
        }

    }
    return 0;
}