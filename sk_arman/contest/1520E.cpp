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
ll pre[1000010];
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
        string s;
        cin>>s;
        pre[n]=0;
        for(ll i=n-1;i>=0;i--){
            if(s[i]=='*'){
                pre[i]=pre[i+1]+1;
            }
            else{
                pre[i]=pre[i+1];
            }
        }
        ll ans=0;
        ll ase=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='*'){
                ase++;
            }
            else{
                ans+=min(ase,pre[i+1]);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}