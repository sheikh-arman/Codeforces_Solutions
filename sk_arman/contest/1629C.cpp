#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
ll ar_rev[200010];
ll ar[200010];
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,ma=0;
        cin>>n;
        vector<ll>V;
        set<ll>st;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            st.insert(a);
        }
        ll val=0;
        for(ll i=n-1; i>=0; i--)
        {
            ar[V[i]]++;
            while(ar[val])
            {
                val++;
            }
            ar_rev[i]=val;
        }
        vector<ll>ans;
        ll pre=val;
        val=0;
        for(ll i:st)
        {
            ar[i]=0;
        }
        for(ll i=0; i<n; i++)
        {
            ar[V[i]]++;
            while(ar[val])
            {
                val++;
            }
            if(pre==val)
            {
                ans.PB(val);
                val=0;
                for(ll i:st)
                {
                    ar[i]=0;
                }
                pre=ar_rev[i+1];
            }
        }
        ll siz=ans.size();
        cout<<siz<<"\n";
        for(ll i:ans)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        for(ll i:st)
        {
            ar_rev[i]=ar[i]=0;
        }
    }
    return 0;
}