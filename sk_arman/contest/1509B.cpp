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
ll cnt[200000][5];
ll rev_cnt[200000][5];
int main()
{
    //freopen("1input.txt","r",stdin);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {
        ll n;
        string s;
        cin>>n;
        cin>>s;
        n=s.size();
        for(ll i=0; i<=n; i++)
        {
            for(ll j=0; j<3; j++)
            {
                cnt[i][j]=0;
                rev_cnt[i][j]=0;
            }
        }
        ll cnt_m=0,cnt_t=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='T')
            {
                cnt[i][0]=1;
                rev_cnt[i][0]=1;
                cnt_t++;
            }
            else
            {
                cnt[i][1]=1;
                rev_cnt[i][1]=1;
                cnt_m++;
            }
        }
        if((cnt_m*2)!=cnt_t)
        {
            cout<<"NO\n";
            continue;
        }
        for(ll i=1; i<n; i++)
        {
            for(ll j=0; j<2; j++)
            {
                cnt[i][j]+=cnt[i-1][j];
            }
        }
        for(ll i=n-2; i>=0; i--)
        {
            for(ll j=0; j<2; j++)
            {
                rev_cnt[i][j]+=rev_cnt[i+1][j];
            }
        }
        ll ck=1;
        for(ll i=0; i<n; i++)
        {
            if(cnt[i][0]<cnt[i][1])
            {
                ck=0;
                break;
            }
        }
        for(ll i=n-1; i>=0; i--)
        {
            if(rev_cnt[i][0]<rev_cnt[i][1])
            {
               // cout<<i<<" x\n";
                ck=0;
                break;
            }
        }

        if(ck)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    return 0;
}