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
    // freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        set<ll>st;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            st.insert(a);
        }
        ll ck=0,pre=0;
        for(ll i:st)
        {
            n--;
            ck^=1;
            ll x=i-pre;
            if(x>1)break;
            pre=i;

        }
        if(ck==0)
        {
            cout<<"Bob\n";
        }
        else
        {
            cout<<"Alice\n";
        }
//        if(n){
//            if(ck==0){
//                cout<<"Bob\n";
//            }
//            else{
//                cout<<"Alice\n";
//            }
//        }
//        else{
//
//        }


    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}