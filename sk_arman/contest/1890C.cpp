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
        string s2;
        cin>>s2;
        deque<char>s;
        for(ll i=0; i<n; i++)s.PB(s2[i]);
        if(n%2)
        {
            cout<<"-1\n";
            continue;
        }
        ll sum=0;
        vector<ll>V;
        ll cnt=0,samne=0,pichone=n;
        while(s.size()&&cnt++<10000)
        {
            if(s[0]!=s[s.size()-1])
            {
                s.pop_front();
                s.pop_back();
                samne++;
            }
            else
            {
                if(s[0]=='0')
                {
                    V.PB(samne+s.size());
                    s.pop_front();
                    samne++;
                    s.PB('0');
                    sum++;
                }
                else
                {
                    V.PB(samne);
                    s.push_front('1');
                    s.pop_back();
                    samne++;
                    sum++;
                }
            }
            // cout<<s.size()<<" t\n";
        }
        if(sum<=300)
        {
            cout<<sum<<"\n";
            for(ll i:V)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        else
        {
            if(cnt<10000)
                assert(sum<=5000);
            cout<<"-1\n";
        }

    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}