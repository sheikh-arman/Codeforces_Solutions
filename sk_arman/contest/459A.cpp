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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(ll l, ll r)
{
    return uniform_int_distribution<ll>(l, r) (rng);
}
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2&&y1==y2){
            cout<<"-1\n";
        }
        else{
            if(x1==x2){
                ll dif=abs(y1-y2);
                cout<<x1+dif<<" "<<y1<<" "<<x2+dif<<" "<<y2<<"\n";
            }
            else if(y1==y2){
                ll dif=abs(x1-x2);
                cout<<x1<<" "<<y1+dif<<" "<<x2<<" "<<y2+dif<<"\n";
            }
            else{
                ll x3=min(x1,x2);
                ll y3=min(y1,y2);
                if((x3==x1&&y3==y1)||(x3==x2&&y3==y2)){
                    ll x3=min(x1,x2);
                    ll y3=max(y1,y2);
                    ll x4=max(x1,x2);
                    ll y4=min(y1,y2);
                    if((abs(x3-x4)==abs(y1-y2))&&((abs(y3-y4)==abs(x1-x2)))){
                        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
                    }
                    else{
                        cout<<"-1\n";
                    }
                }
                else{
                    ll x4=max(x1,x2);
                    ll y4=max(y1,y2);
                    if((abs(x3-x4)==abs(y1-y2))&&((abs(y3-y4)==abs(x1-x2)))){
                        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
                    }
                    else{
                        cout<<"-1\n";
                    }
                }
            }
        }
    }
    return 0;
}