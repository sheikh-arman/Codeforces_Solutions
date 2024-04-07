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
        deque<ll>V_ev,V_ev_val,V_od,V_od_val;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a%2==0){
                V_ev.PB(i);
                V_ev_val.PB(a);
            }
            else{
                V_od.PB(i);
                V_od_val.PB(a);
            }
        }
        ll ck=1;
        VST(V_ev_val);
        VST(V_od_val);
        while(V_ev.size()&&V_od.size()){
            if(V_ev_val[0]<V_od_val[0]){
                if(V_ev[0]>V_od[0]){
                    ck=0;break;
                }
                V_ev.pop_front();
                V_ev_val.pop_front();
            }
            else{
                if(V_ev[0]<V_od[0]){
                    ck=0;break;
                } 
                 V_od.pop_front();
                 V_od_val.pop_front();
            }
            
          
        }
        if(ck){
            YES;
        }
        else{
            NO;
        }
    }
    return 0;
 ///*****************************  ALHAMDULILLAH  *****************************/
}