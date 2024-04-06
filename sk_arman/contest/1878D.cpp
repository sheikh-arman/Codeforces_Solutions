/*

SK Arman Hossain


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
ll ar[200010];
//ll block[200010];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    //fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,k;
        cin>>n>>k;
        for(ll i=0;i<=n;i++){
            ar[i]=0;
        }
        vector<ll>l,r;
        string s;
        cin>>s;
        for(ll i=0;i<k;i++){
            ll a;
            cin>>a;
            l.PB(a-1);
        }
        for(ll i=0;i<k;i++){
            ll a;
            cin>>a;
            r.PB(a-1);
        }

        ll q;
        cin>>q;
        for(ll i=0;i<q;i++){
            ll x;
            cin>>x;
            x--;
            ll pos=upper_bound(l.begin(),l.end(),x)-l.begin();
            pos--;
            x=min(x,(l[pos]+r[pos])-x);
            ar[x]++;
        }
        for(ll i=0;i<k;i++){
            ll cnt=0;
            ll ma=(r[i]-l[i])/2;
            for(ll j=l[i];j<=l[i]+ma;j++){
                cnt+=ar[j];
                //cout<<j<<" "<<cnt<<" x\n";
                if(cnt%2){
                    //cout<<" t\n";
                    ll b=r[i]-(j-l[i]);
                    swap(s[j],s[b]);
                }
            }
        }
        cout<<s<<"\n";

    }
    return 0;
 ///*****************************  ALHAMDULILLAH  *****************************/
}