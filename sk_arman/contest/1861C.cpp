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
        string s;
        cin>>s;
        n=s.size();
        ll siz=0,ck=1;
        vector<pair<ll,ll>>V;
        ll mi_sort=0;
        ll mi_nsort=100000000;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='+')
            {
                siz++;
            }
            else if(s[i]=='-')
            {
                if(siz==mi_nsort)
                {
                    mi_nsort=1000000000;
                }
                siz--;
                mi_sort=min(mi_sort,siz);

            }
            else if(s[i]=='0')
            {
                if(mi_sort==siz||siz<2)
                {
                    ck=0;
                }
                mi_nsort=min(mi_nsort,siz);
            }
            else
            {
                if(mi_nsort<=siz)
                {
                    ck=0;
                }
                mi_sort=max(mi_sort,siz);
            }
        }
        if(ck)
        {
            YES;
        }
        else
        {
            NO;
        }

    }
    return 0;
///*****************************  ALHAMDULILLAH  *****************************/
}