#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
ll extended_euclidean(ll a, ll b, ll& x, ll& y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extended_euclidean(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
bitset<100010>ck;
int main()
{
    //freopen("1input.txt","r",stdin);
    //fast;
    ll tcase=1;
    //cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        cin>>n;
        ll num=n;
        ll sq=sqrt(n+1);
        vector<ll>prime;
        for(ll i=2; i<=num; i++)
        {
            if(num%i==0)
            {
                prime.PB(i);
                while(num%i==0)
                {
                    num/=i;
                }
            }
        }
        for(ll i:prime)
        {
            for(ll j=1; j<n; j++)
            {
                if(j%i==0)
                    ck[j]=1;
            }
        }
        ll val=1;
        ll cnt=0;
        for(ll i=1; i<n; i++)
        {
            if(ck[i]==0)
            {
                val*=i;
                val%=n;
                cnt++;
                //cout<<val<<" "<<i<<" x\n";
            }
        }
        // cout<<val<<"\n";
        ll cnt_rec=0;
        while(val!=1)
        {
            ck[val]=1;
            cnt--;
            ll x,y;
            ll g = extended_euclidean(val, n, x, y);
            x = ((x % n) + n) % n;
            val*=x;
            val%=n;
            if(cnt_rec>n)break;
            cnt_rec++;
        }
        cout<<cnt<<"\n";
        for(ll i=1; i<n; i++)
        {
            if(ck[i]==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}