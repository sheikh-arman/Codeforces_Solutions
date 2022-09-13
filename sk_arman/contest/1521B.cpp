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
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        vector<ll>V;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            V.PB(a);
        }
        ll mi=LONG_MAX,ind=0;
        for(ll i=0;i<n;i++){
            if(V[i]<mi){
                mi=V[i];ind=i;
            }
        }
        cout<<n-1<<"\n";
        for(ll i=0;i<n;i++){
            if(i!=ind){
                ll dif=abs(i-ind);
                if(i<ind){
                    cout<<i+1<<" "<<ind+1<<" "<<V[ind]+dif<<" "<<V[ind]<<"\n";
                }
                else{
                    cout<<ind+1<<" "<<i+1<<" "<<V[ind]<<" "<<V[ind]+dif<<"\n";
                }
            }
        }
    }
    return 0;
}