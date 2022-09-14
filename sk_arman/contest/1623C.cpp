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
vector<ll>V;
ll n;
ll addition[200010];
ll cal(ll mid)
{
    ll ck=1;
    vector<ll>new_V=V;
    for(ll i=0; i<n; i++)
    {
        new_V.PB(V[i]);
        addition[i]=0;
    }
    //cout<<mid<<" x ";
    for(ll i=n-1; i>=2; i--)
    {
        ll extra=0;
        if(new_V[i]+addition[i]<mid){
            ck=0;break;
        }
        if(addition[i]>=mid){
            extra=new_V[i];
        }
        else{
            extra=(new_V[i]+addition[i])-mid;
        }
        extra/=3;
        addition[i-2]+=2*extra;
        addition[i-1]+=extra;
        new_V[i]-=extra;
    }
    for(ll i=0; i<n; i++)
    {
        if(new_V[i]+addition[i]<mid)
        {
            ck=0;
            break;
        }
    }
    return ck;
}
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll mi=999999999999,ma=0;
        cin>>n;
        V.clear();
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            V.PB(a);
            mi=min(mi,a);
            ma=max(ma,a);
        }
        ll left=mi,right=ma,ans=mi;
        while(left<=right)
        {
            ll mid=(left+right)/2;
            ll ki_hobe=cal(mid);
            if(ki_hobe)
            {
                ans=max(ans,mid);
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}