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
ll ck(string s)
{
    stack<ll>stk;
    ll n=s.size();
    for(ll i=0; i<n; i++)
    {
        if(stk.empty())
        {
            if(s[i]==')')return 0;
            stk.push(s[i]);
        }
        else
        {
            if(s[i]==')')
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
    }
    return stk.empty();
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
        string s,s2;
        cin>>s;
        s2=s;
        reverse(s2.begin(),s2.end());
        if(ck(s)||ck(s2))
        {
            cout<<"1\n";
            for(ll i=0; i<n; i++)
            {
                cout<<"1 ";
            }
            cout<<"\n";
            continue;
        }
        ll cnt=0;
        ll ar[n+1];
        for(ll i=0; i<n; i++)ar[i]=0;
        stack<pair<ll,ll>>stk;
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]==')')ans+=1;
            else ans-=1;
            if(stk.empty())
            {
                if(s[i]==')')
                {
                    ar[i]=2;
                }
                else
                    stk.push({s[i],i});
            }
            else
            {
                if(s[i]==')')
                {
                    ar[i]=ar[stk.top().second]=1;
                    stk.pop();
                }
                else
                {
                    stk.push({s[i],i});
                }
            }
        }
        while(!stk.empty())
        {
            ar[stk.top().second]=2;
            stk.pop();
        }
        if(ans==0)
        {
            cout<<"2\n";
            for(ll i=0; i<n; i++)
            {
                cout<<ar[i]<<" ";
            }
            cout<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }

    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}