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
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        vector<pair<double,double> >V;
        for(ll i=0; i<3; i++)
        {
            ll a,b;
            cin>>a>>b;
            V.PB({a,b});
        }
        double x,y;
        cout<<"3\n";
        x=(V[0].first+V[1].first)/2;
        y=(V[0].second+V[1].second)/2;
        x+=(x-V[2].first);
        y+=(y-V[2].second);
        cout<<(int)x<<" "<<(int)y<<"\n";
        x=(V[0].first+V[2].first)/2;
        y=(V[0].second+V[2].second)/2;
        x+=(x-V[1].first);
        y+=(y-V[1].second);
        cout<<(int)x<<" "<<(int)y<<"\n";
        x=(V[1].first+V[2].first)/2;
        y=(V[1].second+V[2].second)/2;
        x+=(x-V[0].first);
        y+=(y-V[0].second);
        cout<<(int)x<<" "<<(int)y<<"\n";
    }
    return 0;
}