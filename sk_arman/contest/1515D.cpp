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
ll ar_left[200011];
ll ar_right[200011];
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n,l,r;
        cin>>n>>l>>r;
        for(ll i=0; i<=n; i++)
        {
            ar_left[i]=ar_right[i]=0;
        }
        for(ll i=0; i<l; i++)
        {
            ll a;
            cin>>a;
            ar_left[a]++;
        }
        ll cnt_match=0;
        for(ll j=0; j<r; j++)
        {
            ll a;
            cin>>a;
            if(ar_left[a]>0)
            {
                ar_left[a]--;
                cnt_match++;
            }
            else
            {
                ar_right[a]++;
            }
        }
        l-=cnt_match;
        r-=cnt_match;
        ll mi=min(l,r);
        ll ans=99999999;
        if(l+(l==r)>mi)
        {
            ll sum=mi;
            ll left=1;
            while(mi>0&&left<=n)
            {
                if(ar_left[left]%2!=0)
                {
                    ar_left[left]--;
                    mi--;
                }
                left++;
            }
            sum-=mi/2;
            ll pre_ase=0;
            for(ll i=1; i<=n; i++)
            {
                if(ar_left[i]>0)
                {
                    ll val=ar_left[i];
                    sum+=val/2;
                    if(val%2!=0)
                    {
                        sum+=1;
                        pre_ase++;
                        pre_ase%=2;
                    }
                }
            }
            ans=min(ans,sum);
            // T(sum);
        }
        mi=min(l,r);
        if(r+(r==l)>mi)
        {
            ll sum=mi;
            ll right=1;
            while(mi>0&&right<=n)
            {
                if(ar_right[right]%2!=0)
                {
                    ar_right[right]--;
                    mi--;
                }
                right++;
            }
            sum-=mi/2;
            ll pre_ase=0;
            for(ll i=1; i<=n; i++)
            {
                if(ar_right[i]>0)
                {
                    ll val=ar_right[i];
                    sum+=val/2;
                    if(val%2!=0)
                    {
                        sum+=1;
                        pre_ase++;
                        pre_ase%=2;
                    }
                }
            }
            ans=min(ans,sum);
            // T(sum);
        }
        cout<<ans<<"\n";
    }
    return 0;
}