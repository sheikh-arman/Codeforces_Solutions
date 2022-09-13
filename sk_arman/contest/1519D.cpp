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
ll SET(ll NUM,ll POS)
{
    return NUM | (1<<POS);
}
bool isOn(ll NUM,ll POS)
{
    return (bool)(NUM & (1<<POS));
}
ll pre[5100];
ll sup[5100];

int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        vector<ll>Va,Vb;
        Va.PB(0);
        Vb.PB(0);
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            Va.PB(a);
        }
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            Vb.PB(a);
        }
        ll sum=0;
        for(ll i=0; i<=n; i++)
        {
            sum+=(Va[i]*Vb[i]);
            pre[i]=sum;
        }
        sum=0;
        for(ll i=n; i>=0; i--)
        {
            sum+=(Va[i]*Vb[i]);
            sup[i]=sum;
        }
        pre[n+1]=sup[n+1]=0;
        ll ans=sup[0];
        for(ll i=1; i<=n; i++)
        {
            ll left=i-1,right=i+1;
            ll sum=Va[i]*Vb[i];
            while(left>0&&right<=n)
            {
                ll tm=(Va[right]*Vb[left]);
                tm+=(Va[left]*Vb[right]);
                sum+=tm;
                ans=max(ans,sum+pre[left-1]+sup[right+1]);
                left--;
                right++;
            }
            sum=0;
            left=i,right=i+1;
            while(left>0&&right<=n)
            {
                ll tm=(Va[right]*Vb[left]);
                tm+=Va[left]*Vb[right];
                sum+=tm;
                ans=max(ans,sum+pre[left-1]+sup[right+1]);
                left--;
                right++;
            }
            sum=0;
            left=i-1,right=i;
            while(left>0&&right<=n)
            {
                ll tm=(Va[right]*Vb[left]);
                tm+=(Va[left]*Vb[right]);
                sum+=tm;
                ans=max(ans,sum+pre[left-1]+sup[right+1]);
                left--;
                right++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}