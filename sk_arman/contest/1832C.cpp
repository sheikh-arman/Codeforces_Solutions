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
        ll ans=0;
        vector<ll>V;
        set<ll>st;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            st.insert(a);
        }
        vector<ll>V2;
        for(ll i=1; i<n; i++)
        {
            if(V[i]>V[i-1])
            {
                V2.PB(1);
            }
            else if(V[i]<V[i-1])
            {
                V2.PB(-1);
            }
            else
            {
                V2.PB(0);
            }
        }
        n=V2.size();
        for(ll i=0; i<n; i++)
        {
            //cout<<V2[i]<<" "<<i<<" \n";
            ll val=V2[i];
            ans++;
            ll j=i+1;
            ll pre=V2[i];
            while(j<n)

            {
                if(pre==0)
                {
                    pre=V2[j];
                    j++;
                }
                else{
                    if(V2[j]==pre||V2[j]==0){
                        j++;
                    }
                    else{
                        break;
                    }
                }
            }
            i=j-1;
        }
        ans++;
        if(st.size()==1)ans--;
        ans=max(1LL,ans);
        cout<<ans<<"\n";


    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}