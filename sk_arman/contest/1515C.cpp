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
ll ar[200010];
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,m,sum;
        cin>>n>>m>>sum;
        vector< pair<ll,ll> >V;
        for(ll i=1; i<=n; i++)
        {
            ll a;
            cin>>a;
            V.PB({a,i});
        }
        VST(V);
        set<pair<ll,ll> >st;
        for(ll i=1; i<=m; i++)
        {
            st.insert({0,i});
        }
        for(ll i=n-1; i>=0; i--)
        {
            auto it=st.begin();
            ll val=it->first;
            ll indx=it->second;
            st.erase(st.begin());
            ar[V[i].second]=indx;
            st.insert({val+V[i].first,indx});
        }
        auto it1=st.begin();
        auto it2=st.end();
        it2--;
        if(it2->first-it1->first<=sum)
        {
            cout<<"YES\n";
            for(ll i=1; i<=n; i++)
            {
                cout<<ar[i]<<" ";
            }
            cout<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}