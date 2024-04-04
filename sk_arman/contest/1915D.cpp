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
    map<char,ll>mp;
    mp['b']=1;
    mp['c']=1;
    mp['d']=1;
    // freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,sum=0;
        cin>>n;
        string s;
        cin>>s;
        vector<string>V;
        for(ll i=0; i<n; i+=2)
        {
            string ss;
            ss+=s[i];
            if(i+1>=n){
                V[V.size()-1]+=s[i];
                break;
            }
            ss+=s[i+1];
            if(mp[s[i]]==mp[s[i+1]])
            {
                V[V.size()-1]+=s[i];
                i--;
            }
            else
            {
                V.PB(ss);
            }
        }
        ll ck=0;
        for(auto i:V)
        {
            if(ck)cout<<".";ck=1;
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}