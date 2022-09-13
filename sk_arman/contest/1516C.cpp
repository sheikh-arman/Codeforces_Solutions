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
ll mem[110][100010],n;
vector<ll>V;
ll dp(ll i,ll w)
{
    if(i>=n)
    {
        if(w==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(mem[i][w]!=-1)return mem[i][w];
    ll ans=0;
    if(w-V[i]>=0)
    {
        ans|=dp(i+1,w-V[i]);
    }
    ans|=dp(i+1,w);
    return mem[i][w]=ans;
}
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        cin>>n;
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            sum+=a;
        }
        ll ck=0;
        if(sum%2==0)
        {
            for(ll i=0; i<=n; i++)
            {
                for(ll j=0; j<=sum/2; j++)
                {
                    mem[i][j]=-1;
                }
            }
            ck=dp(0,sum/2);
        }
        if(ck==0)
        {
            cout<<"0\n";
        }
        else
        {
            ll pos=0,cnt=33;
            for(ll i=0; i<n; i++)
            {
                ll num=V[i];
                ll first_1=0;
                while(num%2==0)
                {
                    first_1++;
                    num/=2;
                }
                if(first_1<cnt)
                {
                    cnt=first_1;
                    pos=i;
                }
            }
            cout<<"1\n";
            cout<<pos+1<<"\n";
        }
    }
    return 0;
}