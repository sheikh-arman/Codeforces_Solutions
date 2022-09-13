#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES printf("YES\n");
#define NO printf("NO\n");
#define nl printf("\n");
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
///* Policy start

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#include <iostream>
using namespace __gnu_pbds;
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag,
        tree_order_statistics_node_update>
        new_data_set;

//*/
double PI = 2 * acos(0.0);
ll SET(ll NUM,ll POS)
{
    return NUM | (1<<POS);
}
bool isOn(ll NUM,ll POS)
{
    return (bool)(NUM & (1<<POS));
}
vector<ll> prefix_function(string s)
{
    ll n=s.size();
    vector<ll>prefix(n+1);
    ll j=0;
    prefix[0]=0;
    for(ll i=1; i<n; i++)
    {
        while(j>0&&s[i]!=s[j])
        {
            j=prefix[j-1];
        }
        if(s[i]==s[j])
        {
            j++;
        }
        prefix[i]=j;
    }
    return prefix;
}
ll ar[]= {0,1,0,1,1,0,1,0};
ll inter_test(ll l,ll r)
{
    ll sum=0;
    for(ll i=l; i<=r; i++)
    {
        sum+=ar[i];
    }
    return sum;
}
ll inter(ll l,ll r)
{
    cout<<"? "<<l<<" "<<r<<"\n";
    ll val;
    cin>>val;
    return val;
}
ll mem[200010];
int main()
{
    cout.flush();
    //freopen("1input.txt","r",stdin);
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,k,t;
        cin>>n>>t;
        cin>>k;
        for(ll i=0; i<=n; i++)
        {
            mem[i]=-1;
        }
        new_data_set st;
        vector<ll>V,bs;
        while(t--)
        {
            ll left=1,right=n,ans=n;
            while(left<=right)
            {
                ll mid=(left+right)/2;
                ll ase;
                if(mem[mid]==-1)
                {
                    ase=inter(1,mid);
                    //ase=inter_test(1,mid);
                    ll pos=st.order_of_key(mid+1);
                    mem[mid]=ase-pos;
                }
                else
                {
                    ase=mem[mid];
                    ll pos=st.order_of_key(mid+1);
                    ase+=pos;
                }
                if(ase+k<=mid)
                {
                    ans=mid;
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
            st.insert(ans);
            cout<<"! "<<ans<<"\n";
            //ar[ans]=1;
            cin>>k;
        }
    }
    return 0;
}