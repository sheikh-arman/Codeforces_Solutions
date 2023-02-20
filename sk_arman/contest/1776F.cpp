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
ll deg[60];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m;
        cin>>n>>m;
        for(ll i=0;i<=n;i++){
            deg[i]=0;
        }
        vector<ll>V,V2;
        for(ll i=0;i<m;i++){
            ll u,v;
            cin>>u>>v;
            deg[u]++;
            deg[v]++;
            V.PB(u);
            V2.PB(v);
        }
        ll val=-1;
        for(ll i=1;i<=n;i++){
            if(deg[i]<n-1){
                val=i;break;
            }
        }
        if(val==-1){
            cout<<"3\n";
            for(ll i=0;i<m;i++){
                if(V[i]==1||V2[i]==1){
                    if(V[i]!=n&&V2[i]!=n){
                        cout<<"1 ";
                    }
                    else{
                        cout<<"3 ";
                    }
                }
                else if(V[i]==2||V2[i]==2){
                    if(V[i]!=1&&V2[i]!=1){
                        cout<<"2 ";
                    }
                    else{
                        cout<<"3 ";
                    }
                }
                else{
                    cout<<"3 ";
                }
            }
            cout<<"\n";
        }
        else{
            cout<<"2\n";
            for(ll i=0;i<m;i++){
                if(V[i]==val||V2[i]==val){
                    cout<<"2 ";
                }
                else{
                    cout<<"1 ";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}